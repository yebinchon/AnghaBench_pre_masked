
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int num_ports; TYPE_1__* ops; } ;
struct dsa_notifier_vlan_info {int vlan; } ;
struct TYPE_2__ {int (* port_vlan_prepare ) (struct dsa_switch*,int,int ) ;int port_vlan_add; } ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int,int ) ;
 scalar_t__ FUNC_1 (struct dsa_switch*,int,struct dsa_notifier_vlan_info*) ;
 int FUNC_2 (struct dsa_switch*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct dsa_switch *VAR_1,
       struct dsa_notifier_vlan_info *VAR_2)
{
 int VAR_3, VAR_4;

 if (!VAR_1->ops->port_vlan_prepare || !VAR_1->ops->port_vlan_add)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_ports; VAR_3++) {
  if (FUNC_1(VAR_1, VAR_3, VAR_2)) {
   VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_2->vlan);
   if (VAR_4)
    return VAR_4;

   VAR_4 = VAR_1->ops->port_vlan_prepare(VAR_1, VAR_3, VAR_2->vlan);
   if (VAR_4)
    return VAR_4;
  }
 }

 return 0;
}
