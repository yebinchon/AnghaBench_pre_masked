
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mgmt_pending_cmd {int sk; int opcode; int index; } ;
struct hci_dev {int discov_timeout; int discov_off; int req_workqueue; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 scalar_t__ FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int FUNC_6 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct hci_dev*,int ) ;
 struct mgmt_pending_cmd* FUNC_10 (int ,struct hci_dev*) ;
 int FUNC_11 (int ,int *,int) ;
 int FUNC_12 (int ,int ,struct hci_dev*) ;

void FUNC_13(struct hci_dev *VAR_3, u8 VAR_4)
{
 struct mgmt_pending_cmd *VAR_5;

 FUNC_0("status 0x%02x", VAR_4);

 FUNC_2(VAR_3);

 VAR_5 = FUNC_10(VAR_2, VAR_3);
 if (!VAR_5)
  goto unlock;

 if (VAR_4) {
  u8 VAR_6 = FUNC_7(VAR_4);
  FUNC_5(VAR_5->sk, VAR_5->index, VAR_5->opcode, VAR_6);
  FUNC_1(VAR_3, VAR_1);
  goto remove_cmd;
 }

 if (FUNC_3(VAR_3, VAR_0) &&
     VAR_3->discov_timeout > 0) {
  int VAR_7 = FUNC_8(VAR_3->discov_timeout * 1000);
  FUNC_11(VAR_3->req_workqueue, &VAR_3->discov_off, VAR_7);
 }

 FUNC_12(VAR_5->sk, VAR_2, VAR_3);
 FUNC_9(VAR_3, VAR_5->sk);

remove_cmd:
 FUNC_6(VAR_5);

unlock:
 FUNC_4(VAR_3);
}
