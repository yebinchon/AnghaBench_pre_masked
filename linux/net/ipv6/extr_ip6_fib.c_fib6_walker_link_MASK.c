
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fib6_walker_lock; int fib6_walkers; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_walker {int lh; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_0, struct fib6_walker *VAR_1)
{
 FUNC_1(&VAR_0->ipv6.fib6_walker_lock);
 FUNC_0(&VAR_1->lh, &VAR_0->ipv6.fib6_walkers);
 FUNC_2(&VAR_0->ipv6.fib6_walker_lock);
}
