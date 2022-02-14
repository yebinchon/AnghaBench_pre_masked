
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_bridge_vlan {struct net_bridge_port* port; int vid; } ;
struct net_bridge_port {int dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct net_bridge_vlan*,int ,struct netlink_ext_ack*) ;
 int FUNC_2 (struct net_bridge_vlan*,int ) ;
 int FUNC_3 (int ,int ,int ,struct netlink_ext_ack*) ;
 struct net_bridge_vlan* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_bridge_vlan*) ;
 struct net_bridge_vlan* FUNC_6 (int,int ) ;
 int FUNC_7 (struct net_bridge_port*) ;

int FUNC_8(struct net_bridge_port *VAR_3, u16 VAR_4, u16 VAR_5,
   bool *VAR_6, struct netlink_ext_ack *VAR_7)
{
 struct net_bridge_vlan *VAR_8;
 int VAR_9;

 FUNC_0();

 *VAR_6 = 0;
 VAR_8 = FUNC_4(FUNC_7(VAR_3), VAR_4);
 if (VAR_8) {

  VAR_9 = FUNC_3(VAR_3->dev, VAR_4, VAR_5, VAR_7);
  if (VAR_9 && VAR_9 != -VAR_1)
   return VAR_9;
  *VAR_6 = FUNC_2(VAR_8, VAR_5);

  return 0;
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->vid = VAR_4;
 VAR_8->port = VAR_3;
 VAR_9 = FUNC_1(VAR_8, VAR_5, VAR_7);
 if (VAR_9)
  FUNC_5(VAR_8);
 else
  *VAR_6 = 1;

 return VAR_9;
}
