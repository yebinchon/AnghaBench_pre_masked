
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_sync {int gp_state; int gp_count; } ;


 int VAR_0 ;

void FUNC_0(struct rcu_sync *VAR_1)
{
 VAR_1->gp_count++;
 VAR_1->gp_state = VAR_0;
}
