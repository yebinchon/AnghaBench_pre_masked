
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_pnettable {int lock; int pnetlist; } ;
struct smc_net {struct smc_pnettable pnettable; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 struct smc_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

int FUNC_3(struct net *VAR_1)
{
 struct smc_net *VAR_2 = FUNC_1(VAR_1, VAR_0);
 struct smc_pnettable *VAR_3 = &VAR_2->pnettable;

 FUNC_0(&VAR_3->pnetlist);
 FUNC_2(&VAR_3->lock);

 return 0;
}
