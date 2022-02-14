
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net_bridge_vlan {int priv_flags; int vid; } ;
struct net_bridge {int vlan_proto; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int ,int ,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2, struct net_bridge *VAR_3,
     struct net_bridge_vlan *VAR_4, u16 VAR_5,
     struct netlink_ext_ack *VAR_6)
{
 int VAR_7;




 VAR_7 = FUNC_0(VAR_2, VAR_4->vid, VAR_5, VAR_6);
 if (VAR_7 == -VAR_1)
  return FUNC_1(VAR_2, VAR_3->vlan_proto, VAR_4->vid);
 VAR_4->priv_flags |= VAR_0;
 return VAR_7;
}
