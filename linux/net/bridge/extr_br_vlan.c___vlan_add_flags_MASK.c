
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int flags; int vid; int port; int br; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge_vlan_group*,int ) ;
 int FUNC_1 (struct net_bridge_vlan_group*,int ) ;
 struct net_bridge_vlan_group* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_bridge_vlan*) ;
 struct net_bridge_vlan_group* FUNC_4 (int ) ;

__attribute__((used)) static bool FUNC_5(struct net_bridge_vlan *VAR_2, u16 VAR_3)
{
 struct net_bridge_vlan_group *VAR_4;
 u16 VAR_5 = VAR_2->flags;
 bool VAR_6;

 if (FUNC_3(VAR_2))
  VAR_4 = FUNC_2(VAR_2->br);
 else
  VAR_4 = FUNC_4(VAR_2->port);

 if (VAR_3 & VAR_0)
  VAR_6 = FUNC_0(VAR_4, VAR_2->vid);
 else
  VAR_6 = FUNC_1(VAR_4, VAR_2->vid);

 if (VAR_3 & VAR_1)
  VAR_2->flags |= VAR_1;
 else
  VAR_2->flags &= ~VAR_1;

 return VAR_6 || !!(VAR_5 ^ VAR_2->flags);
}
