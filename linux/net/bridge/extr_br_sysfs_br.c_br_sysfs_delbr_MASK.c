
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {struct kobject kobj; } ;
struct net_device {TYPE_1__ dev; } ;
struct net_bridge {int ifobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct net_bridge* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct kobject*,int *) ;
 int FUNC_3 (struct kobject*,int *) ;

void FUNC_4(struct net_device *VAR_2)
{
 struct kobject *VAR_3 = &VAR_2->dev.kobj;
 struct net_bridge *VAR_4 = FUNC_1(VAR_2);

 FUNC_0(VAR_4->ifobj);
 FUNC_2(VAR_3, &VAR_0);
 FUNC_3(VAR_3, &VAR_1);
}
