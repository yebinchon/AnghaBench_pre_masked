
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct hci_dev {int cmd_work; int workqueue; int cmd_q; TYPE_1__* sent_cmd; } ;
struct hci_command_hdr {int opcode; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 struct sk_buff* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_4(struct hci_dev *VAR_2)
{
 struct hci_command_hdr *VAR_3;
 struct sk_buff *VAR_4;
 u16 VAR_5;

 if (!VAR_2->sent_cmd)
  return;

 VAR_3 = (void *) VAR_2->sent_cmd->data;
 VAR_5 = FUNC_0(VAR_3->opcode);
 if (VAR_5 == VAR_1)
  return;

 VAR_4 = FUNC_2(VAR_2->sent_cmd, VAR_0);
 if (!VAR_4)
  return;

 FUNC_3(&VAR_2->cmd_q, VAR_4);
 FUNC_1(VAR_2->workqueue, &VAR_2->cmd_work);
}
