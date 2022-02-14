
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_segcblist {scalar_t__ len_lazy; } ;
struct rcu_cblist {int len; int len_lazy; } ;


 int FUNC_0 (struct rcu_segcblist*,int ) ;

void FUNC_1(struct rcu_segcblist *VAR_0,
            struct rcu_cblist *VAR_1)
{
 VAR_1->len_lazy += VAR_0->len_lazy;
 VAR_0->len_lazy = 0;
 VAR_1->len = FUNC_0(VAR_0, 0);
}
