
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int dummy; } ;
struct TYPE_2__ {int vlan_filtered; } ;


 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 struct net_bridge_vlan* FUNC_1 (struct net_bridge_vlan_group*,int ) ;
 int FUNC_2 (struct sk_buff const*,int *) ;
 scalar_t__ FUNC_3 (struct net_bridge_vlan const*) ;

bool FUNC_4(struct net_bridge_vlan_group *VAR_0,
         const struct sk_buff *VAR_1)
{
 const struct net_bridge_vlan *VAR_2;
 u16 VAR_3;


 if (!FUNC_0(VAR_1)->vlan_filtered)
  return 1;

 FUNC_2(VAR_1, &VAR_3);
 VAR_2 = FUNC_1(VAR_0, VAR_3);
 if (VAR_2 && FUNC_3(VAR_2))
  return 1;

 return 0;
}
