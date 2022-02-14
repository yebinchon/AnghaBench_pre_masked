
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_phys_item_id {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int switch_id; int switch_port; } ;
struct devlink_port {TYPE_1__ attrs; } ;


 int VAR_0 ;
 int FUNC_0 (struct netdev_phys_item_id*,int *,int) ;
 struct devlink_port* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_1,
     struct netdev_phys_item_id *VAR_2)
{
 struct devlink_port *VAR_3;





 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3 || !VAR_3->attrs.switch_port)
  return -VAR_0;

 FUNC_0(VAR_2, &VAR_3->attrs.switch_id, sizeof(*VAR_2));

 return 0;
}
