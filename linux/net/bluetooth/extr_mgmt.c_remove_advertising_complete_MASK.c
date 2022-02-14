
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct mgmt_rp_remove_advertising {int instance; } ;
struct mgmt_pending_cmd {int opcode; int index; int sk; struct mgmt_cp_remove_advertising* param; } ;
struct mgmt_cp_remove_advertising {int instance; } ;
struct hci_dev {int dummy; } ;
typedef int rp ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct hci_dev*) ;
 int FUNC_2 (struct hci_dev*) ;
 int FUNC_3 (int ,int ,int ,int ,struct mgmt_rp_remove_advertising*,int) ;
 int FUNC_4 (struct mgmt_pending_cmd*) ;
 struct mgmt_pending_cmd* FUNC_5 (int ,struct hci_dev*) ;

__attribute__((used)) static void FUNC_6(struct hci_dev *VAR_2, u8 VAR_3,
     u16 VAR_4)
{
 struct mgmt_pending_cmd *VAR_5;
 struct mgmt_cp_remove_advertising *VAR_6;
 struct mgmt_rp_remove_advertising VAR_7;

 FUNC_0("status %d", VAR_3);

 FUNC_1(VAR_2);





 VAR_5 = FUNC_5(VAR_0, VAR_2);
 if (!VAR_5)
  goto unlock;

 VAR_6 = VAR_5->param;
 VAR_7.instance = VAR_6->instance;

 FUNC_3(VAR_5->sk, VAR_5->index, VAR_5->opcode, VAR_1,
     &VAR_7, sizeof(VAR_7));
 FUNC_4(VAR_5);

unlock:
 FUNC_2(VAR_2);
}
