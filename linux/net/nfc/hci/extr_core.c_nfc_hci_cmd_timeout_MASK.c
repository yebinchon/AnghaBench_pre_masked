
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct nfc_hci_dev {int msg_tx_work; } ;


 int VAR_0 ;
 struct nfc_hci_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 struct nfc_hci_dev* VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct nfc_hci_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);

 FUNC_1(&VAR_3->msg_tx_work);
}
