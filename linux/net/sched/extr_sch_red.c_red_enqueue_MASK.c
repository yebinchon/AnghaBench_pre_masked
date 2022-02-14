
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_10__ {int pdrop; int forced_mark; int forced_drop; int prob_mark; int prob_drop; } ;
struct TYPE_11__ {int qavg; } ;
struct red_sched_data {TYPE_3__ stats; TYPE_4__ vars; int parms; struct Qdisc* qdisc; } ;
struct TYPE_9__ {int qlen; } ;
struct TYPE_8__ {int backlog; } ;
struct Qdisc {TYPE_2__ q; TYPE_1__ qstats; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;



 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct red_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_7 (struct Qdisc*) ;
 int FUNC_8 (struct Qdisc*) ;
 int FUNC_9 (int *,TYPE_4__*,int ) ;
 int FUNC_10 (int *,TYPE_4__*,int ) ;
 int FUNC_11 (TYPE_4__*) ;
 scalar_t__ FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct red_sched_data*) ;
 int FUNC_14 (struct red_sched_data*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_2, struct Qdisc *VAR_3,
         struct sk_buff **VAR_4)
{
 struct red_sched_data *VAR_5 = FUNC_5(VAR_3);
 struct Qdisc *VAR_6 = VAR_5->qdisc;
 int VAR_7;

 VAR_5->vars.qavg = FUNC_10(&VAR_5->parms,
         &VAR_5->vars,
         VAR_6->qstats.backlog);

 if (FUNC_12(&VAR_5->vars))
  FUNC_11(&VAR_5->vars);

 switch (FUNC_9(&VAR_5->parms, &VAR_5->vars, VAR_5->vars.qavg)) {
 case 130:
  break;

 case 128:
  FUNC_8(VAR_3);
  if (!FUNC_13(VAR_5) || !FUNC_0(VAR_2)) {
   VAR_5->stats.prob_drop++;
   goto congestion_drop;
  }

  VAR_5->stats.prob_mark++;
  break;

 case 129:
  FUNC_8(VAR_3);
  if (FUNC_14(VAR_5) || !FUNC_13(VAR_5) ||
      !FUNC_0(VAR_2)) {
   VAR_5->stats.forced_drop++;
   goto congestion_drop;
  }

  VAR_5->stats.forced_mark++;
  break;
 }

 VAR_7 = FUNC_4(VAR_2, VAR_6, VAR_4);
 if (FUNC_1(VAR_7 == VAR_1)) {
  FUNC_6(VAR_3, VAR_2);
  VAR_3->q.qlen++;
 } else if (FUNC_2(VAR_7)) {
  VAR_5->stats.pdrop++;
  FUNC_7(VAR_3);
 }
 return VAR_7;

congestion_drop:
 FUNC_3(VAR_2, VAR_3, VAR_4);
 return VAR_0;
}
