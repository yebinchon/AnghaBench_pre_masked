
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int flags; } ;
struct net_bridge_port {int dummy; } ;
struct bridge_vlan_info {int flags; scalar_t__ vid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct net_bridge_vlan_group*) ;
 struct net_bridge_port* FUNC_2 (struct net_device const*) ;
 struct net_bridge_vlan* FUNC_3 (struct net_bridge_vlan_group*,scalar_t__) ;
 struct net_bridge_vlan_group* FUNC_4 (int ) ;
 struct net_bridge_vlan_group* FUNC_5 (struct net_bridge_port*) ;
 int FUNC_6 (struct net_device const*) ;
 scalar_t__ FUNC_7 (struct net_device const*) ;

int FUNC_8(const struct net_device *VAR_3, u16 VAR_4,
       struct bridge_vlan_info *VAR_5)
{
 struct net_bridge_vlan_group *VAR_6;
 struct net_bridge_vlan *VAR_7;
 struct net_bridge_port *VAR_8;

 FUNC_0();
 VAR_8 = FUNC_2(VAR_3);
 if (VAR_8)
  VAR_6 = FUNC_5(VAR_8);
 else if (FUNC_7(VAR_3))
  VAR_6 = FUNC_4(FUNC_6(VAR_3));
 else
  return -VAR_1;

 VAR_7 = FUNC_3(VAR_6, VAR_4);
 if (!VAR_7)
  return -VAR_2;

 VAR_5->vid = VAR_4;
 VAR_5->flags = VAR_7->flags;
 if (VAR_4 == FUNC_1(VAR_6))
  VAR_5->flags |= VAR_0;
 return 0;
}
