
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_cdc_tx_pend {int * conn; } ;



__attribute__((used)) static void FUNC_0(struct smc_wr_tx_pend_priv *VAR_0)
{
 struct smc_cdc_tx_pend *VAR_1 =
  (struct smc_cdc_tx_pend *)VAR_0;

 VAR_1->conn = ((void*)0);
}
