
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_read_page_scan_type {int type; scalar_t__ status; } ;
struct hci_dev {int page_scan_type; int flags; int name; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct hci_dev *VAR_1,
        struct sk_buff *VAR_2)
{
 struct hci_rp_read_page_scan_type *VAR_3 = (void *) VAR_2->data;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 if (FUNC_1(VAR_0, &VAR_1->flags))
  VAR_1->page_scan_type = VAR_3->type;
}
