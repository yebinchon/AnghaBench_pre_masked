
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int dummy; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct net_device*,struct netdev_phys_item_id*,int) ;
 int FUNC_1 (struct netdev_phys_item_id*,struct netdev_phys_item_id*) ;

bool FUNC_2(struct net_device *VAR_0, struct net_device *VAR_1)
{
 struct netdev_phys_item_id VAR_2 = { };
 struct netdev_phys_item_id VAR_3 = { };

 if (FUNC_0(VAR_0, &VAR_2, 1) ||
     FUNC_0(VAR_1, &VAR_3, 1))
  return 0;

 return FUNC_1(&VAR_2, &VAR_3);
}
