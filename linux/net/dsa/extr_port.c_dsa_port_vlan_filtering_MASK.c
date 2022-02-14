
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_trans {int dummy; } ;
struct dsa_switch {int vlan_filtering; scalar_t__ vlan_filtering_is_global; TYPE_1__* ops; } ;
struct dsa_port {int vlan_filtering; int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* port_vlan_filtering ) (struct dsa_switch*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dsa_port*,int) ;
 int FUNC_1 (struct dsa_port*) ;
 int FUNC_2 (struct dsa_switch*,int ,int) ;
 scalar_t__ FUNC_3 (struct switchdev_trans*) ;

int FUNC_4(struct dsa_port *VAR_1, bool VAR_2,
       struct switchdev_trans *VAR_3)
{
 struct dsa_switch *VAR_4 = VAR_1->ds;
 int VAR_5;


 if (FUNC_3(VAR_3))
  return 0;

 if (!VAR_4->ops->port_vlan_filtering)
  return 0;

 if (!FUNC_0(VAR_1, VAR_2))
  return -VAR_0;

 if (FUNC_1(VAR_1) == VAR_2)
  return 0;

 VAR_5 = VAR_4->ops->port_vlan_filtering(VAR_4, VAR_1->index,
        VAR_2);
 if (VAR_5)
  return VAR_5;

 if (VAR_4->vlan_filtering_is_global)
  VAR_4->vlan_filtering = VAR_2;
 else
  VAR_1->vlan_filtering = VAR_2;
 return 0;
}
