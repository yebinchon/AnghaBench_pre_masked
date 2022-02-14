
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nci_hci_dev {struct nci_dev* ndev; int msg_rx_queue; int msg_rx_work; int rx_hcp_frags; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 struct nci_hci_dev* FUNC_1 (int,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

struct nci_hci_dev *FUNC_3(struct nci_dev *VAR_2)
{
 struct nci_hci_dev *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->rx_hcp_frags);
 FUNC_0(&VAR_3->msg_rx_work, VAR_1);
 FUNC_2(&VAR_3->msg_rx_queue);
 VAR_3->ndev = VAR_2;

 return VAR_3;
}
