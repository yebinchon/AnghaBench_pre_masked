
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_connection {int dummy; } ;
struct smc_cdc_tx_pend {struct smc_connection* conn; } ;



__attribute__((used)) static bool FUNC_0(struct smc_wr_tx_pend_priv *VAR_0,
         unsigned long VAR_1)
{
 struct smc_connection *VAR_2 = (struct smc_connection *)VAR_1;
 struct smc_cdc_tx_pend *VAR_3 =
  (struct smc_cdc_tx_pend *)VAR_0;

 return VAR_3->conn == VAR_2;
}
