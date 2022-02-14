
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tc_gred_qopt {scalar_t__ limit; int Scell_log; int Plog; int Wlog; int qth_max; int qth_min; } ;
struct netlink_ext_ack {int dummy; } ;
struct gred_sched_data {int red_flags; int DP; int prio; scalar_t__ limit; scalar_t__ backlog; int vars; int parms; } ;
struct gred_sched {int red_flags; struct gred_sched_data** tab; } ;
struct Qdisc {scalar_t__ limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct gred_sched* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static inline int FUNC_6(struct Qdisc *VAR_3, int VAR_4,
     struct tc_gred_qopt *VAR_5, int VAR_6,
     u8 *VAR_7, u32 VAR_8,
     struct gred_sched_data **VAR_9,
     struct netlink_ext_ack *VAR_10)
{
 struct gred_sched *VAR_11 = FUNC_1(VAR_3);
 struct gred_sched_data *VAR_12 = VAR_11->tab[VAR_4];

 if (!FUNC_2(VAR_5->qth_min, VAR_5->qth_max, VAR_5->Wlog)) {
  FUNC_0(VAR_10, "invalid RED parameters");
  return -VAR_0;
 }

 if (!VAR_12) {
  VAR_11->tab[VAR_4] = VAR_12 = *VAR_9;
  *VAR_9 = ((void*)0);
  if (!VAR_12)
   return -VAR_1;
  VAR_12->red_flags = VAR_11->red_flags & VAR_2;
 }

 VAR_12->DP = VAR_4;
 VAR_12->prio = VAR_6;
 if (VAR_5->limit > VAR_3->limit)
  VAR_12->limit = VAR_3->limit;
 else
  VAR_12->limit = VAR_5->limit;

 if (VAR_12->backlog == 0)
  FUNC_3(&VAR_12->vars);

 FUNC_4(&VAR_12->parms,
        VAR_5->qth_min, VAR_5->qth_max, VAR_5->Wlog, VAR_5->Plog,
        VAR_5->Scell_log, VAR_7, VAR_8);
 FUNC_5(&VAR_12->vars);
 return 0;
}
