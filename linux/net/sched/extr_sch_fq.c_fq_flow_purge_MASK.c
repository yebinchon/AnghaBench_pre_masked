
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int rbnode; } ;
struct rb_node {int dummy; } ;
struct fq_flow {scalar_t__ qlen; struct sk_buff* head; struct sk_buff* tail; int t_root; } ;


 int FUNC_0 (int *,int *) ;
 struct rb_node* FUNC_1 (int *) ;
 struct rb_node* FUNC_2 (struct rb_node*) ;
 struct sk_buff* FUNC_3 (struct rb_node*) ;
 int FUNC_4 (struct sk_buff*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct fq_flow *VAR_0)
{
 struct rb_node *VAR_1 = FUNC_1(&VAR_0->t_root);

 while (VAR_1) {
  struct sk_buff *VAR_2 = FUNC_3(VAR_1);

  VAR_1 = FUNC_2(VAR_1);
  FUNC_0(&VAR_2->rbnode, &VAR_0->t_root);
  FUNC_4(VAR_2, VAR_2);
 }
 FUNC_4(VAR_0->head, VAR_0->tail);
 VAR_0->head = ((void*)0);
 VAR_0->qlen = 0;
}
