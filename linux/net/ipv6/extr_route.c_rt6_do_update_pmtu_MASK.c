
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int dev; } ;
struct rt6_info {int rt6i_flags; TYPE_3__ dst; } ;
struct TYPE_4__ {int ip6_rt_mtu_expires; } ;
struct TYPE_5__ {TYPE_1__ sysctl; } ;
struct net {TYPE_2__ ipv6; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (struct rt6_info*,int ) ;

__attribute__((used)) static void FUNC_3(struct rt6_info *VAR_2, u32 VAR_3)
{
 struct net *VAR_4 = FUNC_0(VAR_2->dst.dev);

 FUNC_1(&VAR_2->dst, VAR_0, VAR_3);
 VAR_2->rt6i_flags |= VAR_1;
 FUNC_2(VAR_2, VAR_4->ipv6.sysctl.ip6_rt_mtu_expires);
}
