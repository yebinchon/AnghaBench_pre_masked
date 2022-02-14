
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mgmt_pending_cmd {int sk; int opcode; int index; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;
 int FUNC_4 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct hci_dev*,int ) ;
 struct mgmt_pending_cmd* FUNC_7 (int ,struct hci_dev*) ;
 int FUNC_8 (int ,int ,struct hci_dev*) ;

void FUNC_9(struct hci_dev *VAR_1, u8 VAR_2)
{
 struct mgmt_pending_cmd *VAR_3;

 FUNC_0("status 0x%02x", VAR_2);

 FUNC_1(VAR_1);

 VAR_3 = FUNC_7(VAR_0, VAR_1);
 if (!VAR_3)
  goto unlock;

 if (VAR_2) {
  u8 VAR_4 = FUNC_5(VAR_2);
  FUNC_3(VAR_3->sk, VAR_3->index, VAR_3->opcode, VAR_4);
  goto remove_cmd;
 }

 FUNC_8(VAR_3->sk, VAR_0, VAR_1);
 FUNC_6(VAR_1, VAR_3->sk);

remove_cmd:
 FUNC_4(VAR_3);

unlock:
 FUNC_2(VAR_1);
}
