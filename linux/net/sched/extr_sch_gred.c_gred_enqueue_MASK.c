
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct sk_buff {size_t tc_index; } ;
struct TYPE_8__ {int pdrop; int forced_mark; int forced_drop; int prob_mark; int prob_drop; } ;
struct TYPE_9__ {unsigned long qavg; } ;
struct gred_sched_data {scalar_t__ prio; scalar_t__ limit; TYPE_2__ stats; int backlog; TYPE_3__ vars; int parms; int bytesin; int packetsin; } ;
struct gred_sched {size_t DPs; size_t def; struct gred_sched_data** tab; } ;
struct TYPE_7__ {scalar_t__ backlog; } ;
struct Qdisc {scalar_t__ limit; TYPE_1__ qstats; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;



 scalar_t__ FUNC_1 (struct gred_sched*,struct gred_sched_data*,struct Qdisc*) ;
 int FUNC_2 (struct gred_sched*,struct gred_sched_data*) ;
 scalar_t__ FUNC_3 (struct gred_sched*) ;
 int FUNC_4 (struct gred_sched*,struct gred_sched_data*) ;
 int FUNC_5 (struct gred_sched_data*) ;
 int FUNC_6 (struct gred_sched_data*) ;
 scalar_t__ FUNC_7 (struct gred_sched*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_10 (struct sk_buff*,struct Qdisc*) ;
 scalar_t__ FUNC_11 (struct sk_buff*) ;
 struct gred_sched* FUNC_12 (struct Qdisc*) ;
 int FUNC_13 (struct Qdisc*) ;
 int FUNC_14 (int *,TYPE_3__*,unsigned long) ;
 unsigned long FUNC_15 (int *,TYPE_3__*,scalar_t__) ;
 int FUNC_16 (TYPE_3__*) ;
 scalar_t__ FUNC_17 (TYPE_3__*) ;
 size_t FUNC_18 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_2, struct Qdisc *VAR_3,
   struct sk_buff **VAR_4)
{
 struct gred_sched_data *VAR_5 = ((void*)0);
 struct gred_sched *VAR_6 = FUNC_12(VAR_3);
 unsigned long VAR_7 = 0;
 u16 VAR_8 = FUNC_18(VAR_2);

 if (VAR_8 >= VAR_6->DPs || (VAR_5 = VAR_6->tab[VAR_8]) == ((void*)0)) {
  VAR_8 = VAR_6->def;

  VAR_5 = VAR_6->tab[VAR_8];
  if (!VAR_5) {




   if (FUNC_8(VAR_3->qstats.backlog + FUNC_11(VAR_2) <=
     VAR_3->limit))
    return FUNC_10(VAR_2, VAR_3);
   else
    goto drop;
  }



  VAR_2->tc_index = (VAR_2->tc_index & ~VAR_0) | VAR_8;
 }


 if (!FUNC_7(VAR_6) && FUNC_3(VAR_6)) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_6->DPs; VAR_9++) {
   if (VAR_6->tab[VAR_9] && VAR_6->tab[VAR_9]->prio < VAR_5->prio &&
       !FUNC_17(&VAR_6->tab[VAR_9]->vars))
    VAR_7 += VAR_6->tab[VAR_9]->vars.qavg;
  }

 }

 VAR_5->packetsin++;
 VAR_5->bytesin += FUNC_11(VAR_2);

 if (FUNC_7(VAR_6))
  FUNC_2(VAR_6, VAR_5);

 VAR_5->vars.qavg = FUNC_15(&VAR_5->parms,
         &VAR_5->vars,
         FUNC_1(VAR_6, VAR_5, VAR_3));

 if (FUNC_17(&VAR_5->vars))
  FUNC_16(&VAR_5->vars);

 if (FUNC_7(VAR_6))
  FUNC_4(VAR_6, VAR_5);

 switch (FUNC_14(&VAR_5->parms, &VAR_5->vars, VAR_5->vars.qavg + VAR_7)) {
 case 130:
  break;

 case 128:
  FUNC_13(VAR_3);
  if (!FUNC_5(VAR_5) || !FUNC_0(VAR_2)) {
   VAR_5->stats.prob_drop++;
   goto congestion_drop;
  }

  VAR_5->stats.prob_mark++;
  break;

 case 129:
  FUNC_13(VAR_3);
  if (FUNC_6(VAR_5) || !FUNC_5(VAR_5) ||
      !FUNC_0(VAR_2)) {
   VAR_5->stats.forced_drop++;
   goto congestion_drop;
  }
  VAR_5->stats.forced_mark++;
  break;
 }

 if (FUNC_1(VAR_6, VAR_5, VAR_3) + FUNC_11(VAR_2) <= VAR_5->limit) {
  VAR_5->backlog += FUNC_11(VAR_2);
  return FUNC_10(VAR_2, VAR_3);
 }

 VAR_5->stats.pdrop++;
drop:
 return FUNC_9(VAR_2, VAR_3, VAR_4);

congestion_drop:
 FUNC_9(VAR_2, VAR_3, VAR_4);
 return VAR_1;
}
