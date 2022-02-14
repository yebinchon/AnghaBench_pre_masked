
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int link; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 struct ip6_tnl* FUNC_0 (struct net_device const*) ;

int FUNC_1(const struct net_device *VAR_0)
{
 struct ip6_tnl *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->parms.link;
}
