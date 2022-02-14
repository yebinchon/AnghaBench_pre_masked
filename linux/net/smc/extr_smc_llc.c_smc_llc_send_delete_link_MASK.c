
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_wr_tx_pend_priv {int dummy; } ;
struct smc_wr_buf {int dummy; } ;
struct smc_llc_msg_del_link {int dummy; } ;
struct smc_link {int dummy; } ;
typedef enum smc_llc_reqresp { ____Placeholder_smc_llc_reqresp } smc_llc_reqresp ;


 int FUNC_0 (struct smc_link*,struct smc_wr_buf**,struct smc_wr_tx_pend_priv**) ;
 int FUNC_1 (struct smc_llc_msg_del_link*,struct smc_link*,int,int) ;
 int FUNC_2 (struct smc_link*,struct smc_wr_tx_pend_priv*) ;

int FUNC_3(struct smc_link *VAR_0,
        enum smc_llc_reqresp VAR_1, bool VAR_2)
{
 struct smc_llc_msg_del_link *VAR_3;
 struct smc_wr_tx_pend_priv *VAR_4;
 struct smc_wr_buf *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, &VAR_5, &VAR_4);
 if (VAR_6)
  return VAR_6;
 VAR_3 = (struct smc_llc_msg_del_link *)VAR_5;
 FUNC_1(VAR_3, VAR_0, VAR_1, VAR_2);

 VAR_6 = FUNC_2(VAR_0, VAR_4);
 return VAR_6;
}
