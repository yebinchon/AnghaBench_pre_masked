
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_notifier_port_obj_info {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct switchdev_notifier_port_obj_info*,int (*) (struct net_device const*),int (*) (struct net_device*,struct switchdev_obj const*)) ;

int FUNC_1(struct net_device *VAR_1,
   struct switchdev_notifier_port_obj_info *VAR_2,
   bool (*VAR_3)(const struct net_device *VAR_4),
   int (*VAR_5)(struct net_device *VAR_6,
          const struct switchdev_obj *VAR_7))
{
 int VAR_8;

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3,
           VAR_5);
 if (VAR_8 == -VAR_0)
  VAR_8 = 0;
 return VAR_8;
}
