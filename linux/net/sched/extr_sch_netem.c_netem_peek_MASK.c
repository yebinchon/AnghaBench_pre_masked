
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sk_buff {int dummy; } ;
struct netem_sched_data {struct sk_buff* t_head; int t_root; } ;
struct TYPE_2__ {scalar_t__ time_to_send; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct netem_sched_data *VAR_0)
{
 struct sk_buff *VAR_1 = FUNC_1(&VAR_0->t_root);
 u64 VAR_2, VAR_3;

 if (!VAR_1)
  return VAR_0->t_head;
 if (!VAR_0->t_head)
  return VAR_1;

 VAR_2 = FUNC_0(VAR_1)->time_to_send;
 VAR_3 = FUNC_0(VAR_0->t_head)->time_to_send;
 if (VAR_2 < VAR_3)
  return VAR_1;
 return VAR_0->t_head;
}
