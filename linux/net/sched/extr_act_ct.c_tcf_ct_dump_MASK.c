
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_ct_params {int ct_action; int mark; int* labels; int zone; int * labels_mask; int mark_mask; } ;
struct tcf_ct {int tcf_lock; int tcf_tm; int tcf_action; int params; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_ct {int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tc_ct*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 int FUNC_5 (struct sk_buff*,unsigned char*) ;
 struct tcf_ct_params* FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct sk_buff*,int*,int ,int *,int ,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,struct tcf_ct_params*) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_ct* FUNC_14 (struct tc_action*) ;

__attribute__((used)) static inline int FUNC_15(struct sk_buff *VAR_14, struct tc_action *VAR_15,
         int VAR_16, int VAR_17)
{
 unsigned char *VAR_18 = FUNC_8(VAR_14);
 struct tcf_ct *VAR_19 = FUNC_14(VAR_15);
 struct tcf_ct_params *VAR_20;

 struct tc_ct VAR_21 = {
  .index = VAR_19->tcf_index,
  .refcnt = FUNC_7(&VAR_19->tcf_refcnt) - VAR_17,
  .bindcnt = FUNC_1(&VAR_19->tcf_bindcnt) - VAR_16,
 };
 struct tcf_t VAR_22;

 FUNC_9(&VAR_19->tcf_lock);
 VAR_20 = FUNC_6(VAR_19->params,
          FUNC_2(&VAR_19->tcf_lock));
 VAR_21.action = VAR_19->tcf_action;

 if (FUNC_11(VAR_14,
    &VAR_20->ct_action, VAR_3,
    ((void*)0), VAR_12,
    sizeof(VAR_20->ct_action)))
  goto nla_put_failure;

 if (VAR_20->ct_action & VAR_4)
  goto skip_dump;

 if (FUNC_0(VAR_1) &&
     FUNC_11(VAR_14,
    &VAR_20->mark, VAR_7,
    &VAR_20->mark_mask, VAR_8,
    sizeof(VAR_20->mark)))
  goto nla_put_failure;

 if (FUNC_0(VAR_0) &&
     FUNC_11(VAR_14,
    VAR_20->labels, VAR_5,
    VAR_20->labels_mask, VAR_6,
    sizeof(VAR_20->labels)))
  goto nla_put_failure;

 if (FUNC_0(VAR_2) &&
     FUNC_11(VAR_14,
    &VAR_20->zone, VAR_13,
    ((void*)0), VAR_12,
    sizeof(VAR_20->zone)))
  goto nla_put_failure;

 if (FUNC_12(VAR_14, VAR_20))
  goto nla_put_failure;

skip_dump:
 if (FUNC_3(VAR_14, VAR_10, sizeof(VAR_21), &VAR_21))
  goto nla_put_failure;

 FUNC_13(&VAR_22, &VAR_19->tcf_tm);
 if (FUNC_4(VAR_14, VAR_11, sizeof(VAR_22), &VAR_22, VAR_9))
  goto nla_put_failure;
 FUNC_10(&VAR_19->tcf_lock);

 return VAR_14->len;
nla_put_failure:
 FUNC_10(&VAR_19->tcf_lock);
 FUNC_5(VAR_14, VAR_18);
 return -1;
}
