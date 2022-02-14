
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link {void* wr_tx_bufs; void* wr_rx_bufs; void* wr_tx_ibs; void* wr_rx_ibs; void* wr_tx_rdmas; void* wr_tx_rdma_sges; void* wr_tx_sges; void* wr_rx_sges; void* wr_tx_mask; void* wr_tx_pends; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (void*) ;

int FUNC_3(struct smc_link *VAR_4)
{

 VAR_4->wr_tx_bufs = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (!VAR_4->wr_tx_bufs)
  goto no_mem;
 VAR_4->wr_rx_bufs = FUNC_1(VAR_2 * 3, VAR_3,
       VAR_1);
 if (!VAR_4->wr_rx_bufs)
  goto no_mem_wr_tx_bufs;
 VAR_4->wr_tx_ibs = FUNC_1(VAR_2, sizeof(VAR_4->wr_tx_ibs[0]),
      VAR_1);
 if (!VAR_4->wr_tx_ibs)
  goto no_mem_wr_rx_bufs;
 VAR_4->wr_rx_ibs = FUNC_1(VAR_2 * 3,
      sizeof(VAR_4->wr_rx_ibs[0]),
      VAR_1);
 if (!VAR_4->wr_rx_ibs)
  goto no_mem_wr_tx_ibs;
 VAR_4->wr_tx_rdmas = FUNC_1(VAR_2,
        sizeof(VAR_4->wr_tx_rdmas[0]),
        VAR_1);
 if (!VAR_4->wr_tx_rdmas)
  goto no_mem_wr_rx_ibs;
 VAR_4->wr_tx_rdma_sges = FUNC_1(VAR_2,
     sizeof(VAR_4->wr_tx_rdma_sges[0]),
     VAR_1);
 if (!VAR_4->wr_tx_rdma_sges)
  goto no_mem_wr_tx_rdmas;
 VAR_4->wr_tx_sges = FUNC_1(VAR_2, sizeof(VAR_4->wr_tx_sges[0]),
       VAR_1);
 if (!VAR_4->wr_tx_sges)
  goto no_mem_wr_tx_rdma_sges;
 VAR_4->wr_rx_sges = FUNC_1(VAR_2 * 3,
       sizeof(VAR_4->wr_rx_sges[0]),
       VAR_1);
 if (!VAR_4->wr_rx_sges)
  goto no_mem_wr_tx_sges;
 VAR_4->wr_tx_mask = FUNC_1(FUNC_0(VAR_2),
       sizeof(*VAR_4->wr_tx_mask),
       VAR_1);
 if (!VAR_4->wr_tx_mask)
  goto no_mem_wr_rx_sges;
 VAR_4->wr_tx_pends = FUNC_1(VAR_2,
        sizeof(VAR_4->wr_tx_pends[0]),
        VAR_1);
 if (!VAR_4->wr_tx_pends)
  goto no_mem_wr_tx_mask;
 return 0;

no_mem_wr_tx_mask:
 FUNC_2(VAR_4->wr_tx_mask);
no_mem_wr_rx_sges:
 FUNC_2(VAR_4->wr_rx_sges);
no_mem_wr_tx_sges:
 FUNC_2(VAR_4->wr_tx_sges);
no_mem_wr_tx_rdma_sges:
 FUNC_2(VAR_4->wr_tx_rdma_sges);
no_mem_wr_tx_rdmas:
 FUNC_2(VAR_4->wr_tx_rdmas);
no_mem_wr_rx_ibs:
 FUNC_2(VAR_4->wr_rx_ibs);
no_mem_wr_tx_ibs:
 FUNC_2(VAR_4->wr_tx_ibs);
no_mem_wr_rx_bufs:
 FUNC_2(VAR_4->wr_rx_bufs);
no_mem_wr_tx_bufs:
 FUNC_2(VAR_4->wr_tx_bufs);
no_mem:
 return -VAR_0;
}
