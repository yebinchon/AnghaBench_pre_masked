
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_trans {int dummy; } ;
struct switchdev_notifier_port_attr_info {int handled; int info; struct switchdev_trans* trans; struct switchdev_attr const* attr; } ;
struct switchdev_attr {int dummy; } ;
struct net_device {int dummy; } ;
typedef enum switchdev_notifier_type { ____Placeholder_switchdev_notifier_type } switchdev_notifier_type ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct net_device*,int *,int *) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(enum switchdev_notifier_type VAR_1,
          struct net_device *VAR_2,
          const struct switchdev_attr *VAR_3,
          struct switchdev_trans *VAR_4)
{
 int VAR_5;
 int VAR_6;

 struct switchdev_notifier_port_attr_info VAR_7 = {
  .attr = VAR_3,
  .trans = VAR_4,
  .handled = 0,
 };

 VAR_6 = FUNC_1(VAR_1, VAR_2,
            &VAR_7.info, ((void*)0));
 VAR_5 = FUNC_2(VAR_6);
 if (VAR_5) {
  FUNC_0(!VAR_7.handled);
  return VAR_5;
 }

 if (!VAR_7.handled)
  return -VAR_0;

 return 0;
}
