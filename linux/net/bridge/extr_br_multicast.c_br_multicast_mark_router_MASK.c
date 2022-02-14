
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ multicast_router; int multicast_router_timer; } ;
struct net_bridge {scalar_t__ multicast_router; scalar_t__ multicast_querier_interval; int multicast_router_timer; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net_bridge*,int) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_bridge *VAR_4,
         struct net_bridge_port *VAR_5)
{
 unsigned long VAR_6 = VAR_3;

 if (!VAR_5) {
  if (VAR_4->multicast_router == VAR_2) {
   if (!FUNC_3(&VAR_4->multicast_router_timer))
    FUNC_0(VAR_4, 1);
   FUNC_2(&VAR_4->multicast_router_timer,
      VAR_6 + VAR_4->multicast_querier_interval);
  }
  return;
 }

 if (VAR_5->multicast_router == VAR_0 ||
     VAR_5->multicast_router == VAR_1)
  return;

 FUNC_1(VAR_4, VAR_5);

 FUNC_2(&VAR_5->multicast_router_timer,
    VAR_6 + VAR_4->multicast_querier_interval);
}
