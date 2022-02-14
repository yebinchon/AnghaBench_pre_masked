
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int config_pending; scalar_t__ designated_age; int hold_timer; struct net_bridge* br; scalar_t__ topology_change_ack; int port_id; } ;
struct net_bridge {scalar_t__ max_age; scalar_t__ stp_enabled; int forward_delay; int hello_time; int root_port; int bridge_id; int root_path_cost; int designated_root; int topology_change; } ;
struct br_config_bpdu {scalar_t__ message_age; scalar_t__ max_age; int forward_delay; int hello_time; int port_id; int bridge_id; int root_path_cost; int root; scalar_t__ topology_change_ack; int topology_change; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct net_bridge_port* FUNC_0 (struct net_bridge*,int ) ;
 scalar_t__ FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge_port*,struct br_config_bpdu*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;

void FUNC_6(struct net_bridge_port *VAR_4)
{
 struct br_config_bpdu VAR_5;
 struct net_bridge *VAR_6;

 if (FUNC_5(&VAR_4->hold_timer)) {
  VAR_4->config_pending = 1;
  return;
 }

 VAR_6 = VAR_4->br;

 VAR_5.topology_change = VAR_6->topology_change;
 VAR_5.topology_change_ack = VAR_4->topology_change_ack;
 VAR_5.root = VAR_6->designated_root;
 VAR_5.root_path_cost = VAR_6->root_path_cost;
 VAR_5.bridge_id = VAR_6->bridge_id;
 VAR_5.port_id = VAR_4->port_id;
 if (FUNC_1(VAR_6))
  VAR_5.message_age = 0;
 else {
  struct net_bridge_port *VAR_7
   = FUNC_0(VAR_6, VAR_6->root_port);
  VAR_5.message_age = (VAR_3 - VAR_7->designated_age)
   + VAR_2;
 }
 VAR_5.max_age = VAR_6->max_age;
 VAR_5.hello_time = VAR_6->hello_time;
 VAR_5.forward_delay = VAR_6->forward_delay;

 if (VAR_5.message_age < VAR_6->max_age) {
  FUNC_2(VAR_4, &VAR_5);
  VAR_4->topology_change_ack = 0;
  VAR_4->config_pending = 0;
  if (VAR_4->br->stp_enabled == VAR_1)
   FUNC_3(&VAR_4->hold_timer,
      FUNC_4(VAR_3 + VAR_0));
 }
}
