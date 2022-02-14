
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nci_dev {void* cmd_wq; void* rx_wq; TYPE_1__* nfc_dev; int conn_info_list; int req_lock; int data_timer; int cmd_timer; int tx_q; int rx_q; int cmd_q; void* tx_wq; int tx_work; int rx_work; int cmd_work; scalar_t__ flags; } ;
struct device {int dummy; } ;
typedef int name ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 void* FUNC_2 (char*) ;
 int FUNC_3 (void*) ;
 char* FUNC_4 (struct device*) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,int,char*,char*) ;
 int FUNC_9 (int *,int ,int ) ;

int FUNC_10(struct nci_dev *VAR_6)
{
 int VAR_7;
 struct device *VAR_8 = &VAR_6->nfc_dev->dev;
 char VAR_9[32];

 VAR_6->flags = 0;

 FUNC_1(&VAR_6->cmd_work, VAR_2);
 FUNC_8(VAR_9, sizeof(VAR_9), "%s_nci_cmd_wq", FUNC_4(VAR_8));
 VAR_6->cmd_wq = FUNC_2(VAR_9);
 if (!VAR_6->cmd_wq) {
  VAR_7 = -VAR_0;
  goto exit;
 }

 FUNC_1(&VAR_6->rx_work, VAR_4);
 FUNC_8(VAR_9, sizeof(VAR_9), "%s_nci_rx_wq", FUNC_4(VAR_8));
 VAR_6->rx_wq = FUNC_2(VAR_9);
 if (!VAR_6->rx_wq) {
  VAR_7 = -VAR_0;
  goto destroy_cmd_wq_exit;
 }

 FUNC_1(&VAR_6->tx_work, VAR_5);
 FUNC_8(VAR_9, sizeof(VAR_9), "%s_nci_tx_wq", FUNC_4(VAR_8));
 VAR_6->tx_wq = FUNC_2(VAR_9);
 if (!VAR_6->tx_wq) {
  VAR_7 = -VAR_0;
  goto destroy_rx_wq_exit;
 }

 FUNC_7(&VAR_6->cmd_q);
 FUNC_7(&VAR_6->rx_q);
 FUNC_7(&VAR_6->tx_q);

 FUNC_9(&VAR_6->cmd_timer, VAR_1, 0);
 FUNC_9(&VAR_6->data_timer, VAR_3, 0);

 FUNC_5(&VAR_6->req_lock);
 FUNC_0(&VAR_6->conn_info_list);

 VAR_7 = FUNC_6(VAR_6->nfc_dev);
 if (VAR_7)
  goto destroy_rx_wq_exit;

 goto exit;

destroy_rx_wq_exit:
 FUNC_3(VAR_6->rx_wq);

destroy_cmd_wq_exit:
 FUNC_3(VAR_6->cmd_wq);

exit:
 return VAR_7;
}
