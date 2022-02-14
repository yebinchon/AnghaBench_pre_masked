
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_ops {int (* ndo_change_mtu ) (struct net_device*,int) ;} ;
struct net_device {int mtu; struct net_device_ops* netdev_ops; } ;


 int FUNC_0 (struct net_device*,int) ;

int FUNC_1(struct net_device *VAR_0, int VAR_1)
{
 const struct net_device_ops *VAR_2 = VAR_0->netdev_ops;

 if (VAR_2->ndo_change_mtu)
  return VAR_2->ndo_change_mtu(VAR_0, VAR_1);

 VAR_0->mtu = VAR_1;
 return 0;
}
