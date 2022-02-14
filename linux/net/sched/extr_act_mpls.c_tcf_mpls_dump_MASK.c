
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_mpls_params {scalar_t__ tcfm_label; scalar_t__ tcfm_tc; scalar_t__ tcfm_ttl; scalar_t__ tcfm_bos; int tcfm_proto; int tcfm_action; } ;
struct tcf_mpls {int tcf_lock; int tcf_tm; int mpls_p; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_mpls {int m_action; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tc_mpls*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,unsigned char*) ;
 struct tcf_mpls_params* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_mpls* FUNC_14 (struct tc_action*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_12, struct tc_action *VAR_13,
    int VAR_14, int VAR_15)
{
 unsigned char *VAR_16 = FUNC_10(VAR_12);
 struct tcf_mpls *VAR_17 = FUNC_14(VAR_13);
 struct tcf_mpls_params *VAR_18;
 struct tc_mpls VAR_19 = {
  .index = VAR_17->tcf_index,
  .refcnt = FUNC_9(&VAR_17->tcf_refcnt) - VAR_15,
  .bindcnt = FUNC_0(&VAR_17->tcf_bindcnt) - VAR_14,
 };
 struct tcf_t VAR_20;

 FUNC_11(&VAR_17->tcf_lock);
 VAR_19.action = VAR_17->tcf_action;
 VAR_18 = FUNC_8(VAR_17->mpls_p, FUNC_1(&VAR_17->tcf_lock));
 VAR_19.m_action = VAR_18->tcfm_action;

 if (FUNC_2(VAR_12, VAR_7, sizeof(VAR_19), &VAR_19))
  goto nla_put_failure;

 if (VAR_18->tcfm_label != VAR_1 &&
     FUNC_5(VAR_12, VAR_5, VAR_18->tcfm_label))
  goto nla_put_failure;

 if (VAR_18->tcfm_tc != VAR_2 &&
     FUNC_6(VAR_12, VAR_9, VAR_18->tcfm_tc))
  goto nla_put_failure;

 if (VAR_18->tcfm_ttl && FUNC_6(VAR_12, VAR_11, VAR_18->tcfm_ttl))
  goto nla_put_failure;

 if (VAR_18->tcfm_bos != VAR_0 &&
     FUNC_6(VAR_12, VAR_4, VAR_18->tcfm_bos))
  goto nla_put_failure;

 if (FUNC_4(VAR_12, VAR_8, VAR_18->tcfm_proto))
  goto nla_put_failure;

 FUNC_13(&VAR_20, &VAR_17->tcf_tm);

 if (FUNC_3(VAR_12, VAR_10, sizeof(VAR_20), &VAR_20, VAR_6))
  goto nla_put_failure;

 FUNC_12(&VAR_17->tcf_lock);

 return VAR_12->len;

nla_put_failure:
 FUNC_12(&VAR_17->tcf_lock);
 FUNC_7(VAR_12, VAR_16);
 return -VAR_3;
}
