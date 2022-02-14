
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_phys_item_id {int dummy; } ;
struct net_device_ops {int (* ndo_get_phys_port_name ) (struct net_device*,char*,int) ;int (* ndo_get_port_parent_id ) (struct net_device*,struct netdev_phys_item_id*) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;
struct devlink_port {int dummy; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct devlink_port*,int ,struct net_device*) ;
 int FUNC_2 (struct net_device*,char*,int) ;
 int FUNC_3 (struct net_device*,struct netdev_phys_item_id*) ;

void FUNC_4(struct devlink_port *VAR_3,
          struct net_device *VAR_4)
{
 const struct net_device_ops *VAR_5 = VAR_4->netdev_ops;





 if (VAR_5->ndo_get_phys_port_name) {






  char VAR_6[VAR_2];
  int VAR_7;

  VAR_7 = VAR_5->ndo_get_phys_port_name(VAR_4, VAR_6, sizeof(VAR_6));
  FUNC_0(VAR_7 != -VAR_1);
 }
 if (VAR_5->ndo_get_port_parent_id) {






  struct netdev_phys_item_id VAR_8;
  int VAR_9;

  VAR_9 = VAR_5->ndo_get_port_parent_id(VAR_4, &VAR_8);
  FUNC_0(VAR_9 != -VAR_1);
 }
 FUNC_1(VAR_3, VAR_0, VAR_4);
}
