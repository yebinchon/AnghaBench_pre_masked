
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {int dummy; } ;
struct net_bridge_port {int flags; int state; int topology_change_ack; int config_pending; int multicast_router; TYPE_1__* dev; int backup_port; int hold_timer; int forward_delay_timer; int message_age_timer; int group_fwd_mask; int port_no; int port_id; int designated_cost; int designated_port; int designated_bridge; int designated_root; int path_cost; int priority; } ;
struct ifla_bridge_id {int dummy; } ;
struct TYPE_2__ {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int) ;
 struct net_bridge_port* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_47,
         const struct net_bridge_port *VAR_48)
{
 u8 VAR_49 = !!(VAR_48->flags & VAR_3);
 struct net_bridge_port *VAR_50;
 u64 VAR_51;

 if (FUNC_5(VAR_47, VAR_43, VAR_48->state) ||
     FUNC_2(VAR_47, VAR_38, VAR_48->priority) ||
     FUNC_3(VAR_47, VAR_19, VAR_48->path_cost) ||
     FUNC_5(VAR_47, VAR_33, VAR_49) ||
     FUNC_5(VAR_47, VAR_25, !!(VAR_48->flags & VAR_1)) ||
     FUNC_5(VAR_47, VAR_39,
         !!(VAR_48->flags & VAR_12)) ||
     FUNC_5(VAR_47, VAR_22,
         !!(VAR_48->flags & VAR_7)) ||
     FUNC_5(VAR_47, VAR_31,
         !!(VAR_48->flags & VAR_8)) ||
     FUNC_5(VAR_47, VAR_29, !!(VAR_48->flags & VAR_5)) ||
     FUNC_5(VAR_47, VAR_45,
         !!(VAR_48->flags & VAR_2)) ||
     FUNC_5(VAR_47, VAR_30,
         !!(VAR_48->flags & VAR_6)) ||
     FUNC_5(VAR_47, VAR_16,
         !!(VAR_48->flags & VAR_0)) ||
     FUNC_5(VAR_47, VAR_40, !!(VAR_48->flags & VAR_10)) ||
     FUNC_5(VAR_47, VAR_41,
         !!(VAR_48->flags & VAR_11)) ||
     FUNC_1(VAR_47, VAR_42, sizeof(struct ifla_bridge_id),
      &VAR_48->designated_root) ||
     FUNC_1(VAR_47, VAR_17, sizeof(struct ifla_bridge_id),
      &VAR_48->designated_bridge) ||
     FUNC_2(VAR_47, VAR_21, VAR_48->designated_port) ||
     FUNC_2(VAR_47, VAR_20, VAR_48->designated_cost) ||
     FUNC_2(VAR_47, VAR_27, VAR_48->port_id) ||
     FUNC_2(VAR_47, VAR_36, VAR_48->port_no) ||
     FUNC_5(VAR_47, VAR_44,
         VAR_48->topology_change_ack) ||
     FUNC_5(VAR_47, VAR_18, VAR_48->config_pending) ||
     FUNC_5(VAR_47, VAR_46, !!(VAR_48->flags &
       VAR_13)) ||
     FUNC_2(VAR_47, VAR_24, VAR_48->group_fwd_mask) ||
     FUNC_5(VAR_47, VAR_35,
         !!(VAR_48->flags & VAR_9)) ||
     FUNC_5(VAR_47, VAR_28, !!(VAR_48->flags & VAR_4)))
  return -VAR_14;

 VAR_51 = FUNC_0(&VAR_48->message_age_timer);
 if (FUNC_4(VAR_47, VAR_32, VAR_51,
         VAR_37))
  return -VAR_14;
 VAR_51 = FUNC_0(&VAR_48->forward_delay_timer);
 if (FUNC_4(VAR_47, VAR_23, VAR_51,
         VAR_37))
  return -VAR_14;
 VAR_51 = FUNC_0(&VAR_48->hold_timer);
 if (FUNC_4(VAR_47, VAR_26, VAR_51,
         VAR_37))
  return -VAR_14;
 FUNC_7();
 VAR_50 = FUNC_6(VAR_48->backup_port);
 if (VAR_50)
  FUNC_3(VAR_47, VAR_15,
       VAR_50->dev->ifindex);
 FUNC_8();

 return 0;
}
