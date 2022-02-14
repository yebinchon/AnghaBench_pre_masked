
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;


 struct net_device* FUNC_0 (struct net_device*) ;

__attribute__((used)) static bool FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 struct net_device *VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = VAR_0 ? FUNC_0(VAR_0) : ((void*)0);
 if (!VAR_2 || VAR_2->ifindex != VAR_1)
  return 1;

 return 0;
}
