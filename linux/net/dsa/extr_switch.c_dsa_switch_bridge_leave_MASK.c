
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switchdev_trans {int member_0; } ;
struct dsa_switch {scalar_t__ index; int num_ports; int * ports; scalar_t__ vlan_filtering_is_global; TYPE_1__* ops; } ;
struct dsa_notifier_bridge_info {scalar_t__ br; scalar_t__ sw_index; int port; } ;
struct TYPE_4__ {scalar_t__ bridge_dev; } ;
struct TYPE_3__ {int (* crosschip_bridge_leave ) (struct dsa_switch*,scalar_t__,int,scalar_t__) ;int (* port_bridge_leave ) (struct dsa_switch*,int,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int,struct switchdev_trans*) ;
 TYPE_2__* FUNC_2 (struct dsa_switch*,int) ;
 int FUNC_3 (struct dsa_switch*,int,scalar_t__) ;
 int FUNC_4 (struct dsa_switch*,scalar_t__,int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_1,
       struct dsa_notifier_bridge_info *VAR_2)
{
 bool VAR_3 = FUNC_0(VAR_2->br);
 int VAR_4, VAR_5;

 if (VAR_1->index == VAR_2->sw_index && VAR_1->ops->port_bridge_leave)
  VAR_1->ops->port_bridge_leave(VAR_1, VAR_2->port, VAR_2->br);

 if (VAR_1->index != VAR_2->sw_index && VAR_1->ops->crosschip_bridge_leave)
  VAR_1->ops->crosschip_bridge_leave(VAR_1, VAR_2->sw_index, VAR_2->port,
      VAR_2->br);
 if (VAR_3 && VAR_1->vlan_filtering_is_global) {
  for (VAR_5 = 0; VAR_5 < VAR_1->num_ports; VAR_5++) {
   if (VAR_5 == VAR_2->port)
    continue;
   if (FUNC_2(VAR_1, VAR_5)->bridge_dev == VAR_2->br) {
    VAR_3 = 0;
    break;
   }
  }
 }
 if (VAR_3) {
  struct switchdev_trans VAR_6 = {0};

  VAR_4 = FUNC_1(&VAR_1->ports[VAR_2->port],
           0, &VAR_6);
  if (VAR_4 && VAR_4 != VAR_0)
   return VAR_4;
 }
 return 0;
}
