
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_pedit {int tcfp_nkeys; int tcf_lock; int tcf_tm; scalar_t__ tcfp_keys_ex; int tcf_bindcnt; int tcf_refcnt; int tcf_action; int tcfp_flags; int tcf_index; int tcfp_keys; } ;
struct tc_pedit_key {int dummy; } ;
struct tc_pedit {int nkeys; scalar_t__ bindcnt; scalar_t__ refcnt; int action; int flags; int index; int keys; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_6 ;
 int FUNC_1 (struct tc_pedit*) ;
 struct tc_pedit* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tc_pedit*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned char*) ;
 scalar_t__ FUNC_7 (int *) ;
 unsigned char* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct tc_pedit*,int ,int) ;
 scalar_t__ FUNC_12 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_pedit* FUNC_14 (struct tc_action*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_7, struct tc_action *VAR_8,
     int VAR_9, int VAR_10)
{
 unsigned char *VAR_11 = FUNC_8(VAR_7);
 struct tcf_pedit *VAR_12 = FUNC_14(VAR_8);
 struct tc_pedit *VAR_13;
 struct tcf_t VAR_14;
 int VAR_15;

 VAR_15 = FUNC_11(VAR_13, VAR_6, VAR_12->tcfp_nkeys);


 VAR_13 = FUNC_2(VAR_15, VAR_1);
 if (FUNC_15(!VAR_13))
  return -VAR_0;

 FUNC_9(&VAR_12->tcf_lock);
 FUNC_3(VAR_13->keys, VAR_12->tcfp_keys,
        VAR_12->tcfp_nkeys * sizeof(struct tc_pedit_key));
 VAR_13->index = VAR_12->tcf_index;
 VAR_13->nkeys = VAR_12->tcfp_nkeys;
 VAR_13->flags = VAR_12->tcfp_flags;
 VAR_13->action = VAR_12->tcf_action;
 VAR_13->refcnt = FUNC_7(&VAR_12->tcf_refcnt) - VAR_10;
 VAR_13->bindcnt = FUNC_0(&VAR_12->tcf_bindcnt) - VAR_9;

 if (VAR_12->tcfp_keys_ex) {
  if (FUNC_12(VAR_7,
       VAR_12->tcfp_keys_ex,
       VAR_12->tcfp_nkeys))
   goto nla_put_failure;

  if (FUNC_4(VAR_7, VAR_4, VAR_15, VAR_13))
   goto nla_put_failure;
 } else {
  if (FUNC_4(VAR_7, VAR_3, VAR_15, VAR_13))
   goto nla_put_failure;
 }

 FUNC_13(&VAR_14, &VAR_12->tcf_tm);
 if (FUNC_5(VAR_7, VAR_5, sizeof(VAR_14), &VAR_14, VAR_2))
  goto nla_put_failure;
 FUNC_10(&VAR_12->tcf_lock);

 FUNC_1(VAR_13);
 return VAR_7->len;

nla_put_failure:
 FUNC_10(&VAR_12->tcf_lock);
 FUNC_6(VAR_7, VAR_11);
 FUNC_1(VAR_13);
 return -1;
}
