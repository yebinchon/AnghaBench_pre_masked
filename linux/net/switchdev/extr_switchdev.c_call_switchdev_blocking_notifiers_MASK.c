
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_notifier_info {struct netlink_ext_ack* extack; struct net_device* dev; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *,unsigned long,struct switchdev_notifier_info*) ;
 int VAR_0 ;

int FUNC_1(unsigned long VAR_1, struct net_device *VAR_2,
          struct switchdev_notifier_info *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 VAR_3->dev = VAR_2;
 VAR_3->extack = VAR_4;
 return FUNC_0(&VAR_0,
         VAR_1, VAR_3);
}
