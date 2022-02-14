
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tc_pie_xstats {int delay; int avg_dq_rate; int ecn_mark; int dropped; int maxq; int overlimit; int packets_in; int prob; } ;
struct TYPE_3__ {int ecn_mark; int dropped; int maxq; int overlimit; int packets_in; } ;
struct TYPE_4__ {int avg_dq_rate; int qdelay; int prob; } ;
struct pie_sched_data {TYPE_1__ stats; TYPE_2__ vars; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int st ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct gnet_dump*,struct tc_pie_xstats*,int) ;
 struct pie_sched_data* FUNC_2 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_3, struct gnet_dump *VAR_4)
{
 struct pie_sched_data *VAR_5 = FUNC_2(VAR_3);
 struct tc_pie_xstats VAR_6 = {
  .prob = VAR_5->vars.prob,
  .delay = ((u32)FUNC_0(VAR_5->vars.qdelay)) /
       VAR_0,

  .avg_dq_rate = VAR_5->vars.avg_dq_rate *
      (VAR_2) >> VAR_1,
  .packets_in = VAR_5->stats.packets_in,
  .overlimit = VAR_5->stats.overlimit,
  .maxq = VAR_5->stats.maxq,
  .dropped = VAR_5->stats.dropped,
  .ecn_mark = VAR_5->stats.ecn_mark,
 };

 return FUNC_1(VAR_4, &VAR_6, sizeof(VAR_6));
}
