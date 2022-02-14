
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ multicast_querier_interval; } ;
struct bridge_mcast_other_query {int timer; scalar_t__ delay_time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct net_bridge *VAR_1,
    struct bridge_mcast_other_query *VAR_2,
    unsigned long VAR_3)
{
 if (!FUNC_1(&VAR_2->timer))
  VAR_2->delay_time = VAR_0 + VAR_3;

 FUNC_0(&VAR_2->timer, VAR_0 + VAR_1->multicast_querier_interval);
}
