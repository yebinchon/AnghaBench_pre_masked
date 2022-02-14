
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_obj {int flags; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,struct switchdev_obj const*) ;
 int FUNC_2 (struct net_device*,struct switchdev_obj const*) ;

int FUNC_3(struct net_device *VAR_1,
      const struct switchdev_obj *VAR_2)
{
 if (VAR_2->flags & VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 FUNC_0();
 return FUNC_2(VAR_1, VAR_2);
}
