
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_head {struct rcu_head* next; } ;
struct rcu_cblist {struct rcu_head* head; struct rcu_head** tail; int len; } ;



struct rcu_head *FUNC_0(struct rcu_cblist *VAR_0)
{
 struct rcu_head *VAR_1;

 VAR_1 = VAR_0->head;
 if (!VAR_1)
  return ((void*)0);
 VAR_0->len--;
 VAR_0->head = VAR_1->next;
 if (!VAR_0->head)
  VAR_0->tail = &VAR_0->head;
 return VAR_1;
}
