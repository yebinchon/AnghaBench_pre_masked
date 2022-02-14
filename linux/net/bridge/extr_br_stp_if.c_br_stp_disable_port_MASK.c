
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int backup_port; int hold_timer; int forward_delay_timer; int message_age_timer; scalar_t__ config_pending; scalar_t__ topology_change_ack; struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (struct net_bridge*,struct net_bridge_port*,int ,int ) ;
 int FUNC_4 (int ,int *,struct net_bridge_port*) ;
 int FUNC_5 (struct net_bridge*) ;
 int FUNC_6 (struct net_bridge_port*) ;
 int FUNC_7 (struct net_bridge*) ;
 int FUNC_8 (struct net_bridge_port*,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

void FUNC_11(struct net_bridge_port *VAR_2)
{
 struct net_bridge *VAR_3 = VAR_2->br;
 int VAR_4;

 VAR_4 = FUNC_5(VAR_3);
 FUNC_0(VAR_2);
 FUNC_8(VAR_2, VAR_0);
 VAR_2->topology_change_ack = 0;
 VAR_2->config_pending = 0;

 FUNC_4(VAR_1, ((void*)0), VAR_2);

 FUNC_9(&VAR_2->message_age_timer);
 FUNC_9(&VAR_2->forward_delay_timer);
 FUNC_9(&VAR_2->hold_timer);

 if (!FUNC_10(VAR_2->backup_port))
  FUNC_3(VAR_3, VAR_2, 0, 0);
 FUNC_6(VAR_2);

 FUNC_2(VAR_3);

 FUNC_7(VAR_3);

 if (FUNC_5(VAR_3) && !VAR_4)
  FUNC_1(VAR_3);
}
