
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int perturb_period; int flows; int divisor; int limit; int quantum; } ;
struct tc_sfq_qopt_v1 {int qth_min; int qth_max; int Wlog; int flags; int stats; int max_P; int Scell_log; int Plog; int headdrop; int depth; TYPE_1__ v0; } ;
struct sk_buff {int len; } ;
struct sfq_sched_data {int perturb_period; int flags; int stats; int headdrop; int maxdepth; int maxflows; int divisor; int limit; int quantum; struct red_parms* red_parms; } ;
struct red_parms {int qth_min; int Wlog; int qth_max; int max_P; int Scell_log; int Plog; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct tc_sfq_qopt_v1*,int ,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tc_sfq_qopt_v1*) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 struct sfq_sched_data* FUNC_4 (struct Qdisc*) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_2, struct sk_buff *VAR_3)
{
 struct sfq_sched_data *VAR_4 = FUNC_4(VAR_2);
 unsigned char *VAR_5 = FUNC_5(VAR_3);
 struct tc_sfq_qopt_v1 VAR_6;
 struct red_parms *VAR_7 = VAR_4->red_parms;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.v0.quantum = VAR_4->quantum;
 VAR_6.v0.perturb_period = VAR_4->perturb_period / VAR_0;
 VAR_6.v0.limit = VAR_4->limit;
 VAR_6.v0.divisor = VAR_4->divisor;
 VAR_6.v0.flows = VAR_4->maxflows;
 VAR_6.depth = VAR_4->maxdepth;
 VAR_6.headdrop = VAR_4->headdrop;

 if (VAR_7) {
  VAR_6.qth_min = VAR_7->qth_min >> VAR_7->Wlog;
  VAR_6.qth_max = VAR_7->qth_max >> VAR_7->Wlog;
  VAR_6.Wlog = VAR_7->Wlog;
  VAR_6.Plog = VAR_7->Plog;
  VAR_6.Scell_log = VAR_7->Scell_log;
  VAR_6.max_P = VAR_7->max_P;
 }
 FUNC_0(&VAR_6.stats, &VAR_4->stats, sizeof(VAR_6.stats));
 VAR_6.flags = VAR_4->flags;

 if (FUNC_2(VAR_3, VAR_1, sizeof(VAR_6), &VAR_6))
  goto nla_put_failure;

 return VAR_3->len;

nla_put_failure:
 FUNC_3(VAR_3, VAR_5);
 return -1;
}
