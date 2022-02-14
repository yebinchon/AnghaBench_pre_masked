
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_sync {int gp_wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct rcu_sync*,int ,int) ;

void FUNC_2(struct rcu_sync *VAR_0)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 FUNC_0(&VAR_0->gp_wait);
}
