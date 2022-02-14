
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int rbnode; } ;
struct rb_node {int dummy; } ;
struct etf_sched_data {int head; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 struct etf_sched_data* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int *,int *) ;
 struct rb_node* FUNC_2 (int *) ;
 struct rb_node* FUNC_3 (struct rb_node*) ;
 struct sk_buff* FUNC_4 (struct rb_node*) ;
 int FUNC_5 (struct sk_buff*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct Qdisc *VAR_0)
{
 struct etf_sched_data *VAR_1 = FUNC_0(VAR_0);
 struct rb_node *VAR_2 = FUNC_2(&VAR_1->head);

 while (VAR_2) {
  struct sk_buff *VAR_3 = FUNC_4(VAR_2);

  VAR_2 = FUNC_3(VAR_2);

  FUNC_1(&VAR_3->rbnode, &VAR_1->head);
  FUNC_5(VAR_3, VAR_3);
  VAR_0->q.qlen--;
 }
}
