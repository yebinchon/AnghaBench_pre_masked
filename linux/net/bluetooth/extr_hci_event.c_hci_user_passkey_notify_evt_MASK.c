
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct hci_ev_user_passkey_notify {int passkey; int bdaddr; } ;
struct hci_dev {int name; } ;
struct hci_conn {scalar_t__ passkey_entered; int passkey_notify; int dst_type; int type; int dst; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct hci_conn* FUNC_2 (struct hci_dev*,int ,int *) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*,int *,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct hci_dev *VAR_2,
     struct sk_buff *VAR_3)
{
 struct hci_ev_user_passkey_notify *VAR_4 = (void *) VAR_3->data;
 struct hci_conn *VAR_5;

 FUNC_0("%s", VAR_2->name);

 VAR_5 = FUNC_2(VAR_2, VAR_0, &VAR_4->bdaddr);
 if (!VAR_5)
  return;

 VAR_5->passkey_notify = FUNC_1(VAR_4->passkey);
 VAR_5->passkey_entered = 0;

 if (FUNC_3(VAR_2, VAR_1))
  FUNC_4(VAR_2, &VAR_5->dst, VAR_5->type,
      VAR_5->dst_type, VAR_5->passkey_notify,
      VAR_5->passkey_entered);
}
