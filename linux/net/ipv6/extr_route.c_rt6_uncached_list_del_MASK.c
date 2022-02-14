
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uncached_list {int lock; } ;
struct TYPE_6__ {int dev; } ;
struct rt6_info {int rt6i_uncached; TYPE_3__ dst; struct uncached_list* rt6i_uncached_list; } ;
struct TYPE_5__ {TYPE_1__* rt6_stats; } ;
struct net {TYPE_2__ ipv6; } ;
struct TYPE_4__ {int fib_rt_uncache; } ;


 int FUNC_0 (int *) ;
 struct net* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct rt6_info *VAR_0)
{
 if (!FUNC_3(&VAR_0->rt6i_uncached)) {
  struct uncached_list *VAR_1 = VAR_0->rt6i_uncached_list;
  struct net *VAR_2 = FUNC_1(VAR_0->dst.dev);

  FUNC_4(&VAR_1->lock);
  FUNC_2(&VAR_0->rt6i_uncached);
  FUNC_0(&VAR_2->ipv6.rt6_stats->fib_rt_uncache);
  FUNC_5(&VAR_1->lock);
 }
}
