
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vlan_filtering; } ;
struct switchdev_attr {TYPE_1__ u; int flags; int id; int orig_dev; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_bridge_vlan_group {int vlan_hash; int vlan_list; } ;
struct net_bridge_port {int vlgrp; TYPE_2__* br; int dev; } ;
struct TYPE_4__ {scalar_t__ default_pvid; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int VAR_8 ;
 int FUNC_3 (struct net_bridge_vlan_group*) ;
 struct net_bridge_vlan_group* FUNC_4 (int,int ) ;
 int FUNC_5 (struct net_bridge_port*,scalar_t__,int,int*,struct netlink_ext_ack*) ;
 int FUNC_6 (int ,struct net_bridge_vlan_group*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int ,struct switchdev_attr*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct net_bridge_vlan_group*) ;
 int FUNC_12 (struct net_bridge_vlan_group*) ;

int FUNC_13(struct net_bridge_port *VAR_9, struct netlink_ext_ack *VAR_10)
{
 struct switchdev_attr VAR_11 = {
  .orig_dev = VAR_9->br->dev,
  .id = VAR_6,
  .flags = VAR_7,
  .u.vlan_filtering = FUNC_2(VAR_9->br, VAR_2),
 };
 struct net_bridge_vlan_group *VAR_12;
 int VAR_13 = -VAR_3;

 VAR_12 = FUNC_4(sizeof(struct net_bridge_vlan_group), VAR_5);
 if (!VAR_12)
  goto out;

 VAR_13 = FUNC_9(VAR_9->dev, &VAR_11);
 if (VAR_13 && VAR_13 != -VAR_4)
  goto err_vlan_enabled;

 VAR_13 = FUNC_8(&VAR_12->vlan_hash, &VAR_8);
 if (VAR_13)
  goto err_rhtbl;
 VAR_13 = FUNC_12(VAR_12);
 if (VAR_13)
  goto err_tunnel_init;
 FUNC_0(&VAR_12->vlan_list);
 FUNC_6(VAR_9->vlgrp, VAR_12);
 if (VAR_9->br->default_pvid) {
  bool VAR_14;

  VAR_13 = FUNC_5(VAR_9, VAR_9->br->default_pvid,
       VAR_0 |
       VAR_1,
       &VAR_14, VAR_10);
  if (VAR_13)
   goto err_vlan_add;
 }
out:
 return VAR_13;

err_vlan_add:
 FUNC_1(VAR_9->vlgrp, ((void*)0));
 FUNC_10();
 FUNC_11(VAR_12);
err_tunnel_init:
 FUNC_7(&VAR_12->vlan_hash);
err_rhtbl:
err_vlan_enabled:
 FUNC_3(VAR_12);

 goto out;
}
