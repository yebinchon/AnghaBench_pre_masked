
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {int topology_change_timer; int tcn_timer; int hello_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;

void FUNC_1(struct net_bridge *VAR_3)
{
 FUNC_0(&VAR_3->hello_timer, VAR_0, 0);
 FUNC_0(&VAR_3->tcn_timer, VAR_1, 0);
 FUNC_0(&VAR_3->topology_change_timer,
      VAR_2, 0);
}
