
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_user_passkey_req {int bdaddr; } ;
struct hci_dev {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct hci_dev *VAR_2,
      struct sk_buff *VAR_3)
{
 struct hci_ev_user_passkey_req *VAR_4 = (void *) VAR_3->data;

 FUNC_0("%s", VAR_2->name);

 if (FUNC_1(VAR_2, VAR_1))
  FUNC_2(VAR_2, &VAR_4->bdaddr, VAR_0, 0);
}
