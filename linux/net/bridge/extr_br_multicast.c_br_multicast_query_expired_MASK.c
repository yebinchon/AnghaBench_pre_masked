
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ multicast_startup_query_count; int multicast_lock; } ;
struct bridge_mcast_querier {int port; } ;
struct bridge_mcast_own_query {scalar_t__ startup_sent; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct net_bridge*,int *,struct bridge_mcast_own_query*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_bridge *VAR_0,
           struct bridge_mcast_own_query *VAR_1,
           struct bridge_mcast_querier *VAR_2)
{
 FUNC_2(&VAR_0->multicast_lock);
 if (VAR_1->startup_sent < VAR_0->multicast_startup_query_count)
  VAR_1->startup_sent++;

 FUNC_0(VAR_2->port, ((void*)0));
 FUNC_1(VAR_0, ((void*)0), VAR_1);
 FUNC_3(&VAR_0->multicast_lock);
}
