
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union smc_llc_msg {int dummy; } smc_llc_msg ;
struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct smc_llc_tx_pend {int dummy; } ;
struct smc_link {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct smc_link*,int ,struct smc_wr_buf**,int *,struct smc_wr_tx_pend_priv**) ;

__attribute__((used)) static int FUNC_2(struct smc_link *VAR_4,
        struct smc_wr_buf **VAR_5,
        struct smc_wr_tx_pend_priv **VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_3, VAR_5, ((void*)0),
         VAR_6);
 if (VAR_7 < 0)
  return VAR_7;
 FUNC_0(
  sizeof(union smc_llc_msg) > VAR_0,
  "must increase SMC_WR_BUF_SIZE to at least sizeof(struct smc_llc_msg)");
 FUNC_0(
  sizeof(union smc_llc_msg) != VAR_2,
  "must adapt SMC_WR_TX_SIZE to sizeof(struct smc_llc_msg); if not all smc_wr upper layer protocols use the same message size any more, must start to set link->wr_tx_sges[i].length on each individual smc_wr_tx_send()");
 FUNC_0(
  sizeof(struct smc_llc_tx_pend) > VAR_1,
  "must increase SMC_WR_TX_PEND_PRIV_SIZE to at least sizeof(struct smc_llc_tx_pend)");
 return 0;
}
