
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;



__attribute__((used)) static bool FUNC_0(struct net_device *VAR_0, int VAR_1)
{
 if (VAR_1 && (!VAR_0 || VAR_0->ifindex != VAR_1))
  return 1;

 return 0;
}
