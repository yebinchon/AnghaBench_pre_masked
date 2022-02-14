
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_wr_buf {int dummy; } ;
struct smc_connection {int send_lock; } ;
struct smc_cdc_tx_pend {int dummy; } ;


 int FUNC_0 (struct smc_connection*,struct smc_wr_buf**,int *,struct smc_cdc_tx_pend**) ;
 int FUNC_1 (struct smc_connection*,struct smc_wr_buf*,struct smc_cdc_tx_pend*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct smc_connection *VAR_0)
{
 struct smc_cdc_tx_pend *VAR_1;
 struct smc_wr_buf *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2, ((void*)0), &VAR_1);
 if (VAR_3)
  return VAR_3;

 FUNC_2(&VAR_0->send_lock);
 VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_1);
 FUNC_3(&VAR_0->send_lock);
 return VAR_3;
}
