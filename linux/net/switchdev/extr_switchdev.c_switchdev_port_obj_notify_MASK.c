
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct switchdev_obj {int dummy; } ;
struct switchdev_notifier_port_obj_info {int handled; int info; struct switchdev_trans* trans; struct switchdev_obj const* obj; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum switchdev_notifier_type { ____Placeholder_switchdev_notifier_type } switchdev_notifier_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct net_device*,int *,struct netlink_ext_ack*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(enum switchdev_notifier_type VAR_1,
         struct net_device *VAR_2,
         const struct switchdev_obj *VAR_3,
         struct switchdev_trans *VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 int VAR_6;
 int VAR_7;

 struct switchdev_notifier_port_obj_info VAR_8 = {
  .obj = VAR_3,
  .trans = VAR_4,
  .handled = 0,
 };

 VAR_6 = FUNC_1(VAR_1, VAR_2, &VAR_8.info, VAR_5);
 VAR_7 = FUNC_2(VAR_6);
 if (VAR_7) {
  FUNC_0(!VAR_8.handled);
  return VAR_7;
 }
 if (!VAR_8.handled)
  return -VAR_0;
 return 0;
}
