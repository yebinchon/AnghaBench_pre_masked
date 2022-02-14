
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct nfc_hci_dev {int msg_tx_mutex; int * cmd_pending_msg; } ;


 int FUNC_0 (struct nfc_hci_dev*,int ,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct nfc_hci_dev *VAR_0, u8 VAR_1,
      struct sk_buff *VAR_2)
{
 FUNC_2(&VAR_0->msg_tx_mutex);

 if (VAR_0->cmd_pending_msg == ((void*)0)) {
  FUNC_1(VAR_2);
  goto exit;
 }

 FUNC_0(VAR_0, FUNC_4(VAR_1), VAR_2);

exit:
 FUNC_3(&VAR_0->msg_tx_mutex);
}
