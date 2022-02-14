
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ dev; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_port {int flags; scalar_t__ dev; scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct net_bridge_vlan_group*,struct sk_buff const*) ;
 int FUNC_1 (struct net_bridge_port const*,struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct net_bridge_port const*,struct sk_buff const*) ;
 struct net_bridge_vlan_group* FUNC_3 (struct net_bridge_port const*) ;

__attribute__((used)) static inline int FUNC_4(const struct net_bridge_port *VAR_2,
     const struct sk_buff *VAR_3)
{
 struct net_bridge_vlan_group *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 return ((VAR_2->flags & VAR_0) || VAR_3->dev != VAR_2->dev) &&
  FUNC_0(VAR_4, VAR_3) && VAR_2->state == VAR_1 &&
  FUNC_2(VAR_2, VAR_3) &&
  !FUNC_1(VAR_2, VAR_3);
}
