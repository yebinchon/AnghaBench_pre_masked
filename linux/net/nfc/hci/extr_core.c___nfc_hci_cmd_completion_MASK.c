
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfc_hci_dev {int msg_tx_work; TYPE_1__* cmd_pending_msg; int cmd_timer; } ;
struct TYPE_2__ {int cb_context; int (* cb ) (int ,struct sk_buff*,int) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct nfc_hci_dev *VAR_0, int VAR_1,
         struct sk_buff *VAR_2)
{
 FUNC_0(&VAR_0->cmd_timer);

 if (VAR_0->cmd_pending_msg->cb)
  VAR_0->cmd_pending_msg->cb(VAR_0->cmd_pending_msg->cb_context,
       VAR_2, VAR_1);
 else
  FUNC_2(VAR_2);

 FUNC_1(VAR_0->cmd_pending_msg);
 VAR_0->cmd_pending_msg = ((void*)0);

 FUNC_3(&VAR_0->msg_tx_work);
}
