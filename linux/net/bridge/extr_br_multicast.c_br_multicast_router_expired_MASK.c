
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct net_bridge_port {scalar_t__ multicast_router; int multicast_router_timer; struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct net_bridge_port*) ;
 struct net_bridge_port* FUNC_1 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 struct net_bridge_port* VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_4)
{
 struct net_bridge_port *VAR_5 =
   FUNC_1(VAR_5, VAR_4, VAR_2);
 struct net_bridge *VAR_6 = VAR_5->br;

 FUNC_2(&VAR_6->multicast_lock);
 if (VAR_5->multicast_router == VAR_0 ||
     VAR_5->multicast_router == VAR_1 ||
     FUNC_4(&VAR_5->multicast_router_timer))
  goto out;

 FUNC_0(VAR_5);
out:
 FUNC_3(&VAR_6->multicast_lock);
}
