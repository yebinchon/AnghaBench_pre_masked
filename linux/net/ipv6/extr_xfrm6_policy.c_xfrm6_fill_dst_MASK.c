
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int rt6i_flags; int rt6i_uncached; int rt6i_src; int rt6i_dst; int rt6i_gateway; int rt6i_idev; } ;
struct TYPE_7__ {struct net_device* dev; } ;
struct TYPE_8__ {TYPE_5__ rt6; TYPE_1__ dst; } ;
struct xfrm_dst {TYPE_2__ u; int route_cookie; scalar_t__ route; } ;
struct rt6_info {int rt6i_flags; int rt6i_src; int rt6i_dst; int rt6i_gateway; } ;
struct net_device {int dummy; } ;
struct flowi {int dummy; } ;
struct TYPE_10__ {TYPE_3__* rt6_stats; } ;
struct TYPE_12__ {TYPE_4__ ipv6; } ;
struct TYPE_9__ {int fib_rt_uncache; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 TYPE_6__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct rt6_info*) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_8(struct xfrm_dst *VAR_3, struct net_device *VAR_4,
     const struct flowi *VAR_5)
{
 struct rt6_info *VAR_6 = (struct rt6_info *)VAR_3->route;

 VAR_3->u.dst.dev = VAR_4;
 FUNC_2(VAR_4);

 VAR_3->u.rt6.rt6i_idev = FUNC_5(VAR_4);
 if (!VAR_3->u.rt6.rt6i_idev) {
  FUNC_4(VAR_4);
  return -VAR_0;
 }



 VAR_3->u.rt6.rt6i_flags = VAR_6->rt6i_flags & (VAR_1 |
         VAR_2);
 VAR_3->route_cookie = FUNC_6(VAR_6);
 VAR_3->u.rt6.rt6i_gateway = VAR_6->rt6i_gateway;
 VAR_3->u.rt6.rt6i_dst = VAR_6->rt6i_dst;
 VAR_3->u.rt6.rt6i_src = VAR_6->rt6i_src;
 FUNC_0(&VAR_3->u.rt6.rt6i_uncached);
 FUNC_7(&VAR_3->u.rt6);
 FUNC_1(&FUNC_3(VAR_4)->ipv6.rt6_stats->fib_rt_uncache);

 return 0;
}
