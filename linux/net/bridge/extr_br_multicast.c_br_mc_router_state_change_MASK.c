
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mrouter; } ;
struct switchdev_attr {TYPE_1__ u; int flags; int id; int orig_dev; } ;
struct net_bridge {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct switchdev_attr*) ;

__attribute__((used)) static void FUNC_1(struct net_bridge *VAR_2,
          bool VAR_3)
{
 struct switchdev_attr VAR_4 = {
  .orig_dev = VAR_2->dev,
  .id = VAR_0,
  .flags = VAR_1,
  .u.mrouter = VAR_3,
 };

 FUNC_0(VAR_2->dev, &VAR_4);
}
