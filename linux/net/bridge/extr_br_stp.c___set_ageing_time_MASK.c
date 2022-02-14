
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ageing_time; } ;
struct switchdev_attr {int flags; TYPE_1__ u; int id; struct net_device* orig_dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct net_device*,struct switchdev_attr*) ;

int FUNC_2(struct net_device *VAR_4, unsigned long VAR_5)
{
 struct switchdev_attr VAR_6 = {
  .orig_dev = VAR_4,
  .id = VAR_1,
  .flags = VAR_3 | VAR_2,
  .u.ageing_time = FUNC_0(VAR_5),
 };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_7 && VAR_7 != -VAR_0)
  return VAR_7;

 return 0;
}
