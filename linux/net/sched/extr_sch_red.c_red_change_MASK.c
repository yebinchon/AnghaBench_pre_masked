
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tc_red_qopt {scalar_t__ limit; int flags; int Scell_log; int Plog; int Wlog; int qth_max; int qth_min; } ;
struct red_sched_data {int flags; scalar_t__ limit; int vars; struct Qdisc* qdisc; int adapt_timer; int parms; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {int qlen; } ;
struct Qdisc {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct Qdisc*) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 struct Qdisc* FUNC_3 (struct Qdisc*,int *,scalar_t__,struct netlink_ext_ack*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *,scalar_t__) ;
 struct tc_red_qopt* FUNC_5 (struct nlattr*) ;
 int FUNC_6 (struct nlattr*) ;
 int FUNC_7 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int FUNC_8 (struct Qdisc*,int) ;
 struct red_sched_data* FUNC_9 (struct Qdisc*) ;
 int FUNC_10 (struct Qdisc*) ;
 int FUNC_11 (struct Qdisc*) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct Qdisc*,int) ;
 int VAR_9 ;
 int FUNC_14 (int *,int ,int ,int ,int ,int ,struct tc_red_qopt*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct Qdisc*) ;
 int FUNC_18 (struct Qdisc*) ;

__attribute__((used)) static int FUNC_19(struct Qdisc *VAR_10, struct nlattr *VAR_11,
        struct netlink_ext_ack *VAR_12)
{
 struct Qdisc *VAR_13 = ((void*)0), *VAR_14 = ((void*)0);
 struct red_sched_data *VAR_15 = FUNC_9(VAR_10);
 struct nlattr *VAR_16[VAR_2 + 1];
 struct tc_red_qopt *VAR_17;
 int VAR_18;
 u32 VAR_19;

 if (VAR_11 == ((void*)0))
  return -VAR_0;

 VAR_18 = FUNC_7(VAR_16, VAR_2, VAR_11, VAR_9,
       ((void*)0));
 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_16[VAR_4] == ((void*)0) ||
     VAR_16[VAR_5] == ((void*)0))
  return -VAR_0;

 VAR_19 = VAR_16[VAR_3] ? FUNC_6(VAR_16[VAR_3]) : 0;

 VAR_17 = FUNC_5(VAR_16[VAR_4]);
 if (!FUNC_12(VAR_17->qth_min, VAR_17->qth_max, VAR_17->Wlog))
  return -VAR_0;

 if (VAR_17->limit > 0) {
  VAR_14 = FUNC_3(VAR_10, &VAR_7, VAR_17->limit,
      VAR_12);
  if (FUNC_0(VAR_14))
   return FUNC_1(VAR_14);


  FUNC_8(VAR_14, 1);
 }

 FUNC_17(VAR_10);
 VAR_15->flags = VAR_17->flags;
 VAR_15->limit = VAR_17->limit;
 if (VAR_14) {
  FUNC_11(VAR_15->qdisc);
  VAR_13 = VAR_15->qdisc;
  VAR_15->qdisc = VAR_14;
 }

 FUNC_14(&VAR_15->parms,
        VAR_17->qth_min, VAR_17->qth_max, VAR_17->Wlog,
        VAR_17->Plog, VAR_17->Scell_log,
        FUNC_5(VAR_16[VAR_5]),
        VAR_19);
 FUNC_15(&VAR_15->vars);

 FUNC_2(&VAR_15->adapt_timer);
 if (VAR_17->flags & VAR_6)
  FUNC_4(&VAR_15->adapt_timer, VAR_8 + VAR_1/2);

 if (!VAR_15->qdisc->q.qlen)
  FUNC_16(&VAR_15->vars);

 FUNC_18(VAR_10);

 FUNC_13(VAR_10, 1);

 if (VAR_13)
  FUNC_10(VAR_13);
 return 0;
}
