
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct devlink_port {int dummy; } ;
struct dsa_port {struct devlink_port devlink_port; TYPE_1__* ds; } ;
struct TYPE_2__ {scalar_t__ devlink; } ;


 struct dsa_port* FUNC_0 (struct net_device*) ;

__attribute__((used)) static struct devlink_port *FUNC_1(struct net_device *VAR_0)
{
 struct dsa_port *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->ds->devlink ? &VAR_1->devlink_port : ((void*)0);
}
