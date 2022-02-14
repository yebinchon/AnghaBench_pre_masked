
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_vlan_group {int vlan_hash; int num_vlans; } ;
struct net_bridge_vlan {int rcu; int vid; int vnode; int flags; TYPE_1__* br; struct net_bridge_vlan* brvlan; struct net_bridge_port* port; } ;
struct net_bridge_port {int br; int dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge_vlan*) ;
 int FUNC_1 (struct net_bridge_vlan_group*,int ) ;
 int FUNC_2 (int ,int ,struct net_bridge_vlan*) ;
 int FUNC_3 (int ,int ) ;
 struct net_bridge_vlan_group* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (struct net_bridge_vlan*) ;
 int FUNC_6 (struct net_bridge_vlan*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (struct net_bridge_vlan*) ;
 int FUNC_8 (int *,int ) ;
 struct net_bridge_vlan_group* FUNC_9 (struct net_bridge_port*) ;
 int VAR_3 ;
 int FUNC_10 (struct net_bridge_port*,int ) ;
 int FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (struct net_bridge_vlan_group*,struct net_bridge_vlan*) ;

__attribute__((used)) static int FUNC_13(struct net_bridge_vlan *VAR_4)
{
 struct net_bridge_vlan *VAR_5 = VAR_4;
 struct net_bridge_vlan_group *VAR_6;
 struct net_bridge_port *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 if (FUNC_5(VAR_4)) {
  VAR_6 = FUNC_4(VAR_4->br);
 } else {
  VAR_7 = VAR_4->port;
  VAR_6 = FUNC_9(VAR_4->port);
  VAR_5 = VAR_4->brvlan;
 }

 FUNC_1(VAR_6, VAR_4->vid);
 if (VAR_7) {
  VAR_8 = FUNC_2(VAR_7->dev, VAR_7->br, VAR_4);
  if (VAR_8)
   goto out;
 } else {
  VAR_8 = FUNC_3(VAR_4->br->dev, VAR_4->vid);
  if (VAR_8 && VAR_8 != -VAR_1)
   goto out;
  VAR_8 = 0;
 }

 if (FUNC_7(VAR_4)) {
  VAR_4->flags &= ~VAR_0;
  VAR_6->num_vlans--;
 }

 if (VAR_5 != VAR_4) {
  FUNC_12(VAR_6, VAR_4);
  FUNC_11(&VAR_6->vlan_hash, &VAR_4->vnode,
           VAR_2);
  FUNC_0(VAR_4);
  FUNC_10(VAR_7, VAR_4->vid);
  FUNC_8(&VAR_4->rcu, VAR_3);
 }

 FUNC_6(VAR_5);
out:
 return VAR_8;
}
