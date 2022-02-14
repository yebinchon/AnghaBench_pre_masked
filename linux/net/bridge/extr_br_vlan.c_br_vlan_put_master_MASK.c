
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_vlan_group {int vlan_hash; } ;
struct net_bridge_vlan {int rcu; int vnode; int refcnt; int br; } ;


 int FUNC_0 (struct net_bridge_vlan*) ;
 int VAR_0 ;
 struct net_bridge_vlan_group* FUNC_1 (int ) ;
 int FUNC_2 (struct net_bridge_vlan*) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;

__attribute__((used)) static void FUNC_6(struct net_bridge_vlan *VAR_2)
{
 struct net_bridge_vlan_group *VAR_3;

 if (!FUNC_2(VAR_2))
  return;

 VAR_3 = FUNC_1(VAR_2->br);
 if (FUNC_4(&VAR_2->refcnt)) {
  FUNC_5(&VAR_3->vlan_hash,
           &VAR_2->vnode, VAR_1);
  FUNC_0(VAR_2);
  FUNC_3(&VAR_2->rcu, VAR_0);
 }
}
