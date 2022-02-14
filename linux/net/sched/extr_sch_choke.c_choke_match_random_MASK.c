
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct choke_sched_data {scalar_t__ head; scalar_t__ tail; } ;


 int FUNC_0 (struct sk_buff*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct choke_sched_data const*,unsigned int*) ;

__attribute__((used)) static bool FUNC_2(const struct choke_sched_data *VAR_0,
          struct sk_buff *VAR_1,
          unsigned int *VAR_2)
{
 struct sk_buff *VAR_3;

 if (VAR_0->head == VAR_0->tail)
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 return FUNC_0(VAR_3, VAR_1);
}
