
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rb_node {int dummy; } ;
struct etf_sched_data {int head; } ;
struct Qdisc {int dummy; } ;


 struct etf_sched_data* FUNC_0 (struct Qdisc*) ;
 struct rb_node* FUNC_1 (int *) ;
 struct sk_buff* FUNC_2 (struct rb_node*) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct Qdisc *VAR_0)
{
 struct etf_sched_data *VAR_1 = FUNC_0(VAR_0);
 struct rb_node *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->head);
 if (!VAR_2)
  return ((void*)0);

 return FUNC_2(VAR_2);
}
