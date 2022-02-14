
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ ifindex; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct net_device*) ;

__attribute__((used)) static bool FUNC_6(struct net_device *VAR_0)
{
 if (!FUNC_4(VAR_0))
  return 0;

 if (VAR_0->ifindex != FUNC_0(VAR_0))
  return 1;

 if (FUNC_3(VAR_0) || FUNC_2(VAR_0))
  return 1;

 return FUNC_1(VAR_0) && FUNC_5(VAR_0);
}
