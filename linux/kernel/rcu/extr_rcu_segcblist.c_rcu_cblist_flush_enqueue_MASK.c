
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_head {struct rcu_head* next; } ;
struct rcu_cblist {scalar_t__ len_lazy; int len; struct rcu_head** tail; struct rcu_head* head; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct rcu_cblist*) ;

void FUNC_2(struct rcu_cblist *VAR_0,
         struct rcu_cblist *VAR_1,
         struct rcu_head *VAR_2)
{
 VAR_0->head = VAR_1->head;
 if (VAR_0->head)
  VAR_0->tail = VAR_1->tail;
 else
  VAR_0->tail = &VAR_0->head;
 VAR_0->len = VAR_1->len;
 VAR_0->len_lazy = VAR_1->len_lazy;
 if (!VAR_2) {
  FUNC_1(VAR_1);
 } else {
  VAR_2->next = ((void*)0);
  VAR_1->head = VAR_2;
  VAR_1->tail = &VAR_2->next;
  FUNC_0(VAR_1->len, 1);
  VAR_1->len_lazy = 0;
 }
}
