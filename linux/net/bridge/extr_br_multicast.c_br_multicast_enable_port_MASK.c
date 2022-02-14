
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int multicast_lock; } ;


 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct net_bridge_port *VAR_0)
{
 struct net_bridge *VAR_1 = VAR_0->br;

 FUNC_1(&VAR_1->multicast_lock);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_1->multicast_lock);
}
