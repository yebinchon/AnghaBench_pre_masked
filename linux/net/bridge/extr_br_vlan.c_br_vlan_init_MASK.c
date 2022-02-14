
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_vlan_group {int vlan_hash; int vlan_list; } ;
struct net_bridge {int default_pvid; int vlgrp; int vlan_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_bridge_vlan_group*) ;
 struct net_bridge_vlan_group* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct net_bridge_vlan_group*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct net_bridge_vlan_group*) ;

int FUNC_8(struct net_bridge *VAR_4)
{
 struct net_bridge_vlan_group *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  goto out;
 VAR_6 = FUNC_6(&VAR_5->vlan_hash, &VAR_3);
 if (VAR_6)
  goto err_rhtbl;
 VAR_6 = FUNC_7(VAR_5);
 if (VAR_6)
  goto err_tunnel_init;
 FUNC_0(&VAR_5->vlan_list);
 VAR_4->vlan_proto = FUNC_1(VAR_1);
 VAR_4->default_pvid = 1;
 FUNC_4(VAR_4->vlgrp, VAR_5);

out:
 return VAR_6;

err_tunnel_init:
 FUNC_5(&VAR_5->vlan_hash);
err_rhtbl:
 FUNC_2(VAR_5);

 goto out;
}
