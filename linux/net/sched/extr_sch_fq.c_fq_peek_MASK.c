
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct fq_flow {struct sk_buff* head; int t_root; } ;
struct TYPE_2__ {scalar_t__ time_to_send; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct fq_flow *VAR_0)
{
 struct sk_buff *VAR_1 = FUNC_1(&VAR_0->t_root);
 struct sk_buff *VAR_2 = VAR_0->head;

 if (!VAR_1)
  return VAR_2;

 if (!VAR_2)
  return VAR_1;

 if (FUNC_0(VAR_1)->time_to_send < FUNC_0(VAR_2)->time_to_send)
  return VAR_1;
 return VAR_2;
}
