
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rt6key {int dummy; } ;
struct dst_entry {int __use; int output; int input; } ;
struct rt6_info {int rt6i_flags; int rt6i_src; int rt6i_dst; int rt6i_gateway; int rt6i_idev; struct dst_entry dst; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* rt6_stats; } ;
struct net {TYPE_2__ ipv6; struct net_device* loopback_dev; } ;
struct TYPE_3__ {int fib_rt_alloc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dst_entry* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 struct rt6_info* FUNC_2 (int *,struct net_device*,int,int ,int ) ;
 int FUNC_3 (struct dst_entry*,struct dst_entry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct dst_entry*) ;
 int FUNC_5 (struct net_device*) ;
 int VAR_5 ;
 int FUNC_6 (int *,int *,int) ;
 int FUNC_7 (struct rt6_info*) ;

struct dst_entry *FUNC_8(struct net *VAR_6, struct dst_entry *VAR_7)
{
 struct rt6_info *VAR_8, *VAR_9 = (struct rt6_info *) VAR_7;
 struct net_device *VAR_10 = VAR_6->loopback_dev;
 struct dst_entry *VAR_11 = ((void*)0);

 VAR_8 = FUNC_2(&VAR_5, VAR_10, 1,
         VAR_0, 0);
 if (VAR_8) {
  FUNC_7(VAR_8);
  FUNC_1(&VAR_6->ipv6.rt6_stats->fib_rt_alloc);

  VAR_11 = &VAR_8->dst;
  VAR_11->__use = 1;
  VAR_11->input = VAR_3;
  VAR_11->output = VAR_4;

  FUNC_3(VAR_11, &VAR_9->dst);

  VAR_8->rt6i_idev = FUNC_5(VAR_10);
  VAR_8->rt6i_gateway = VAR_9->rt6i_gateway;
  VAR_8->rt6i_flags = VAR_9->rt6i_flags & ~VAR_2;

  FUNC_6(&VAR_8->rt6i_dst, &VAR_9->rt6i_dst, sizeof(struct rt6key));



 }

 FUNC_4(VAR_7);
 return VAR_11 ? VAR_11 : FUNC_0(-VAR_1);
}
