
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_vlan {int dummy; } ;
struct net_bridge {TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct net_bridge_vlan*) ;
 int FUNC_2 (struct net_bridge*,int *,int ,int ) ;
 int FUNC_3 (struct net_bridge*,int *,int ,int ) ;
 struct net_bridge_vlan* FUNC_4 (struct net_bridge_vlan_group*,int ) ;
 struct net_bridge_vlan_group* FUNC_5 (struct net_bridge*) ;
 int FUNC_6 (struct net_bridge_vlan*) ;
 int FUNC_7 (struct net_bridge_vlan_group*,struct net_bridge_vlan*) ;

int FUNC_8(struct net_bridge *VAR_1, u16 VAR_2)
{
 struct net_bridge_vlan_group *VAR_3;
 struct net_bridge_vlan *VAR_4;

 FUNC_0();

 VAR_3 = FUNC_5(VAR_1);
 VAR_4 = FUNC_4(VAR_3, VAR_2);
 if (!VAR_4 || !FUNC_6(VAR_4))
  return -VAR_0;

 FUNC_3(VAR_1, ((void*)0), VAR_1->dev->dev_addr, VAR_2);
 FUNC_2(VAR_1, ((void*)0), VAR_2, 0);

 FUNC_7(VAR_3, VAR_4);

 return FUNC_1(VAR_4);
}
