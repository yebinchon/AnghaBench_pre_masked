
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mgmt_pending_cmd {int opcode; int index; int sk; } ;
struct hci_dev {int dev_class; } ;


 int FUNC_0 (struct hci_dev*) ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (struct mgmt_pending_cmd*) ;
 int FUNC_4 (int ) ;
 struct mgmt_pending_cmd* FUNC_5 (int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct mgmt_pending_cmd *VAR_3;

 FUNC_0(VAR_0);

 VAR_3 = FUNC_5(VAR_1, VAR_0);
 if (!VAR_3)
  goto unlock;

 FUNC_2(VAR_3->sk, VAR_3->index, VAR_3->opcode,
     FUNC_4(VAR_2), VAR_0->dev_class, 3);

 FUNC_3(VAR_3);

unlock:
 FUNC_1(VAR_0);
}
