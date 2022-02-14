
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int dummy; } ;
struct net_bridge_port {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 struct net_bridge_vlan* FUNC_1 (struct net_bridge_vlan_group*,int ) ;
 struct net_bridge_vlan_group* FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (struct net_bridge_vlan_group*,struct net_bridge_vlan*) ;

int FUNC_4(struct net_bridge_port *VAR_1, u16 VAR_2)
{
 struct net_bridge_vlan_group *VAR_3;
 struct net_bridge_vlan *VAR_4;

 FUNC_0();

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(VAR_3, VAR_4);

 return 0;
}
