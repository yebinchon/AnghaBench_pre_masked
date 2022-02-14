
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ vlan_proto; } ;
struct net_bridge_vlan_group {int num_vlans; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {scalar_t__ vlan_proto; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge_vlan_group*) ;
 int FUNC_1 (struct net_bridge*,int ) ;
 scalar_t__ FUNC_2 (struct net_bridge_vlan_group*,int ) ;
 int FUNC_3 (struct sk_buff*,int *) ;
 struct net_bridge_vlan_group* FUNC_4 (struct net_bridge_port*) ;

bool FUNC_5(struct net_bridge_port *VAR_1, struct sk_buff *VAR_2, u16 *VAR_3)
{
 struct net_bridge_vlan_group *VAR_4;
 struct net_bridge *VAR_5 = VAR_1->br;


 if (!FUNC_1(VAR_5, VAR_0))
  return 1;

 VAR_4 = FUNC_4(VAR_1);
 if (!VAR_4 || !VAR_4->num_vlans)
  return 0;

 if (!FUNC_3(VAR_2, VAR_3) && VAR_2->vlan_proto != VAR_5->vlan_proto)
  *VAR_3 = 0;

 if (!*VAR_3) {
  *VAR_3 = FUNC_0(VAR_4);
  if (!*VAR_3)
   return 0;

  return 1;
 }

 if (FUNC_2(VAR_4, *VAR_3))
  return 1;

 return 0;
}
