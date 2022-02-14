
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link_group {int conns_num; scalar_t__ is_smcd; } ;
struct smc_connection {struct smc_link_group* lgr; int rx_tsklet; } ;


 int FUNC_0 (struct smc_connection*,struct smc_link_group*) ;
 int FUNC_1 (struct smc_connection*) ;
 int FUNC_2 (struct smc_connection*) ;
 int FUNC_3 (struct smc_link_group*) ;
 int FUNC_4 (struct smc_connection*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct smc_connection *VAR_0)
{
 struct smc_link_group *VAR_1 = VAR_0->lgr;

 if (!VAR_1)
  return;
 if (VAR_1->is_smcd) {
  FUNC_2(VAR_0);
  FUNC_5(&VAR_0->rx_tsklet);
 } else {
  FUNC_1(VAR_0);
 }
 FUNC_4(VAR_0);
 FUNC_0(VAR_0, VAR_1);
 VAR_0->lgr = ((void*)0);

 if (!VAR_1->conns_num)
  FUNC_3(VAR_1);
}
