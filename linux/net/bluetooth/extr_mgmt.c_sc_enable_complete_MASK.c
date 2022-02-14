
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mgmt_pending_cmd {int sk; struct mgmt_mode* param; int opcode; int index; } ;
struct mgmt_mode {int val; } ;
struct hci_dev {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct hci_dev*,int ) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (struct hci_dev*,int ) ;
 int FUNC_4 (struct hci_dev*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct mgmt_pending_cmd*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct hci_dev*,int ) ;
 struct mgmt_pending_cmd* FUNC_9 (int ,struct hci_dev*) ;
 int FUNC_10 (int ,int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_11(struct hci_dev *VAR_3, u8 VAR_4, u16 VAR_5)
{
 struct mgmt_pending_cmd *VAR_6;
 struct mgmt_mode *VAR_7;

 FUNC_0("%s status %u", VAR_3->name, VAR_4);

 FUNC_2(VAR_3);

 VAR_6 = FUNC_9(VAR_2, VAR_3);
 if (!VAR_6)
  goto unlock;

 if (VAR_4) {
  FUNC_5(VAR_6->sk, VAR_6->index, VAR_6->opcode,
           FUNC_7(VAR_4));
  goto remove;
 }

 VAR_7 = VAR_6->param;

 switch (VAR_7->val) {
 case 0x00:
  FUNC_1(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_1);
  break;
 case 0x01:
  FUNC_3(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_1);
  break;
 case 0x02:
  FUNC_3(VAR_3, VAR_0);
  FUNC_3(VAR_3, VAR_1);
  break;
 }

 FUNC_10(VAR_6->sk, VAR_2, VAR_3);
 FUNC_8(VAR_3, VAR_6->sk);

remove:
 FUNC_6(VAR_6);
unlock:
 FUNC_4(VAR_3);
}
