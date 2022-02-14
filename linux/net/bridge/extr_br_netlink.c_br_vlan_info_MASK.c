
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;
struct bridge_vlan_info {int flags; int vid; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (struct net_bridge*,int ,int,int*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct net_bridge*,int ) ;
 int FUNC_2 (struct net_bridge_port*,int ,int,int*,struct netlink_ext_ack*) ;
 int FUNC_3 (struct net_bridge_port*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_bridge *VAR_2, struct net_bridge_port *VAR_3,
   int VAR_4, struct bridge_vlan_info *VAR_5, bool *VAR_6,
   struct netlink_ext_ack *VAR_7)
{
 bool VAR_8;
 int VAR_9 = 0;

 switch (VAR_4) {
 case 128:
  if (VAR_3) {



   VAR_9 = FUNC_2(VAR_3, VAR_5->vid, VAR_5->flags,
        &VAR_8, VAR_7);
  } else {
   VAR_5->flags |= VAR_0;
   VAR_9 = FUNC_0(VAR_2, VAR_5->vid, VAR_5->flags,
       &VAR_8, VAR_7);
  }
  if (VAR_8)
   *VAR_6 = 1;
  break;

 case 129:
  if (VAR_3) {
   if (!FUNC_3(VAR_3, VAR_5->vid))
    *VAR_6 = 1;

   if ((VAR_5->flags & VAR_1) &&
       !FUNC_1(VAR_3->br, VAR_5->vid))
    *VAR_6 = 1;
  } else if (!FUNC_1(VAR_2, VAR_5->vid)) {
   *VAR_6 = 1;
  }
  break;
 }

 return VAR_9;
}
