
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct gred_sched_data {int vars; scalar_t__ backlog; } ;
struct gred_sched {size_t DPs; int wred_set; struct gred_sched_data** tab; } ;
struct TYPE_2__ {int backlog; } ;
struct Qdisc {TYPE_1__ qstats; } ;


 scalar_t__ FUNC_0 (struct gred_sched*) ;
 int FUNC_1 (char*,size_t) ;
 struct sk_buff* FUNC_2 (struct Qdisc*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 struct gred_sched* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct Qdisc *VAR_0)
{
 struct sk_buff *VAR_1;
 struct gred_sched *VAR_2 = FUNC_4(VAR_0);

 VAR_1 = FUNC_2(VAR_0);

 if (VAR_1) {
  struct gred_sched_data *VAR_3;
  u16 VAR_4 = FUNC_6(VAR_1);

  if (VAR_4 >= VAR_2->DPs || (VAR_3 = VAR_2->tab[VAR_4]) == ((void*)0)) {
   FUNC_1("GRED: Unable to relocate VQ 0x%x after dequeue, screwing up backlog\n",
          FUNC_6(VAR_1));
  } else {
   VAR_3->backlog -= FUNC_3(VAR_1);

   if (FUNC_0(VAR_2)) {
    if (!VAR_0->qstats.backlog)
     FUNC_5(&VAR_2->wred_set);
   } else {
    if (!VAR_3->backlog)
     FUNC_5(&VAR_3->vars);
   }
  }

  return VAR_1;
 }

 return ((void*)0);
}
