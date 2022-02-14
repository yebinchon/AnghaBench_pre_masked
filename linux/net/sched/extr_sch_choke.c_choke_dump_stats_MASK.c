
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_choke_xstats {int matched; int other; int pdrop; scalar_t__ marked; scalar_t__ early; } ;
struct gnet_dump {int dummy; } ;
struct TYPE_2__ {int matched; int other; int pdrop; scalar_t__ forced_mark; scalar_t__ prob_mark; scalar_t__ forced_drop; scalar_t__ prob_drop; } ;
struct choke_sched_data {TYPE_1__ stats; } ;
struct Qdisc {int dummy; } ;
typedef int st ;


 int FUNC_0 (struct gnet_dump*,struct tc_choke_xstats*,int) ;
 struct choke_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_0, struct gnet_dump *VAR_1)
{
 struct choke_sched_data *VAR_2 = FUNC_1(VAR_0);
 struct tc_choke_xstats VAR_3 = {
  .early = VAR_2->stats.prob_drop + VAR_2->stats.forced_drop,
  .marked = VAR_2->stats.prob_mark + VAR_2->stats.forced_mark,
  .pdrop = VAR_2->stats.pdrop,
  .other = VAR_2->stats.other,
  .matched = VAR_2->stats.matched,
 };

 return FUNC_0(VAR_1, &VAR_3, sizeof(VAR_3));
}
