
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; int rbnode; struct sk_buff* next; } ;
struct fq_flow {int t_root; struct sk_buff* head; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct Qdisc *VAR_0, struct fq_flow *VAR_1,
     struct sk_buff *VAR_2)
{
 if (VAR_2 == VAR_1->head) {
  VAR_1->head = VAR_2->next;
 } else {
  FUNC_1(&VAR_2->rbnode, &VAR_1->t_root);
  VAR_2->dev = FUNC_0(VAR_0);
 }
}
