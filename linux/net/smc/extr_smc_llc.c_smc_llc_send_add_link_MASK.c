
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct smc_llc_msg_add_link {int dummy; } ;
struct smc_link {int dummy; } ;
typedef enum smc_llc_reqresp { ____Placeholder_smc_llc_reqresp } smc_llc_reqresp ;


 int FUNC_0 (struct smc_link*,struct smc_wr_buf**,struct smc_wr_tx_pend_priv**) ;
 int FUNC_1 (struct smc_llc_msg_add_link*,struct smc_link*,int *,int *,int) ;
 int FUNC_2 (struct smc_link*,struct smc_wr_tx_pend_priv*) ;

int FUNC_3(struct smc_link *VAR_0, u8 VAR_1[], u8 VAR_2[],
     enum smc_llc_reqresp VAR_3)
{
 struct smc_llc_msg_add_link *VAR_4;
 struct smc_wr_tx_pend_priv *VAR_5;
 struct smc_wr_buf *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_0, &VAR_6, &VAR_5);
 if (VAR_7)
  return VAR_7;
 VAR_4 = (struct smc_llc_msg_add_link *)VAR_6;
 FUNC_1(VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);

 VAR_7 = FUNC_2(VAR_0, VAR_5);
 return VAR_7;
}
