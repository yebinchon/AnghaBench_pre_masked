
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_bridge_port {int dummy; } ;
struct net_bridge {int dummy; } ;
struct bridge_vlan_info {scalar_t__ vid; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct net_bridge*,struct net_bridge_port*,int,struct bridge_vlan_info*,int*,struct netlink_ext_ack*) ;
 int FUNC_1 (struct bridge_vlan_info*,struct bridge_vlan_info*,int) ;

__attribute__((used)) static int FUNC_2(struct net_bridge *VAR_5,
    struct net_bridge_port *VAR_6, int VAR_7,
    struct bridge_vlan_info *VAR_8,
    struct bridge_vlan_info **VAR_9,
    bool *VAR_10,
    struct netlink_ext_ack *VAR_11)
{
 if (!VAR_8->vid || VAR_8->vid >= VAR_4)
  return -VAR_3;

 if (VAR_8->flags & VAR_1) {

  if (*VAR_9)
   return -VAR_3;
  *VAR_9 = VAR_8;

  if ((*VAR_9)->flags & VAR_0)
   return -VAR_3;
  return 0;
 }

 if (*VAR_9) {
  struct bridge_vlan_info VAR_12;
  int VAR_13, VAR_14;

  if (!(VAR_8->flags & VAR_2))
   return -VAR_3;

  if (VAR_8->vid <= (*VAR_9)->vid)
   return -VAR_3;

  FUNC_1(&VAR_12, *VAR_9,
         sizeof(struct bridge_vlan_info));
  for (VAR_13 = (*VAR_9)->vid; VAR_13 <= VAR_8->vid; VAR_13++) {
   VAR_12.vid = VAR_13;
   VAR_14 = FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_12, VAR_10,
        VAR_11);
   if (VAR_14)
    break;
  }
  *VAR_9 = ((void*)0);

  return VAR_14;
 }

 return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_11);
}
