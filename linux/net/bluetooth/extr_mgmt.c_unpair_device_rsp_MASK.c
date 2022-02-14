
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mgmt_pending_cmd {int (* cmd_complete ) (struct mgmt_pending_cmd*,int ) ;int sk; struct mgmt_cp_unpair_device* param; } ;
struct TYPE_2__ {int type; int bdaddr; } ;
struct mgmt_cp_unpair_device {TYPE_1__ addr; } ;
struct hci_dev {int dummy; } ;


 int FUNC_0 (struct hci_dev*,int *,int ,int ) ;
 int FUNC_1 (struct mgmt_pending_cmd*) ;
 int FUNC_2 (struct mgmt_pending_cmd*,int ) ;

__attribute__((used)) static void FUNC_3(struct mgmt_pending_cmd *VAR_0, void *VAR_1)
{
 struct hci_dev *VAR_2 = VAR_1;
 struct mgmt_cp_unpair_device *VAR_3 = VAR_0->param;

 FUNC_0(VAR_2, &VAR_3->addr.bdaddr, VAR_3->addr.type, VAR_0->sk);

 VAR_0->cmd_complete(VAR_0, 0);
 FUNC_1(VAR_0);
}
