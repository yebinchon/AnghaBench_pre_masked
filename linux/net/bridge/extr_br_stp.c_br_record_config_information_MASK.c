
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int message_age_timer; scalar_t__ designated_age; int designated_port; int designated_bridge; int designated_cost; int designated_root; } ;
struct br_config_bpdu {scalar_t__ message_age; scalar_t__ max_age; int port_id; int bridge_id; int root_path_cost; int root; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct net_bridge_port *VAR_1,
      const struct br_config_bpdu *VAR_2)
{
 VAR_1->designated_root = VAR_2->root;
 VAR_1->designated_cost = VAR_2->root_path_cost;
 VAR_1->designated_bridge = VAR_2->bridge_id;
 VAR_1->designated_port = VAR_2->port_id;
 VAR_1->designated_age = VAR_0 - VAR_2->message_age;

 FUNC_0(&VAR_1->message_age_timer, VAR_0
    + (VAR_2->max_age - VAR_2->message_age));
}
