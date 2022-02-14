
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;struct mgmt_cp_disconnect* param; } ;
struct TYPE_2__ {scalar_t__ type; int bdaddr; } ;
struct mgmt_cp_disconnect {TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;
typedef int bdaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,struct hci_dev*,int ,struct hci_dev*) ;
 int FUNC_3 (struct mgmt_pending_cmd*) ;
 int FUNC_4 (scalar_t__) ;
 struct mgmt_pending_cmd* FUNC_5 (int ,struct hci_dev*) ;
 int FUNC_6 (struct mgmt_pending_cmd*,int ) ;
 int VAR_2 ;

void FUNC_7(struct hci_dev *VAR_3, bdaddr_t *VAR_4,
       u8 VAR_5, u8 VAR_6, u8 VAR_7)
{
 u8 VAR_8 = FUNC_1(VAR_5, VAR_6);
 struct mgmt_cp_disconnect *VAR_9;
 struct mgmt_pending_cmd *VAR_10;

 FUNC_2(VAR_1, VAR_3, VAR_2,
        VAR_3);

 VAR_10 = FUNC_5(VAR_0, VAR_3);
 if (!VAR_10)
  return;

 VAR_9 = VAR_10->param;

 if (FUNC_0(VAR_4, &VAR_9->addr.bdaddr))
  return;

 if (VAR_9->addr.type != VAR_8)
  return;

 VAR_10->cmd_complete(VAR_10, FUNC_4(VAR_7));
 FUNC_3(VAR_10);
}
