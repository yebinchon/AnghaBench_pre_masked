
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int dummy; } ;
struct bridge_mcast_own_query {int timer; scalar_t__ startup_sent; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct net_bridge *VAR_2,
    struct bridge_mcast_own_query *VAR_3)
{
 VAR_3->startup_sent = 0;

 if (!FUNC_0(VAR_2, VAR_0))
  return;

 FUNC_1(&VAR_3->timer, VAR_1);
}
