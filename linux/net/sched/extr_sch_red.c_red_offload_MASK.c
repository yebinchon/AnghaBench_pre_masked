
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int min; int max; int * qstats; int is_harddrop; int is_ecn; int limit; int probability; } ;
struct tc_red_qopt_offload {int command; TYPE_2__ set; int parent; int handle; } ;
struct TYPE_4__ {int qth_min; int Wlog; int qth_max; int max_P; } ;
struct red_sched_data {int limit; TYPE_1__ parms; } ;
struct net_device {TYPE_3__* netdev_ops; } ;
struct Qdisc {int qstats; int parent; int handle; } ;
struct TYPE_6__ {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_red_qopt_offload*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (struct Qdisc*) ;
 struct red_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct red_sched_data*) ;
 int FUNC_3 (struct red_sched_data*) ;
 int FUNC_4 (struct net_device*,int ,struct tc_red_qopt_offload*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_4, bool VAR_5)
{
 struct red_sched_data *VAR_6 = FUNC_1(VAR_4);
 struct net_device *VAR_7 = FUNC_0(VAR_4);
 struct tc_red_qopt_offload VAR_8 = {
  .handle = VAR_4->handle,
  .parent = VAR_4->parent,
 };

 if (!FUNC_5(VAR_7) || !VAR_7->netdev_ops->ndo_setup_tc)
  return -VAR_0;

 if (VAR_5) {
  VAR_8.command = VAR_2;
  VAR_8.set.min = VAR_6->parms.qth_min >> VAR_6->parms.Wlog;
  VAR_8.set.max = VAR_6->parms.qth_max >> VAR_6->parms.Wlog;
  VAR_8.set.probability = VAR_6->parms.max_P;
  VAR_8.set.limit = VAR_6->limit;
  VAR_8.set.is_ecn = FUNC_2(VAR_6);
  VAR_8.set.is_harddrop = FUNC_3(VAR_6);
  VAR_8.set.qstats = &VAR_4->qstats;
 } else {
  VAR_8.command = VAR_1;
 }

 return VAR_7->netdev_ops->ndo_setup_tc(VAR_7, VAR_3, &VAR_8);
}
