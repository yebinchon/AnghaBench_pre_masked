
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long vlan_filtering; } ;
struct switchdev_attr {TYPE_1__ u; int flags; int id; int orig_dev; } ;
struct net_bridge {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge*,int ) ;
 int FUNC_2 (struct net_bridge*,int ,int) ;
 int FUNC_3 (struct net_bridge*) ;
 int FUNC_4 (struct net_bridge*) ;
 int FUNC_5 (int ,struct switchdev_attr*) ;

int FUNC_6(struct net_bridge *VAR_4, unsigned long VAR_5)
{
 struct switchdev_attr VAR_6 = {
  .orig_dev = VAR_4->dev,
  .id = VAR_2,
  .flags = VAR_3,
  .u.vlan_filtering = VAR_5,
 };
 int VAR_7;

 if (FUNC_1(VAR_4, VAR_0) == !!VAR_5)
  return 0;

 VAR_7 = FUNC_5(VAR_4->dev, &VAR_6);
 if (VAR_7 && VAR_7 != -VAR_1)
  return VAR_7;

 FUNC_2(VAR_4, VAR_0, !!VAR_5);
 FUNC_0(VAR_4);
 FUNC_4(VAR_4);
 FUNC_3(VAR_4);

 return 0;
}
