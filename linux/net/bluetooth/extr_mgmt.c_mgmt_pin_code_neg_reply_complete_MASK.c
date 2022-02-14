
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;} ;
struct hci_dev {int dummy; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct mgmt_pending_cmd*) ;
 int FUNC_1 (int ) ;
 struct mgmt_pending_cmd* FUNC_2 (int ,struct hci_dev*) ;
 int FUNC_3 (struct mgmt_pending_cmd*,int ) ;

void FUNC_4(struct hci_dev *VAR_1, bdaddr_t *VAR_2,
          u8 VAR_3)
{
 struct mgmt_pending_cmd *VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_4)
  return;

 VAR_4->cmd_complete(VAR_4, FUNC_1(VAR_3));
 FUNC_0(VAR_4);
}
