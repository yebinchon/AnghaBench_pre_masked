
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_bridge_vlan_group {int tunnel_hash; } ;
struct net_bridge_vlan {int vid; } ;
struct net_bridge_port {TYPE_2__* br; } ;
struct TYPE_3__ {int tun_id; } ;
struct ip_tunnel_info {TYPE_1__ key; } ;
struct TYPE_4__ {int vlan_proto; } ;


 int FUNC_0 (struct sk_buff*,int ,int ) ;
 struct net_bridge_vlan* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct ip_tunnel_info* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_0,
      struct net_bridge_port *VAR_1,
      struct net_bridge_vlan_group *VAR_2)
{
 struct ip_tunnel_info *VAR_3 = FUNC_3(VAR_0);
 struct net_bridge_vlan *VAR_4;

 if (!VAR_2 || !VAR_3)
  return 0;


 if (FUNC_4(VAR_0))
  return 0;


 VAR_4 = FUNC_1(&VAR_2->tunnel_hash, VAR_3->key.tun_id);
 if (!VAR_4)
  return 0;

 FUNC_2(VAR_0);

 FUNC_0(VAR_0, VAR_1->br->vlan_proto, VAR_4->vid);

 return 0;
}
