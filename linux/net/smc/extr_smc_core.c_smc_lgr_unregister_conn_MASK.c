
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_link_group {int conns_lock; } ;
struct smc_connection {scalar_t__ alert_token_local; struct smc_link_group* lgr; } ;


 int FUNC_0 (struct smc_connection*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct smc_connection *VAR_0)
{
 struct smc_link_group *VAR_1 = VAR_0->lgr;

 if (!VAR_1)
  return;
 FUNC_1(&VAR_1->conns_lock);
 if (VAR_0->alert_token_local) {
  FUNC_0(VAR_0);
 }
 FUNC_2(&VAR_1->conns_lock);
}
