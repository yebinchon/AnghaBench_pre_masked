
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct mgmt_pending_cmd {int sk; int opcode; int index; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (struct mgmt_pending_cmd*) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct hci_dev*,int ) ;
 struct mgmt_pending_cmd* FUNC_8 (int ,struct hci_dev*) ;
 int FUNC_9 (int ,int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_10(struct hci_dev *VAR_2, u8 VAR_3, u16 VAR_4)
{
 struct mgmt_pending_cmd *VAR_5;

 FUNC_0("status 0x%02x", VAR_3);

 FUNC_2(VAR_2);

 VAR_5 = FUNC_8(VAR_1, VAR_2);
 if (!VAR_5)
  goto unlock;

 if (VAR_3) {
  u8 VAR_6 = FUNC_6(VAR_3);




  FUNC_1(VAR_2, VAR_0);

  FUNC_4(VAR_5->sk, VAR_5->index, VAR_5->opcode, VAR_6);
 } else {
  FUNC_9(VAR_5->sk, VAR_1, VAR_2);
  FUNC_7(VAR_2, VAR_5->sk);
 }

 FUNC_5(VAR_5);

unlock:
 FUNC_3(VAR_2);
}
