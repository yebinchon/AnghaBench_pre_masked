
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int rbnode; struct sk_buff* next; } ;
struct netem_sched_data {int t_root; int * t_tail; struct sk_buff* t_head; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct netem_sched_data *VAR_0, struct sk_buff *VAR_1)
{
 if (VAR_1 == VAR_0->t_head) {
  VAR_0->t_head = VAR_1->next;
  if (!VAR_0->t_head)
   VAR_0->t_tail = ((void*)0);
 } else {
  FUNC_0(&VAR_1->rbnode, &VAR_0->t_root);
 }
}
