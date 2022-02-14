
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_discoverer {int num_nodes; int timer_intv; int lock; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct tipc_discoverer *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_1(&VAR_4->lock);
 VAR_4->num_nodes--;
 VAR_6 = VAR_4->num_nodes;
 VAR_5 = VAR_4->timer_intv;
 if (!VAR_6 && (VAR_5 == VAR_1 || VAR_5 > VAR_0)) {
  VAR_4->timer_intv = VAR_2;
  FUNC_0(&VAR_4->timer, VAR_3 + VAR_4->timer_intv);
 }
 FUNC_2(&VAR_4->lock);
}
