
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mc_disabled; } ;
struct switchdev_attr {TYPE_1__ u; int flags; int id; struct net_device* orig_dev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct switchdev_attr*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2, bool VAR_3)
{
 struct switchdev_attr VAR_4 = {
  .orig_dev = VAR_2,
  .id = VAR_0,
  .flags = VAR_1,
  .u.mc_disabled = !VAR_3,
 };

 FUNC_0(VAR_2, &VAR_4);
}
