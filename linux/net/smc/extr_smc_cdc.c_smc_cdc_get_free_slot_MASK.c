
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct smc_rdma_wr {int dummy; } ;
struct smc_link {int dummy; } ;
struct smc_connection {int alert_token_local; TYPE_1__* lgr; } ;
struct smc_cdc_tx_pend {int dummy; } ;
struct TYPE_2__ {struct smc_link* lnk; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct smc_link*,int ,struct smc_wr_buf**,struct smc_rdma_wr**,struct smc_wr_tx_pend_priv**) ;

int FUNC_1(struct smc_connection *VAR_3,
     struct smc_wr_buf **VAR_4,
     struct smc_rdma_wr **VAR_5,
     struct smc_cdc_tx_pend **VAR_6)
{
 struct smc_link *VAR_7 = &VAR_3->lgr->lnk[VAR_1];
 int VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_4,
         VAR_5,
         (struct smc_wr_tx_pend_priv **)VAR_6);
 if (!VAR_3->alert_token_local)

  VAR_8 = -VAR_0;
 return VAR_8;
}
