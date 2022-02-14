
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int dp_cnt; int * qstats; TYPE_2__* tab; int dp_def; int wred_on; int grio_on; } ;
struct tc_gred_qopt_offload {int command; TYPE_3__ set; int parent; int handle; } ;
struct net_device {TYPE_4__* netdev_ops; } ;
struct TYPE_5__ {int qth_min; int Wlog; int qth_max; int max_P; } ;
struct gred_sched_data {int backlog; TYPE_1__ parms; int prio; int limit; } ;
struct gred_sched {unsigned int DPs; struct gred_sched_data** tab; int def; } ;
struct Qdisc {int qstats; int parent; int handle; } ;
typedef enum tc_gred_command { ____Placeholder_tc_gred_command } tc_gred_command ;
struct TYPE_8__ {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_gred_qopt_offload*) ;} ;
struct TYPE_6__ {int present; int min; int max; int * backlog; int probability; int is_harddrop; int is_ecn; int prio; int limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gred_sched*) ;
 int FUNC_1 (struct gred_sched_data*) ;
 int FUNC_2 (struct gred_sched_data*) ;
 int FUNC_3 (struct gred_sched*) ;
 struct net_device* FUNC_4 (struct Qdisc*) ;
 struct gred_sched* FUNC_5 (struct Qdisc*) ;
 int FUNC_6 (struct net_device*,int ,struct tc_gred_qopt_offload*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct Qdisc *VAR_2, enum tc_gred_command VAR_3)
{
 struct gred_sched *VAR_4 = FUNC_5(VAR_2);
 struct net_device *VAR_5 = FUNC_4(VAR_2);
 struct tc_gred_qopt_offload VAR_6 = {
  .command = VAR_3,
  .handle = VAR_2->handle,
  .parent = VAR_2->parent,
 };

 if (!FUNC_7(VAR_5) || !VAR_5->netdev_ops->ndo_setup_tc)
  return;

 if (VAR_3 == VAR_0) {
  unsigned int VAR_7;

  VAR_6.set.grio_on = FUNC_0(VAR_4);
  VAR_6.set.wred_on = FUNC_3(VAR_4);
  VAR_6.set.dp_cnt = VAR_4->DPs;
  VAR_6.set.dp_def = VAR_4->def;

  for (VAR_7 = 0; VAR_7 < VAR_4->DPs; VAR_7++) {
   struct gred_sched_data *VAR_8 = VAR_4->tab[VAR_7];

   if (!VAR_8)
    continue;
   VAR_6.set.tab[VAR_7].present = 1;
   VAR_6.set.tab[VAR_7].limit = VAR_8->limit;
   VAR_6.set.tab[VAR_7].prio = VAR_8->prio;
   VAR_6.set.tab[VAR_7].min = VAR_8->parms.qth_min >> VAR_8->parms.Wlog;
   VAR_6.set.tab[VAR_7].max = VAR_8->parms.qth_max >> VAR_8->parms.Wlog;
   VAR_6.set.tab[VAR_7].is_ecn = FUNC_1(VAR_8);
   VAR_6.set.tab[VAR_7].is_harddrop = FUNC_2(VAR_8);
   VAR_6.set.tab[VAR_7].probability = VAR_8->parms.max_P;
   VAR_6.set.tab[VAR_7].backlog = &VAR_8->backlog;
  }
  VAR_6.set.qstats = &VAR_2->qstats;
 }

 VAR_5->netdev_ops->ndo_setup_tc(VAR_5, VAR_1, &VAR_6);
}
