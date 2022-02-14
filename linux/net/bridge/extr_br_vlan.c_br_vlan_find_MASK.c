
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_vlan_group {int vlan_hash; } ;
struct net_bridge_vlan {int dummy; } ;


 struct net_bridge_vlan* FUNC_0 (int *,int ) ;

struct net_bridge_vlan *FUNC_1(struct net_bridge_vlan_group *VAR_0, u16 VAR_1)
{
 if (!VAR_0)
  return ((void*)0);

 return FUNC_0(&VAR_0->vlan_hash, VAR_1);
}
