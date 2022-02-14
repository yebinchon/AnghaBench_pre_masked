
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct tcf_proto {int dummy; } ;
struct tcf_police_params {int tcfp_result; int tcfp_mtu; int rate_present; int peak_present; scalar_t__ tcfp_mtu_ptoks; int tcfp_burst; void* tcfp_ewma_rate; int peak; int rate; } ;
struct TYPE_4__ {int cpu_bstats; } ;
struct tcf_police {int tcf_lock; int params; int tcfp_lock; scalar_t__ tcfp_ptoks; int tcfp_toks; int tcfp_t_c; int tcf_rate_est; TYPE_1__ common; int tcf_bstats; } ;
struct tcf_chain {int dummy; } ;
struct tc_police_compat {int dummy; } ;
struct TYPE_5__ {scalar_t__ rate; } ;
struct tc_police {int mtu; int action; int burst; TYPE_2__ peakrate; TYPE_2__ rate; int index; } ;
struct tc_action_net {int dummy; } ;
struct tc_action {int dummy; } ;
struct TYPE_6__ {int cell_log; } ;
struct qdisc_rate_table {TYPE_3__ rate; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int *,int *,struct nlattr*) ;
 int FUNC_5 (struct tcf_police_params*,int ) ;
 int FUNC_6 () ;
 struct tcf_police_params* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 struct tc_action_net* FUNC_9 (struct net*,int ) ;
 struct tc_police* FUNC_10 (struct nlattr*) ;
 void* FUNC_11 (struct nlattr*) ;
 int FUNC_12 (struct nlattr*) ;
 int FUNC_13 (struct nlattr*) ;
 int FUNC_14 (struct nlattr**,int ,struct nlattr*,int ,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_15 (int *,int) ;
 int FUNC_16 (int *,TYPE_3__*,int ) ;
 struct qdisc_rate_table* FUNC_17 (TYPE_2__*,struct nlattr*,int *) ;
 int FUNC_18 (struct qdisc_rate_table*) ;
 int VAR_18 ;
 int FUNC_19 (int ,struct tcf_police_params*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_24 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_25 (struct tcf_chain*) ;
 int FUNC_26 (struct tc_action_net*,int *,struct tc_action**,int) ;
 int FUNC_27 (struct tc_action_net*,int ) ;
 int FUNC_28 (struct tc_action_net*,int ,int *,struct tc_action**,int *,int,int) ;
 int FUNC_29 (struct tc_action_net*,struct tc_action*) ;
 int FUNC_30 (struct tc_action*,int) ;
 struct tcf_police* FUNC_31 (struct tc_action*) ;
 scalar_t__ FUNC_32 (int) ;

__attribute__((used)) static int FUNC_33(struct net *VAR_19, struct nlattr *VAR_20,
          struct nlattr *VAR_21, struct tc_action **VAR_22,
          int VAR_23, int VAR_24, bool VAR_25,
          struct tcf_proto *VAR_26,
          struct netlink_ext_ack *VAR_27)
{
 int VAR_28 = 0, VAR_29 = VAR_14, VAR_30, VAR_31;
 struct nlattr *VAR_32[VAR_6 + 1];
 struct tcf_chain *VAR_33 = ((void*)0);
 struct tc_police *VAR_34;
 struct tcf_police *VAR_35;
 struct qdisc_rate_table *VAR_36 = ((void*)0), *VAR_37 = ((void*)0);
 struct tc_action_net *VAR_38 = FUNC_9(VAR_19, VAR_16);
 struct tcf_police_params *VAR_39;
 bool VAR_40 = 0;
 u32 VAR_41;
 u64 VAR_42, VAR_43;

 if (VAR_20 == ((void*)0))
  return -VAR_2;

 VAR_30 = FUNC_14(VAR_32, VAR_6, VAR_20,
       VAR_17, ((void*)0));
 if (VAR_30 < 0)
  return VAR_30;

 if (VAR_32[VAR_12] == ((void*)0))
  return -VAR_2;
 VAR_31 = FUNC_13(VAR_32[VAR_12]);
 if (VAR_31 != sizeof(*VAR_34) && VAR_31 != sizeof(struct tc_police_compat))
  return -VAR_2;

 VAR_34 = FUNC_10(VAR_32[VAR_12]);
 VAR_41 = VAR_34->index;
 VAR_30 = FUNC_26(VAR_38, &VAR_41, VAR_22, VAR_24);
 if (VAR_30 < 0)
  return VAR_30;
 VAR_40 = VAR_30;
 if (VAR_40 && VAR_24)
  return 0;

 if (!VAR_40) {
  VAR_28 = FUNC_28(VAR_38, VAR_41, ((void*)0), VAR_22,
         &VAR_15, VAR_24, 1);
  if (VAR_28) {
   FUNC_27(VAR_38, VAR_41);
   return VAR_28;
  }
  VAR_28 = VAR_0;
  FUNC_21(&(FUNC_31(*VAR_22)->tcfp_lock));
 } else if (!VAR_23) {
  FUNC_30(*VAR_22, VAR_24);
  return -VAR_1;
 }
 VAR_30 = FUNC_23(VAR_34->action, VAR_26, &VAR_33, VAR_27);
 if (VAR_30 < 0)
  goto release_idr;

 VAR_35 = FUNC_31(*VAR_22);
 if (VAR_34->rate.rate) {
  VAR_30 = -VAR_3;
  VAR_36 = FUNC_17(&VAR_34->rate, VAR_32[VAR_9], ((void*)0));
  if (VAR_36 == ((void*)0))
   goto failure;

  if (VAR_34->peakrate.rate) {
   VAR_37 = FUNC_17(&VAR_34->peakrate,
            VAR_32[VAR_7], ((void*)0));
   if (VAR_37 == ((void*)0))
    goto failure;
  }
 }

 if (VAR_21) {
  VAR_30 = FUNC_4(&VAR_35->tcf_bstats,
         VAR_35->common.cpu_bstats,
         &VAR_35->tcf_rate_est,
         &VAR_35->tcf_lock,
         ((void*)0), VAR_21);
  if (VAR_30)
   goto failure;
 } else if (VAR_32[VAR_5] &&
     (VAR_28 == VAR_0 ||
      !FUNC_3(&VAR_35->tcf_rate_est))) {
  VAR_30 = -VAR_2;
  goto failure;
 }

 if (VAR_32[VAR_11]) {
  VAR_29 = FUNC_11(VAR_32[VAR_11]);
  if (FUNC_2(VAR_29, VAR_13)) {
   FUNC_0(VAR_27,
           "goto chain not allowed on fallback");
   VAR_30 = -VAR_2;
   goto failure;
  }
 }

 VAR_39 = FUNC_7(sizeof(*VAR_39), VAR_4);
 if (FUNC_32(!VAR_39)) {
  VAR_30 = -VAR_3;
  goto failure;
 }


 VAR_39->tcfp_result = VAR_29;
 VAR_39->tcfp_mtu = VAR_34->mtu;
 if (!VAR_39->tcfp_mtu) {
  VAR_39->tcfp_mtu = ~0;
  if (VAR_36)
   VAR_39->tcfp_mtu = 255 << VAR_36->rate.cell_log;
 }
 if (VAR_36) {
  VAR_39->rate_present = 1;
  VAR_42 = VAR_32[VAR_10] ?
    FUNC_12(VAR_32[VAR_10]) : 0;
  FUNC_16(&VAR_39->rate, &VAR_36->rate, VAR_42);
  FUNC_18(VAR_36);
 } else {
  VAR_39->rate_present = 0;
 }
 if (VAR_37) {
  VAR_39->peak_present = 1;
  VAR_43 = VAR_32[VAR_8] ?
     FUNC_12(VAR_32[VAR_8]) : 0;
  FUNC_16(&VAR_39->peak, &VAR_37->rate, VAR_43);
  FUNC_18(VAR_37);
 } else {
  VAR_39->peak_present = 0;
 }

 VAR_39->tcfp_burst = FUNC_1(VAR_34->burst);
 if (VAR_39->peak_present)
  VAR_39->tcfp_mtu_ptoks = (s64)FUNC_15(&VAR_39->peak,
        VAR_39->tcfp_mtu);

 if (VAR_32[VAR_5])
  VAR_39->tcfp_ewma_rate = FUNC_11(VAR_32[VAR_5]);

 FUNC_20(&VAR_35->tcf_lock);
 FUNC_20(&VAR_35->tcfp_lock);
 VAR_35->tcfp_t_c = FUNC_6();
 VAR_35->tcfp_toks = VAR_39->tcfp_burst;
 if (VAR_39->peak_present)
  VAR_35->tcfp_ptoks = VAR_39->tcfp_mtu_ptoks;
 FUNC_22(&VAR_35->tcfp_lock);
 VAR_33 = FUNC_24(*VAR_22, VAR_34->action, VAR_33);
 FUNC_19(VAR_35->params,
      VAR_39,
      FUNC_8(&VAR_35->tcf_lock));
 FUNC_22(&VAR_35->tcf_lock);

 if (VAR_33)
  FUNC_25(VAR_33);
 if (VAR_39)
  FUNC_5(VAR_39, VAR_18);

 if (VAR_28 == VAR_0)
  FUNC_29(VAR_38, *VAR_22);
 return VAR_28;

failure:
 FUNC_18(VAR_37);
 FUNC_18(VAR_36);
 if (VAR_33)
  FUNC_25(VAR_33);
release_idr:
 FUNC_30(*VAR_22, VAR_24);
 return VAR_30;
}
