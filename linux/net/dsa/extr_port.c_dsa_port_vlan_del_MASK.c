
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_obj_port_vlan {int dummy; } ;
struct dsa_port {int index; TYPE_1__* ds; } ;
struct dsa_notifier_vlan_info {struct switchdev_obj_port_vlan const* vlan; int port; int sw_index; } ;
struct TYPE_2__ {int index; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*,int ,struct dsa_notifier_vlan_info*) ;

int FUNC_1(struct dsa_port *VAR_1,
        const struct switchdev_obj_port_vlan *VAR_2)
{
 struct dsa_notifier_vlan_info VAR_3 = {
  .sw_index = VAR_1->ds->index,
  .port = VAR_1->index,
  .vlan = VAR_2,
 };

 return FUNC_0(VAR_1, VAR_0, &VAR_3);
}
