
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct smc_link {scalar_t__ wr_rx_cnt; } ;


 int FUNC_0 (struct smc_link*) ;

int FUNC_1(struct smc_link *VAR_0)
{
 u32 VAR_1;
 int VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->wr_rx_cnt; VAR_1++)
  VAR_2 = FUNC_0(VAR_0);
 return VAR_2;
}
