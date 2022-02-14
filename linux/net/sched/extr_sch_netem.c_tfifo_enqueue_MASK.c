
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int rbnode; struct sk_buff* next; } ;
struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;
struct TYPE_5__ {struct rb_node* rb_node; } ;
struct netem_sched_data {TYPE_2__ t_root; struct sk_buff* t_tail; struct sk_buff* t_head; } ;
struct TYPE_4__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;
struct TYPE_6__ {scalar_t__ time_to_send; } ;


 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 struct netem_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,struct rb_node*,struct rb_node**) ;
 struct sk_buff* FUNC_4 (struct rb_node*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_0, struct Qdisc *VAR_1)
{
 struct netem_sched_data *VAR_2 = FUNC_1(VAR_1);
 u64 VAR_3 = FUNC_0(VAR_0)->time_to_send;

 if (!VAR_2->t_tail || VAR_3 >= FUNC_0(VAR_2->t_tail)->time_to_send) {
  if (VAR_2->t_tail)
   VAR_2->t_tail->next = VAR_0;
  else
   VAR_2->t_head = VAR_0;
  VAR_2->t_tail = VAR_0;
 } else {
  struct rb_node **VAR_4 = &VAR_2->t_root.rb_node, *VAR_5 = ((void*)0);

  while (*VAR_4) {
   struct sk_buff *VAR_6;

   VAR_5 = *VAR_4;
   VAR_6 = FUNC_4(VAR_5);
   if (VAR_3 >= FUNC_0(VAR_6)->time_to_send)
    VAR_4 = &VAR_5->rb_right;
   else
    VAR_4 = &VAR_5->rb_left;
  }
  FUNC_3(&VAR_0->rbnode, VAR_5, VAR_4);
  FUNC_2(&VAR_0->rbnode, &VAR_2->t_root);
 }
 VAR_1->q.qlen++;
}
