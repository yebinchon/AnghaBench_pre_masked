
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_cblist {scalar_t__ len_lazy; scalar_t__ len; int * head; int ** tail; } ;



void FUNC_0(struct rcu_cblist *VAR_0)
{
 VAR_0->head = ((void*)0);
 VAR_0->tail = &VAR_0->head;
 VAR_0->len = 0;
 VAR_0->len_lazy = 0;
}
