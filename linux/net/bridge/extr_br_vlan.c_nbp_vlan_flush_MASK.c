
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_vlan_group {int dummy; } ;
struct net_bridge_port {int vlgrp; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_bridge_vlan_group*) ;
 int FUNC_3 (struct net_bridge_vlan_group*) ;
 struct net_bridge_vlan_group* FUNC_4 (struct net_bridge_port*) ;
 int FUNC_5 () ;

void FUNC_6(struct net_bridge_port *VAR_0)
{
 struct net_bridge_vlan_group *VAR_1;

 FUNC_0();

 VAR_1 = FUNC_4(VAR_0);
 FUNC_2(VAR_1);
 FUNC_1(VAR_0->vlgrp, ((void*)0));
 FUNC_5();
 FUNC_3(VAR_1);
}
