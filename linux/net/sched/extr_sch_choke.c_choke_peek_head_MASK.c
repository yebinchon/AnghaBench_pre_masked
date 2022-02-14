
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct choke_sched_data {size_t head; size_t tail; struct sk_buff** tab; } ;
struct Qdisc {int dummy; } ;


 struct choke_sched_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct sk_buff *FUNC_1(struct Qdisc *VAR_0)
{
 struct choke_sched_data *VAR_1 = FUNC_0(VAR_0);

 return (VAR_1->head != VAR_1->tail) ? VAR_1->tab[VAR_1->head] : ((void*)0);
}
