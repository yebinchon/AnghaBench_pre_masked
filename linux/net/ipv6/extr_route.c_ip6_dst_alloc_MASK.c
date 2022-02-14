
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt6_info {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rt6_stats; int ip6_dst_ops; } ;
struct net {TYPE_2__ ipv6; } ;
struct TYPE_3__ {int fib_rt_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct rt6_info* FUNC_1 (int *,struct net_device*,int,int ,int) ;
 int FUNC_2 (struct rt6_info*) ;

struct rt6_info *FUNC_3(struct net *VAR_1, struct net_device *VAR_2,
          int VAR_3)
{
 struct rt6_info *VAR_4 = FUNC_1(&VAR_1->ipv6.ip6_dst_ops, VAR_2,
     1, VAR_0, VAR_3);

 if (VAR_4) {
  FUNC_2(VAR_4);
  FUNC_0(&VAR_1->ipv6.rt6_stats->fib_rt_alloc);
 }

 return VAR_4;
}
