
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int dummy; } ;
struct net_device_ops {int (* ndo_get_phys_port_id ) (struct net_device*,struct netdev_phys_item_id*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct netdev_phys_item_id*) ;

int FUNC_1(struct net_device *VAR_1,
    struct netdev_phys_item_id *VAR_2)
{
 const struct net_device_ops *VAR_3 = VAR_1->netdev_ops;

 if (!VAR_3->ndo_get_phys_port_id)
  return -VAR_0;
 return VAR_3->ndo_get_phys_port_id(VAR_1, VAR_2);
}
