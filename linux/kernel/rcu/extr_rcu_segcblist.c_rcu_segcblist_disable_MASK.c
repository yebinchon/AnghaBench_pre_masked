
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {scalar_t__ enabled; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rcu_segcblist*) ;
 int FUNC_2 (struct rcu_segcblist*) ;
 int FUNC_3 (struct rcu_segcblist*) ;

void FUNC_4(struct rcu_segcblist *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));
 FUNC_0(FUNC_2(VAR_0));
 FUNC_0(FUNC_3(VAR_0));
 VAR_0->enabled = 0;
}
