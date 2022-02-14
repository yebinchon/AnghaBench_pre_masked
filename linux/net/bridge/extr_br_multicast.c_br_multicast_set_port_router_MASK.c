
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {unsigned long multicast_router; int multicast_router_timer; struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; scalar_t__ multicast_querier_interval; } ;


 int VAR_0 ;




 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge*,struct net_bridge_port*) ;
 int FUNC_2 (struct net_bridge*,struct net_bridge_port*) ;
 int FUNC_3 (int *) ;
 unsigned long VAR_1 ;
 int FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct net_bridge_port *VAR_2, unsigned long VAR_3)
{
 struct net_bridge *VAR_4 = VAR_2->br;
 unsigned long VAR_5 = VAR_1;
 int VAR_6 = -VAR_0;

 FUNC_5(&VAR_4->multicast_lock);
 if (VAR_2->multicast_router == VAR_3) {

  if (VAR_2->multicast_router == 129)
   FUNC_4(&VAR_2->multicast_router_timer,
      VAR_5 + VAR_4->multicast_querier_interval);
  VAR_6 = 0;
  goto unlock;
 }
 switch (VAR_3) {
 case 131:
  VAR_2->multicast_router = 131;
  FUNC_0(VAR_2);
  FUNC_3(&VAR_2->multicast_router_timer);
  break;
 case 128:
  VAR_2->multicast_router = 128;
  FUNC_0(VAR_2);
  break;
 case 130:
  VAR_2->multicast_router = 130;
  FUNC_3(&VAR_2->multicast_router_timer);
  FUNC_1(VAR_4, VAR_2);
  break;
 case 129:
  VAR_2->multicast_router = 129;
  FUNC_2(VAR_4, VAR_2);
  break;
 default:
  goto unlock;
 }
 VAR_6 = 0;
unlock:
 FUNC_6(&VAR_4->multicast_lock);

 return VAR_6;
}
