
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llcp_local {int pending_sdreqs; int sdreq_timeout_work; int sdreq_timer; int rx_pending; int timeout_work; int rx_work; int tx_work; int tx_queue; int link_timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct nfc_llcp_local*,int,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct nfc_llcp_local *VAR_1)
{
 FUNC_4(VAR_1, 0, VAR_0);
 FUNC_1(&VAR_1->link_timer);
 FUNC_5(&VAR_1->tx_queue);
 FUNC_0(&VAR_1->tx_work);
 FUNC_0(&VAR_1->rx_work);
 FUNC_0(&VAR_1->timeout_work);
 FUNC_2(VAR_1->rx_pending);
 FUNC_1(&VAR_1->sdreq_timer);
 FUNC_0(&VAR_1->sdreq_timeout_work);
 FUNC_3(&VAR_1->pending_sdreqs);
}
