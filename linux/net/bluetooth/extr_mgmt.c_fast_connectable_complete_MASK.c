
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct mgmt_pending_cmd {int sk; struct mgmt_mode* param; } ;
struct mgmt_mode {scalar_t__ val; } ;
struct hci_dev {int id; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct mgmt_pending_cmd*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 struct mgmt_pending_cmd* FUNC_9 (int ,struct hci_dev*) ;
 int FUNC_10 (int ,int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_2, u8 VAR_3,
          u16 VAR_4)
{
 struct mgmt_pending_cmd *VAR_5;

 FUNC_0("status 0x%02x", VAR_3);

 FUNC_2(VAR_2);

 VAR_5 = FUNC_9(VAR_1, VAR_2);
 if (!VAR_5)
  goto unlock;

 if (VAR_3) {
  FUNC_5(VAR_5->sk, VAR_2->id, VAR_1,
           FUNC_7(VAR_3));
 } else {
  struct mgmt_mode *VAR_6 = VAR_5->param;

  if (VAR_6->val)
   FUNC_3(VAR_2, VAR_0);
  else
   FUNC_1(VAR_2, VAR_0);

  FUNC_10(VAR_5->sk, VAR_1, VAR_2);
  FUNC_8(VAR_2, VAR_5->sk);
 }

 FUNC_6(VAR_5);

unlock:
 FUNC_4(VAR_2);
}
