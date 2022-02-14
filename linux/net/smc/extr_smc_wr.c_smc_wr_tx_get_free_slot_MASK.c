
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef size_t u32 ;
struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_tx_pend {size_t idx; struct smc_wr_tx_pend_priv priv; struct smc_link* link; int handler; void* wr_id; } ;
struct smc_wr_buf {int dummy; } ;
struct smc_rdma_wr {int dummy; } ;
struct smc_link {size_t wr_tx_cnt; scalar_t__ state; struct smc_rdma_wr* wr_tx_rdmas; struct smc_wr_buf* wr_tx_bufs; struct ib_send_wr* wr_tx_ibs; struct smc_wr_tx_pend* wr_tx_pends; int wr_tx_wait; } ;
struct ib_send_wr {void* wr_id; } ;
typedef int smc_wr_tx_handler ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct smc_link*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smc_link*,size_t*) ;
 void* FUNC_4 (struct smc_link*) ;
 int FUNC_5 (int ,int,int ) ;

int FUNC_6(struct smc_link *VAR_4,
       smc_wr_tx_handler VAR_5,
       struct smc_wr_buf **VAR_6,
       struct smc_rdma_wr **VAR_7,
       struct smc_wr_tx_pend_priv **VAR_8)
{
 struct smc_wr_tx_pend *VAR_9;
 u32 VAR_10 = VAR_4->wr_tx_cnt;
 struct ib_send_wr *VAR_11;
 u64 VAR_12;
 int VAR_13;

 *VAR_6 = ((void*)0);
 *VAR_8 = ((void*)0);
 if (FUNC_0()) {
  VAR_13 = FUNC_3(VAR_4, &VAR_10);
  if (VAR_13)
   return VAR_13;
 } else {
  VAR_13 = FUNC_5(
   VAR_4->wr_tx_wait,
   VAR_4->state == VAR_2 ||
   (FUNC_3(VAR_4, &VAR_10) != -VAR_0),
   VAR_3);
  if (!VAR_13) {

   FUNC_2(FUNC_1(VAR_4));
   return -VAR_1;
  }
  if (VAR_10 == VAR_4->wr_tx_cnt)
   return -VAR_1;
 }
 VAR_12 = FUNC_4(VAR_4);
 VAR_9 = &VAR_4->wr_tx_pends[VAR_10];
 VAR_9->wr_id = VAR_12;
 VAR_9->handler = VAR_5;
 VAR_9->link = VAR_4;
 VAR_9->idx = VAR_10;
 VAR_11 = &VAR_4->wr_tx_ibs[VAR_10];
 VAR_11->wr_id = VAR_12;
 *VAR_6 = &VAR_4->wr_tx_bufs[VAR_10];
 if (VAR_7)
  *VAR_7 = &VAR_4->wr_tx_rdmas[VAR_10];
 *VAR_8 = &VAR_9->priv;
 return 0;
}
