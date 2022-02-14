
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_sfq_qopt_v1 {int depth; int headdrop; int flags; int max_P; int Scell_log; int Plog; int Wlog; int qth_max; scalar_t__ qth_min; } ;
struct tc_sfq_qopt {int divisor; int perturb_period; int flows; int limit; scalar_t__ quantum; } ;
struct sk_buff {int dummy; } ;
struct sfq_sched_data {int perturb_period; int maxflows; int divisor; int maxdepth; int limit; int perturbation; int perturb_timer; int headdrop; int flags; int red_parms; scalar_t__ quantum; int scaled_quantum; } ;
struct red_parms {int dummy; } ;
struct nlattr {scalar_t__ nla_len; } ;
struct TYPE_2__ {unsigned int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (struct red_parms*) ;
 struct red_parms* FUNC_5 (int,int ) ;
 void* FUNC_6 (int ,int,int) ;
 int FUNC_7 (int *,scalar_t__) ;
 scalar_t__ FUNC_8 (int) ;
 void* FUNC_9 (struct nlattr*) ;
 struct sfq_sched_data* FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*,unsigned int,unsigned int) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (int ,scalar_t__,int ,int ,int ,int ,int *,int ) ;
 int FUNC_14 (struct sk_buff*,struct sk_buff*) ;
 int FUNC_15 (struct Qdisc*) ;
 int FUNC_16 (struct Qdisc*) ;
 scalar_t__ FUNC_17 (struct Qdisc*,struct sk_buff**) ;
 int FUNC_18 (int ,struct red_parms*) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_19(struct Qdisc *VAR_8, struct nlattr *VAR_9)
{
 struct sfq_sched_data *VAR_10 = FUNC_10(VAR_8);
 struct tc_sfq_qopt *VAR_11 = FUNC_9(VAR_9);
 struct tc_sfq_qopt_v1 *VAR_12 = ((void*)0);
 unsigned int VAR_13, VAR_14 = 0;
 struct red_parms *VAR_15 = ((void*)0);
 struct sk_buff *VAR_16 = ((void*)0);
 struct sk_buff *VAR_17 = ((void*)0);

 if (VAR_9->nla_len < FUNC_8(sizeof(*VAR_11)))
  return -VAR_0;
 if (VAR_9->nla_len >= FUNC_8(sizeof(*VAR_12)))
  VAR_12 = FUNC_9(VAR_9);
 if (VAR_11->divisor &&
     (!FUNC_3(VAR_11->divisor) || VAR_11->divisor > 65536))
  return -VAR_0;
 if (VAR_12 && !FUNC_12(VAR_12->qth_min, VAR_12->qth_max,
     VAR_12->Wlog))
  return -VAR_0;
 if (VAR_12 && VAR_12->qth_min) {
  VAR_15 = FUNC_5(sizeof(*VAR_15), VAR_2);
  if (!VAR_15)
   return -VAR_1;
 }
 FUNC_15(VAR_8);
 if (VAR_11->quantum) {
  VAR_10->quantum = VAR_11->quantum;
  VAR_10->scaled_quantum = FUNC_0(VAR_10->quantum);
 }
 VAR_10->perturb_period = VAR_11->perturb_period * VAR_3;
 if (VAR_11->flows)
  VAR_10->maxflows = FUNC_6(VAR_7, VAR_11->flows, VAR_5);
 if (VAR_11->divisor) {
  VAR_10->divisor = VAR_11->divisor;
  VAR_10->maxflows = FUNC_6(VAR_7, VAR_10->maxflows, VAR_10->divisor);
 }
 if (VAR_12) {
  if (VAR_12->depth)
   VAR_10->maxdepth = FUNC_6(VAR_7, VAR_12->depth, VAR_4);
  if (VAR_15) {
   FUNC_18(VAR_10->red_parms, VAR_15);
   FUNC_13(VAR_10->red_parms,
          VAR_12->qth_min, VAR_12->qth_max,
          VAR_12->Wlog,
          VAR_12->Plog, VAR_12->Scell_log,
          ((void*)0),
          VAR_12->max_P);
  }
  VAR_10->flags = VAR_12->flags;
  VAR_10->headdrop = VAR_12->headdrop;
 }
 if (VAR_11->limit) {
  VAR_10->limit = FUNC_6(VAR_7, VAR_11->limit, VAR_10->maxdepth * VAR_10->maxflows);
  VAR_10->maxflows = FUNC_6(VAR_7, VAR_10->maxflows, VAR_10->limit);
 }

 VAR_13 = VAR_8->q.qlen;
 while (VAR_8->q.qlen > VAR_10->limit) {
  VAR_14 += FUNC_17(VAR_8, &VAR_16);
  if (!VAR_17)
   VAR_17 = VAR_16;
 }

 FUNC_14(VAR_16, VAR_17);
 FUNC_11(VAR_8, VAR_13 - VAR_8->q.qlen, VAR_14);

 FUNC_1(&VAR_10->perturb_timer);
 if (VAR_10->perturb_period) {
  FUNC_7(&VAR_10->perturb_timer, VAR_6 + VAR_10->perturb_period);
  FUNC_2(&VAR_10->perturbation, sizeof(VAR_10->perturbation));
 }
 FUNC_16(VAR_8);
 FUNC_4(VAR_15);
 return 0;
}
