
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_bridge_vlan_group {scalar_t__ pvid; int vlan_hash; } ;
struct net_bridge_vlan {int flags; } ;


 int VAR_0 ;
 struct net_bridge_vlan* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_bridge_vlan*) ;

__attribute__((used)) static bool FUNC_2(struct net_bridge_vlan_group *VAR_1, u16 VAR_2)
{
 struct net_bridge_vlan *VAR_3;

 if (VAR_2 != VAR_1->pvid)
  return 0;

 VAR_3 = FUNC_0(&VAR_1->vlan_hash, VAR_2);
 if (VAR_3 && FUNC_1(VAR_3) &&
     (VAR_3->flags & VAR_0))
  return 1;

 return 0;
}
