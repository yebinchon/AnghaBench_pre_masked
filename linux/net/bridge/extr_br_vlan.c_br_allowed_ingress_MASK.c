
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge {int dummy; } ;
struct TYPE_2__ {int vlan_filtered; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct net_bridge const*,struct net_bridge_vlan_group*,struct sk_buff*,int *) ;
 int FUNC_2 (struct net_bridge const*,int ) ;

bool FUNC_3(const struct net_bridge *VAR_1,
   struct net_bridge_vlan_group *VAR_2, struct sk_buff *VAR_3,
   u16 *VAR_4)
{



 if (!FUNC_2(VAR_1, VAR_0)) {
  FUNC_0(VAR_3)->vlan_filtered = 0;
  return 1;
 }

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
