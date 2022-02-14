
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_bridge_port {int sysfs_name; int kobj; TYPE_3__* dev; struct net_bridge* br; } ;
struct net_bridge {int * ifobj; TYPE_2__* dev; } ;
struct brport_attribute {int attr; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_4__ {int kobj; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct brport_attribute** VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *,int ) ;

int FUNC_3(struct net_bridge_port *VAR_3)
{
 struct net_bridge *VAR_4 = VAR_3->br;
 const struct brport_attribute **VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_3->kobj, &VAR_4->dev->dev.kobj,
    VAR_1);
 if (VAR_6)
  return VAR_6;

 for (VAR_5 = VAR_2; *VAR_5; ++VAR_5) {
  VAR_6 = FUNC_1(&VAR_3->kobj, &((*VAR_5)->attr));
  if (VAR_6)
   return VAR_6;
 }

 FUNC_0(VAR_3->sysfs_name, VAR_3->dev->name, VAR_0);
 return FUNC_2(VAR_4->ifobj, &VAR_3->kobj, VAR_3->sysfs_name);
}
