
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_switch {int num_ports; int dev; int vlan_filtering_is_global; } ;
struct dsa_port {struct net_device* bridge_dev; struct dsa_switch* ds; } ;
struct TYPE_2__ {struct net_device* bridge_dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* FUNC_2 (struct dsa_switch*,int) ;

__attribute__((used)) static bool FUNC_3(struct dsa_port *VAR_0,
           bool VAR_1)
{
 struct dsa_switch *VAR_2 = VAR_0->ds;
 int VAR_3;

 if (!VAR_2->vlan_filtering_is_global)
  return 1;






 for (VAR_3 = 0; VAR_3 < VAR_2->num_ports; VAR_3++) {
  struct net_device *VAR_4;

  VAR_4 = FUNC_2(VAR_2, VAR_3)->bridge_dev;
  if (!VAR_4)
   continue;



  if (VAR_4 == VAR_0->bridge_dev)
   continue;
  if (FUNC_0(VAR_4) != VAR_1) {
   FUNC_1(VAR_2->dev, "VLAN filtering is a global setting\n");
   return 0;
  }
 }
 return 1;
}
