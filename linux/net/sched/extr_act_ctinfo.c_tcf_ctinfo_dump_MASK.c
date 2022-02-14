
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_ctinfo_params {int mode; int cpmarkmask; int dscpstatemask; int dscpmask; int zone; } ;
struct tcf_ctinfo {int tcf_lock; int stats_cpmark_set; int stats_dscp_error; int stats_dscp_set; int tcf_action; int tcf_tm; int params; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_ctinfo {int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tc_ctinfo*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*,unsigned char*) ;
 struct tcf_ctinfo_params* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_ctinfo* FUNC_14 (struct tc_action*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_12, struct tc_action *VAR_13,
      int VAR_14, int VAR_15)
{
 struct tcf_ctinfo *VAR_16 = FUNC_14(VAR_13);
 struct tc_ctinfo VAR_17 = {
  .index = VAR_16->tcf_index,
  .refcnt = FUNC_9(&VAR_16->tcf_refcnt) - VAR_15,
  .bindcnt = FUNC_0(&VAR_16->tcf_bindcnt) - VAR_14,
 };
 unsigned char *VAR_18 = FUNC_10(VAR_12);
 struct tcf_ctinfo_params *VAR_19;
 struct tcf_t VAR_20;

 FUNC_11(&VAR_16->tcf_lock);
 VAR_19 = FUNC_8(VAR_16->params,
           FUNC_1(&VAR_16->tcf_lock));

 FUNC_13(&VAR_20, &VAR_16->tcf_tm);
 if (FUNC_3(VAR_12, VAR_10, sizeof(VAR_20), &VAR_20, VAR_3))
  goto nla_put_failure;

 VAR_17.action = VAR_16->tcf_action;
 if (FUNC_2(VAR_12, VAR_2, sizeof(VAR_17), &VAR_17))
  goto nla_put_failure;

 if (FUNC_4(VAR_12, VAR_11, VAR_19->zone))
  goto nla_put_failure;

 if (VAR_19->mode & VAR_1) {
  if (FUNC_5(VAR_12, VAR_5,
    VAR_19->dscpmask))
   goto nla_put_failure;
  if (FUNC_5(VAR_12, VAR_6,
    VAR_19->dscpstatemask))
   goto nla_put_failure;
 }

 if (VAR_19->mode & VAR_0) {
  if (FUNC_5(VAR_12, VAR_4,
    VAR_19->cpmarkmask))
   goto nla_put_failure;
 }

 if (FUNC_6(VAR_12, VAR_9,
         VAR_16->stats_dscp_set, VAR_3))
  goto nla_put_failure;

 if (FUNC_6(VAR_12, VAR_8,
         VAR_16->stats_dscp_error, VAR_3))
  goto nla_put_failure;

 if (FUNC_6(VAR_12, VAR_7,
         VAR_16->stats_cpmark_set, VAR_3))
  goto nla_put_failure;

 FUNC_12(&VAR_16->tcf_lock);
 return VAR_12->len;

nla_put_failure:
 FUNC_12(&VAR_16->tcf_lock);
 FUNC_7(VAR_12, VAR_18);
 return -1;
}
