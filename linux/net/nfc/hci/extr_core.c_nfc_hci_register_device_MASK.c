
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_hci_dev {int ndev; int msg_rx_queue; int msg_rx_work; int rx_hcp_frags; int cmd_timer; int msg_tx_work; int msg_tx_queue; int msg_tx_mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;

int FUNC_6(struct nfc_hci_dev *VAR_3)
{
 FUNC_2(&VAR_3->msg_tx_mutex);

 FUNC_0(&VAR_3->msg_tx_queue);

 FUNC_1(&VAR_3->msg_tx_work, VAR_2);

 FUNC_5(&VAR_3->cmd_timer, VAR_0, 0);

 FUNC_4(&VAR_3->rx_hcp_frags);

 FUNC_1(&VAR_3->msg_rx_work, VAR_1);

 FUNC_4(&VAR_3->msg_rx_queue);

 return FUNC_3(VAR_3->ndev);
}
