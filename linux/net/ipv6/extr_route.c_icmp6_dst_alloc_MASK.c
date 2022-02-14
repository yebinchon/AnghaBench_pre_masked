
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int output; int input; int flags; } ;
struct TYPE_6__ {int plen; int addr; } ;
struct rt6_info {TYPE_4__ dst; struct inet6_dev* rt6i_idev; TYPE_1__ rt6i_dst; int rt6i_gateway; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {TYPE_2__* rt6_stats; } ;
struct net {TYPE_3__ ipv6; } ;
struct inet6_dev {int dummy; } ;
struct flowi6 {int daddr; } ;
struct dst_entry {int dummy; } ;
struct TYPE_7__ {int fib_rt_uncache; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dst_entry* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_4__*,int ,int ) ;
 int FUNC_4 (struct flowi6*) ;
 struct inet6_dev* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct inet6_dev*) ;
 struct rt6_info* FUNC_7 (struct net*,struct net_device*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct rt6_info*) ;
 scalar_t__ FUNC_9 (int) ;
 struct dst_entry* FUNC_10 (struct net*,TYPE_4__*,int ,int *,int ) ;

struct dst_entry *FUNC_11(struct net_device *VAR_6,
      struct flowi6 *VAR_7)
{
 struct dst_entry *VAR_8;
 struct rt6_info *VAR_9;
 struct inet6_dev *VAR_10 = FUNC_5(VAR_6);
 struct net *VAR_11 = FUNC_2(VAR_6);

 if (FUNC_9(!VAR_10))
  return FUNC_0(-VAR_1);

 VAR_9 = FUNC_7(VAR_11, VAR_6, 0);
 if (FUNC_9(!VAR_9)) {
  FUNC_6(VAR_10);
  VAR_8 = FUNC_0(-VAR_2);
  goto out;
 }

 VAR_9->dst.flags |= VAR_0;
 VAR_9->dst.input = VAR_4;
 VAR_9->dst.output = VAR_5;
 VAR_9->rt6i_gateway = VAR_7->daddr;
 VAR_9->rt6i_dst.addr = VAR_7->daddr;
 VAR_9->rt6i_dst.plen = 128;
 VAR_9->rt6i_idev = VAR_10;
 FUNC_3(&VAR_9->dst, VAR_3, 0);




 FUNC_8(VAR_9);
 FUNC_1(&VAR_11->ipv6.rt6_stats->fib_rt_uncache);

 VAR_8 = FUNC_10(VAR_11, &VAR_9->dst, FUNC_4(VAR_7), ((void*)0), 0);

out:
 return VAR_8;
}
