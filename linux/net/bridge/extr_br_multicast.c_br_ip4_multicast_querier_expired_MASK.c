
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct net_bridge {int ip4_own_query; } ;
struct TYPE_2__ {int timer; } ;


 struct net_bridge* VAR_0 ;
 int FUNC_0 (struct net_bridge*,int *) ;
 struct net_bridge* FUNC_1 (int ,struct timer_list*,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct net_bridge *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_1.timer);

 FUNC_0(VAR_3, &VAR_3->ip4_own_query);
}
