
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_gact {int tcf_lock; int tcf_tm; scalar_t__ tcfg_ptype; int tcfg_pval; int tcfg_paction; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_gact_p {scalar_t__ ptype; int pval; int paction; int action; int bindcnt; int refcnt; int index; } ;
struct tc_gact {scalar_t__ ptype; int pval; int paction; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int p_opt ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,struct tc_gact_p*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tcf_t*,int *) ;
 struct tcf_gact* FUNC_9 (struct tc_action*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_4, struct tc_action *VAR_5,
    int VAR_6, int VAR_7)
{
 unsigned char *VAR_8 = FUNC_5(VAR_4);
 struct tcf_gact *VAR_9 = FUNC_9(VAR_5);
 struct tc_gact VAR_10 = {
  .index = VAR_9->tcf_index,
  .refcnt = FUNC_4(&VAR_9->tcf_refcnt) - VAR_7,
  .bindcnt = FUNC_0(&VAR_9->tcf_bindcnt) - VAR_6,
 };
 struct tcf_t VAR_11;

 FUNC_6(&VAR_9->tcf_lock);
 VAR_10.action = VAR_9->tcf_action;
 if (FUNC_1(VAR_4, VAR_1, sizeof(VAR_10), &VAR_10))
  goto nla_put_failure;
 FUNC_8(&VAR_11, &VAR_9->tcf_tm);
 if (FUNC_2(VAR_4, VAR_3, sizeof(VAR_11), &VAR_11, VAR_0))
  goto nla_put_failure;
 FUNC_7(&VAR_9->tcf_lock);

 return VAR_4->len;

nla_put_failure:
 FUNC_7(&VAR_9->tcf_lock);
 FUNC_3(VAR_4, VAR_8);
 return -1;
}
