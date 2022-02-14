
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_head {struct rcu_head* next; } ;
struct rcu_cblist {scalar_t__ len; struct rcu_head** tail; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

void FUNC_1(struct rcu_cblist *VAR_0, struct rcu_head *VAR_1)
{
 *VAR_0->tail = VAR_1;
 VAR_0->tail = &VAR_1->next;
 FUNC_0(VAR_0->len, VAR_0->len + 1);
}
