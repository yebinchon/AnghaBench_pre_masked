
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct red_parms {scalar_t__ qth_min; scalar_t__ qth_max; } ;
struct TYPE_9__ {int pdrop; int prob_mark; int prob_drop; int forced_mark; int forced_drop; int matched; } ;
struct TYPE_10__ {scalar_t__ qavg; int qcount; void* qR; } ;
struct choke_sched_data {scalar_t__ limit; size_t tail; int tab_mask; TYPE_2__ stats; struct sk_buff** tab; TYPE_3__ vars; struct red_parms parms; } ;
struct TYPE_8__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_1__ q; } ;
struct TYPE_11__ {scalar_t__ keys_valid; } ;


 int FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct Qdisc*,unsigned int,struct sk_buff**) ;
 scalar_t__ FUNC_2 (struct choke_sched_data*,struct sk_buff*,unsigned int*) ;
 TYPE_7__* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct choke_sched_data* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct Qdisc*,struct sk_buff*) ;
 int FUNC_7 (struct Qdisc*) ;
 scalar_t__ FUNC_8 (struct red_parms const*,TYPE_3__*,scalar_t__) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (TYPE_3__*) ;
 scalar_t__ FUNC_11 (struct red_parms const*,TYPE_3__*,scalar_t__) ;
 void* FUNC_12 (struct red_parms const*) ;
 int FUNC_13 (struct choke_sched_data*) ;
 scalar_t__ FUNC_14 (struct choke_sched_data*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_2, struct Qdisc *VAR_3,
    struct sk_buff **VAR_4)
{
 struct choke_sched_data *VAR_5 = FUNC_5(VAR_3);
 const struct red_parms *VAR_6 = &VAR_5->parms;

 FUNC_3(VAR_2)->keys_valid = 0;

 VAR_5->vars.qavg = FUNC_8(VAR_6, &VAR_5->vars, VAR_3->q.qlen);
 if (FUNC_10(&VAR_5->vars))
  FUNC_9(&VAR_5->vars);


 if (VAR_5->vars.qavg <= VAR_6->qth_min)
  VAR_5->vars.qcount = -1;
 else {
  unsigned int VAR_7;


  if (FUNC_2(VAR_5, VAR_2, &VAR_7)) {
   VAR_5->stats.matched++;
   FUNC_1(VAR_3, VAR_7, VAR_4);
   goto congestion_drop;
  }


  if (VAR_5->vars.qavg > VAR_6->qth_max) {
   VAR_5->vars.qcount = -1;

   FUNC_7(VAR_3);
   if (FUNC_14(VAR_5) || !FUNC_13(VAR_5) ||
       !FUNC_0(VAR_2)) {
    VAR_5->stats.forced_drop++;
    goto congestion_drop;
   }

   VAR_5->stats.forced_mark++;
  } else if (++VAR_5->vars.qcount) {
   if (FUNC_11(VAR_6, &VAR_5->vars, VAR_5->vars.qavg)) {
    VAR_5->vars.qcount = 0;
    VAR_5->vars.qR = FUNC_12(VAR_6);

    FUNC_7(VAR_3);
    if (!FUNC_13(VAR_5) || !FUNC_0(VAR_2)) {
     VAR_5->stats.prob_drop++;
     goto congestion_drop;
    }

    VAR_5->stats.prob_mark++;
   }
  } else
   VAR_5->vars.qR = FUNC_12(VAR_6);
 }


 if (VAR_3->q.qlen < VAR_5->limit) {
  VAR_5->tab[VAR_5->tail] = VAR_2;
  VAR_5->tail = (VAR_5->tail + 1) & VAR_5->tab_mask;
  ++VAR_3->q.qlen;
  FUNC_6(VAR_3, VAR_2);
  return VAR_1;
 }

 VAR_5->stats.pdrop++;
 return FUNC_4(VAR_2, VAR_3, VAR_4);

congestion_drop:
 FUNC_4(VAR_2, VAR_3, VAR_4);
 return VAR_0;
}
