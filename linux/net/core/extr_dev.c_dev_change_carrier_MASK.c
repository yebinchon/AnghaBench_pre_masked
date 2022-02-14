
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {int (* ndo_change_carrier ) (struct net_device*,int) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;

int FUNC_2(struct net_device *VAR_2, bool VAR_3)
{
 const struct net_device_ops *VAR_4 = VAR_2->netdev_ops;

 if (!VAR_4->ndo_change_carrier)
  return -VAR_1;
 if (!FUNC_0(VAR_2))
  return -VAR_0;
 return VAR_4->ndo_change_carrier(VAR_2, VAR_3);
}
