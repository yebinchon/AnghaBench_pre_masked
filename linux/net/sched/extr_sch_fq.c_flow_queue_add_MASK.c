
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int rbnode; struct sk_buff* next; scalar_t__ tstamp; } ;
struct rb_node {struct rb_node* rb_left; struct rb_node* rb_right; } ;
struct TYPE_3__ {struct rb_node* rb_node; } ;
struct fq_flow {TYPE_1__ t_root; struct sk_buff* tail; struct sk_buff* head; } ;
struct TYPE_4__ {scalar_t__ time_to_send; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,struct rb_node*,struct rb_node**) ;
 struct sk_buff* FUNC_4 (struct rb_node*) ;

__attribute__((used)) static void FUNC_5(struct fq_flow *VAR_0, struct sk_buff *VAR_1)
{
 struct rb_node **VAR_2, *VAR_3;
 struct sk_buff *VAR_4, *VAR_5;

 FUNC_0(VAR_1)->time_to_send = VAR_1->tstamp ?: FUNC_1();

 VAR_4 = VAR_0->head;
 if (!VAR_4 ||
     FUNC_0(VAR_1)->time_to_send >= FUNC_0(VAR_0->tail)->time_to_send) {
  if (!VAR_4)
   VAR_0->head = VAR_1;
  else
   VAR_0->tail->next = VAR_1;
  VAR_0->tail = VAR_1;
  VAR_1->next = ((void*)0);
  return;
 }

 VAR_2 = &VAR_0->t_root.rb_node;
 VAR_3 = ((void*)0);

 while (*VAR_2) {
  VAR_3 = *VAR_2;
  VAR_5 = FUNC_4(VAR_3);
  if (FUNC_0(VAR_1)->time_to_send >= FUNC_0(VAR_5)->time_to_send)
   VAR_2 = &VAR_3->rb_right;
  else
   VAR_2 = &VAR_3->rb_left;
 }
 FUNC_3(&VAR_1->rbnode, VAR_3, VAR_2);
 FUNC_2(&VAR_1->rbnode, &VAR_0->t_root);
}
