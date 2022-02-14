
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {TYPE_1__* dev; int sysfs_name; int kobj; struct net_bridge* br; } ;
struct net_bridge {int dev; int ifobj; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int *,int ,int ) ;

int FUNC_4(struct net_bridge_port *VAR_1)
{
 struct net_bridge *VAR_2 = VAR_1->br;
 int VAR_3;




 if (!FUNC_2(VAR_1->sysfs_name, VAR_1->dev->name, VAR_0))
  return 0;

 VAR_3 = FUNC_3(VAR_2->ifobj, &VAR_1->kobj,
    VAR_1->sysfs_name, VAR_1->dev->name);
 if (VAR_3)
  FUNC_0(VAR_2->dev, "unable to rename link %s to %s",
         VAR_1->sysfs_name, VAR_1->dev->name);
 else
  FUNC_1(VAR_1->sysfs_name, VAR_1->dev->name, VAR_0);

 return VAR_3;
}
