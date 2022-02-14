
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_2__ {scalar_t__ collect_md; } ;
struct ip6_tnl {TYPE_1__ parms; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ip6_tnl*) ;
 struct ip6_tnl* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct ip6_tnl *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_0(VAR_1);

 if (VAR_3)
  return VAR_3;
 FUNC_1(VAR_2);
 if (VAR_2->parms.collect_md) {
  VAR_1->features |= VAR_0;
  FUNC_3(VAR_1);
 }
 return 0;
}
