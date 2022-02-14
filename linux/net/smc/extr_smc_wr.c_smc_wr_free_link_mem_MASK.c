
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {int * wr_rx_bufs; int * wr_tx_bufs; int * wr_tx_ibs; int * wr_rx_ibs; int * wr_tx_rdmas; int * wr_rx_sges; int * wr_tx_rdma_sges; int * wr_tx_sges; int * wr_tx_mask; int * wr_tx_pends; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct smc_link *VAR_0)
{
 FUNC_0(VAR_0->wr_tx_pends);
 VAR_0->wr_tx_pends = ((void*)0);
 FUNC_0(VAR_0->wr_tx_mask);
 VAR_0->wr_tx_mask = ((void*)0);
 FUNC_0(VAR_0->wr_tx_sges);
 VAR_0->wr_tx_sges = ((void*)0);
 FUNC_0(VAR_0->wr_tx_rdma_sges);
 VAR_0->wr_tx_rdma_sges = ((void*)0);
 FUNC_0(VAR_0->wr_rx_sges);
 VAR_0->wr_rx_sges = ((void*)0);
 FUNC_0(VAR_0->wr_tx_rdmas);
 VAR_0->wr_tx_rdmas = ((void*)0);
 FUNC_0(VAR_0->wr_rx_ibs);
 VAR_0->wr_rx_ibs = ((void*)0);
 FUNC_0(VAR_0->wr_tx_ibs);
 VAR_0->wr_tx_ibs = ((void*)0);
 FUNC_0(VAR_0->wr_tx_bufs);
 VAR_0->wr_tx_bufs = ((void*)0);
 FUNC_0(VAR_0->wr_rx_bufs);
 VAR_0->wr_rx_bufs = ((void*)0);
}
