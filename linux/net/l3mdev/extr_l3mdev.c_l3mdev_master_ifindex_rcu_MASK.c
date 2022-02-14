
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;


 struct net_device* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device const*) ;
 scalar_t__ FUNC_2 (struct net_device const*) ;

int FUNC_3(const struct net_device *VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0)
  return 0;

 if (FUNC_1(VAR_0)) {
  VAR_1 = VAR_0->ifindex;
 } else if (FUNC_2(VAR_0)) {
  struct net_device *VAR_2;
  struct net_device *VAR_3 = (struct net_device *)VAR_0;







  VAR_2 = FUNC_0(VAR_3);
  if (VAR_2)
   VAR_1 = VAR_2->ifindex;
 }

 return VAR_1;
}
