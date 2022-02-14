
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct vlan_dev_priv {scalar_t__* ingress_priority_map; int nr_ingress_mappings; } ;
struct net_device {int dummy; } ;


 struct vlan_dev_priv* FUNC_0 (struct net_device const*) ;

void FUNC_1(const struct net_device *VAR_0,
       u32 VAR_1, u16 VAR_2)
{
 struct vlan_dev_priv *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->ingress_priority_map[VAR_2 & 0x7] && !VAR_1)
  VAR_3->nr_ingress_mappings--;
 else if (!VAR_3->ingress_priority_map[VAR_2 & 0x7] && VAR_1)
  VAR_3->nr_ingress_mappings++;

 VAR_3->ingress_priority_map[VAR_2 & 0x7] = VAR_1;
}
