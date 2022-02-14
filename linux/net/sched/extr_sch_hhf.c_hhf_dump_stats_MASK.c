
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_hhf_xstats {int hh_cur_count; int hh_tot_count; int hh_overlimit; int drop_overlimit; } ;
struct hhf_sched_data {int hh_flows_current_cnt; int hh_flows_total_cnt; int hh_flows_overlimit; int drop_overlimit; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int dummy; } ;
typedef int st ;


 int FUNC_0 (struct gnet_dump*,struct tc_hhf_xstats*,int) ;
 struct hhf_sched_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_2(struct Qdisc *VAR_0, struct gnet_dump *VAR_1)
{
 struct hhf_sched_data *VAR_2 = FUNC_1(VAR_0);
 struct tc_hhf_xstats VAR_3 = {
  .drop_overlimit = VAR_2->drop_overlimit,
  .hh_overlimit = VAR_2->hh_flows_overlimit,
  .hh_tot_count = VAR_2->hh_flows_total_cnt,
  .hh_cur_count = VAR_2->hh_flows_current_cnt,
 };

 return FUNC_0(VAR_1, &VAR_3, sizeof(VAR_3));
}
