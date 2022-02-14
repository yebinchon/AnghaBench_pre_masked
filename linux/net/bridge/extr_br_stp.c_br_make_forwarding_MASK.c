
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ state; int forward_delay_timer; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ stp_enabled; scalar_t__ forward_delay; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int *,struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge_port*,int ) ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_bridge_port *VAR_8)
{
 struct net_bridge *VAR_9 = VAR_8->br;

 if (VAR_8->state != VAR_2)
  return;

 if (VAR_9->stp_enabled == VAR_1 || VAR_9->forward_delay == 0) {
  FUNC_1(VAR_8, VAR_3);
  FUNC_2(VAR_9);
  FUNC_3(&VAR_8->forward_delay_timer);
 } else if (VAR_9->stp_enabled == VAR_0)
  FUNC_1(VAR_8, VAR_5);
 else
  FUNC_1(VAR_8, VAR_4);

 FUNC_0(VAR_6, ((void*)0), VAR_8);

 if (VAR_9->forward_delay != 0)
  FUNC_4(&VAR_8->forward_delay_timer, VAR_7 + VAR_9->forward_delay);
}
