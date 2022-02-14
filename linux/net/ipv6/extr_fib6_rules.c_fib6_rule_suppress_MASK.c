
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ plen; } ;
struct rt6_info {TYPE_1__ rt6i_dst; TYPE_2__* rt6i_idev; } ;
struct net_device {scalar_t__ group; } ;
struct fib_rule {scalar_t__ suppress_prefixlen; int suppress_ifgroup; } ;
struct fib_lookup_arg {int flags; struct fib6_result* result; } ;
struct fib6_result {struct rt6_info* rt6; } ;
struct TYPE_4__ {struct net_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct rt6_info*) ;

__attribute__((used)) static bool FUNC_1(struct fib_rule *VAR_1, struct fib_lookup_arg *VAR_2)
{
 struct fib6_result *VAR_3 = VAR_2->result;
 struct rt6_info *VAR_4 = VAR_3->rt6;
 struct net_device *VAR_5 = ((void*)0);

 if (!VAR_4)
  return 0;

 if (VAR_4->rt6i_idev)
  VAR_5 = VAR_4->rt6i_idev->dev;




 if (VAR_4->rt6i_dst.plen <= VAR_1->suppress_prefixlen)
  goto suppress_route;




 if (VAR_1->suppress_ifgroup != -1 && VAR_5 && VAR_5->group == VAR_1->suppress_ifgroup)
  goto suppress_route;

 return 0;

suppress_route:
 if (!(VAR_2->flags & VAR_0))
  FUNC_0(VAR_4);
 return 1;
}
