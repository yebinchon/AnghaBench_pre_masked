
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_hci_dev {int msg_tx_mutex; int ndev; int * cmd_pending_msg; } ;


 int FUNC_0 (struct nfc_hci_dev*,int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct nfc_hci_dev *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->msg_tx_mutex);

 if (VAR_0->cmd_pending_msg == ((void*)0)) {
  FUNC_3(VAR_0->ndev, VAR_1);
  goto exit;
 }

 FUNC_0(VAR_0, VAR_1, ((void*)0));

exit:
 FUNC_2(&VAR_0->msg_tx_mutex);
}
