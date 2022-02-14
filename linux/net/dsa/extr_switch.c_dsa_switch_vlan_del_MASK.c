
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {scalar_t__ index; TYPE_1__* ops; } ;
struct dsa_notifier_vlan_info {scalar_t__ sw_index; int vlan; int port; } ;
struct TYPE_2__ {int (* port_vlan_del ) (struct dsa_switch*,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_switch*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct dsa_switch *VAR_1,
          struct dsa_notifier_vlan_info *VAR_2)
{
 if (!VAR_1->ops->port_vlan_del)
  return -VAR_0;

 if (VAR_1->index == VAR_2->sw_index)
  return VAR_1->ops->port_vlan_del(VAR_1, VAR_2->port, VAR_2->vlan);




 return 0;
}
