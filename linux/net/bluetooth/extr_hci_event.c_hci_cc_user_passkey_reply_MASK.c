
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_rp_user_confirm_reply {int status; int bdaddr; } ;
struct hci_dev {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*) ;
 scalar_t__ FUNC_2 (struct hci_dev*,int ) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (struct hci_dev*,int *,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct hci_rp_user_confirm_reply *VAR_4 = (void *) VAR_3->data;

 FUNC_0("%s status 0x%2.2x", VAR_2->name, VAR_4->status);

 FUNC_1(VAR_2);

 if (FUNC_2(VAR_2, VAR_1))
  FUNC_4(VAR_2, &VAR_4->bdaddr, VAR_0,
       0, VAR_4->status);

 FUNC_3(VAR_2);
}
