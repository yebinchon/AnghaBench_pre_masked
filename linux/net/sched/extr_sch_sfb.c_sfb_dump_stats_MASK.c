
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_sfb_xstats {int avgprob; int maxprob; int maxqlen; int marked; int childdrop; int queuedrop; int bucketdrop; int penaltydrop; int earlydrop; } ;
struct TYPE_2__ {int marked; int childdrop; int queuedrop; int bucketdrop; int penaltydrop; int earlydrop; } ;
struct sfb_sched_data {TYPE_1__ stats; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int st ;


 int FUNC_0 (struct gnet_dump*,struct tc_sfb_xstats*,int) ;
 struct sfb_sched_data* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int *,int *,struct sfb_sched_data*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_0, struct gnet_dump *VAR_1)
{
 struct sfb_sched_data *VAR_2 = FUNC_1(VAR_0);
 struct tc_sfb_xstats VAR_3 = {
  .earlydrop = VAR_2->stats.earlydrop,
  .penaltydrop = VAR_2->stats.penaltydrop,
  .bucketdrop = VAR_2->stats.bucketdrop,
  .queuedrop = VAR_2->stats.queuedrop,
  .childdrop = VAR_2->stats.childdrop,
  .marked = VAR_2->stats.marked,
 };

 VAR_3.maxqlen = FUNC_2(&VAR_3.maxprob, &VAR_3.avgprob, VAR_2);

 return FUNC_0(VAR_1, &VAR_3, sizeof(VAR_3));
}
