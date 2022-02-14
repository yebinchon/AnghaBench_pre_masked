
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int refcnt; } ;
struct net_bridge {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct net_bridge*,int ,int ,int*,struct netlink_ext_ack*) ;
 struct net_bridge_vlan* FUNC_2 (struct net_bridge_vlan_group*,int ) ;
 struct net_bridge_vlan_group* FUNC_3 (struct net_bridge*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static struct net_bridge_vlan *
FUNC_6(struct net_bridge *VAR_0, u16 VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct net_bridge_vlan_group *VAR_3;
 struct net_bridge_vlan *VAR_4;

 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = FUNC_2(VAR_3, VAR_1);
 if (!VAR_4) {
  bool VAR_5;


  if (FUNC_1(VAR_0, VAR_1, 0, &VAR_5, VAR_2))
   return ((void*)0);
  VAR_4 = FUNC_2(VAR_3, VAR_1);
  if (FUNC_0(!VAR_4))
   return ((void*)0);
  FUNC_5(&VAR_4->refcnt, 1);
  return VAR_4;
 }
 FUNC_4(&VAR_4->refcnt);

 return VAR_4;
}
