
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_write_link_policy {int handle; scalar_t__ status; } ;
struct hci_dev {int name; } ;
struct hci_conn {int link_policy; } ;


 int FUNC_0 (char*,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*) ;
 struct hci_conn* FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (struct hci_dev*) ;
 void* FUNC_6 (struct hci_dev*,int ) ;

__attribute__((used)) static void FUNC_7(struct hci_dev *VAR_1, struct sk_buff *VAR_2)
{
 struct hci_rp_write_link_policy *VAR_3 = (void *) VAR_2->data;
 struct hci_conn *VAR_4;
 void *VAR_5;

 FUNC_0("%s status 0x%2.2x", VAR_1->name, VAR_3->status);

 if (VAR_3->status)
  return;

 VAR_5 = FUNC_6(VAR_1, VAR_0);
 if (!VAR_5)
  return;

 FUNC_4(VAR_1);

 VAR_4 = FUNC_3(VAR_1, FUNC_1(VAR_3->handle));
 if (VAR_4)
  VAR_4->link_policy = FUNC_2(VAR_5 + 2);

 FUNC_5(VAR_1);
}
