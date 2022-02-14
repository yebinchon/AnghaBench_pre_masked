
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge_vlan_group*) ;
 struct net_bridge_vlan_group* FUNC_1 (int ) ;
 struct net_bridge_vlan_group* FUNC_2 (struct net_bridge_port*) ;
 int FUNC_3 (struct net_device const*) ;
 scalar_t__ FUNC_4 (struct net_device const*) ;

__attribute__((used)) static int FUNC_5(const struct net_device *VAR_1,
         struct net_bridge_port *VAR_2, u16 *VAR_3)
{
 struct net_bridge_vlan_group *VAR_4;

 if (VAR_2)
  VAR_4 = FUNC_2(VAR_2);
 else if (FUNC_4(VAR_1))
  VAR_4 = FUNC_1(FUNC_3(VAR_1));
 else
  return -VAR_0;

 *VAR_3 = FUNC_0(VAR_4);
 return 0;
}
