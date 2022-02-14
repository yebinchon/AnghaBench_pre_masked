
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_local_version {int lmp_subver; int manufacturer; int lmp_ver; int hci_rev; int hci_ver; scalar_t__ status; } ;
struct hci_dev {void* lmp_subver; void* manufacturer; int lmp_ver; void* hci_rev; int hci_ver; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_rp_read_local_version *VAR_4 = (void *) VAR_3->data;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4->status);

 if (VAR_4->status)
  return;

 if (FUNC_2(VAR_2, VAR_1) ||
     FUNC_2(VAR_2, VAR_0)) {
  VAR_2->hci_ver = VAR_4->hci_ver;
  VAR_2->hci_rev = FUNC_1(VAR_4->hci_rev);
  VAR_2->lmp_ver = VAR_4->lmp_ver;
  VAR_2->manufacturer = FUNC_1(VAR_4->manufacturer);
  VAR_2->lmp_subver = FUNC_1(VAR_4->lmp_subver);
 }
}
