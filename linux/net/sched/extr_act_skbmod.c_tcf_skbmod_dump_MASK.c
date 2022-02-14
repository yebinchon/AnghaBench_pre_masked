
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_skbmod_params {int flags; int eth_type; struct tc_skbmod* eth_src; struct tc_skbmod* eth_dst; } ;
struct tcf_skbmod {int tcf_lock; int tcf_tm; int skbmod_p; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_skbmod {int flags; int action; int bindcnt; int refcnt; int index; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tc_skbmod*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,unsigned char*) ;
 int FUNC_6 (int ) ;
 struct tcf_skbmod_params* FUNC_7 (int ,int ) ;
 int FUNC_8 (int *) ;
 unsigned char* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct tcf_t*,int *) ;
 struct tcf_skbmod* FUNC_13 (struct tc_action*) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_10, struct tc_action *VAR_11,
      int VAR_12, int VAR_13)
{
 struct tcf_skbmod *VAR_14 = FUNC_13(VAR_11);
 unsigned char *VAR_15 = FUNC_9(VAR_10);
 struct tcf_skbmod_params *VAR_16;
 struct tc_skbmod VAR_17 = {
  .index = VAR_14->tcf_index,
  .refcnt = FUNC_8(&VAR_14->tcf_refcnt) - VAR_13,
  .bindcnt = FUNC_0(&VAR_14->tcf_bindcnt) - VAR_12,
 };
 struct tcf_t VAR_18;

 FUNC_10(&VAR_14->tcf_lock);
 VAR_17.action = VAR_14->tcf_action;
 VAR_16 = FUNC_7(VAR_14->skbmod_p,
          FUNC_1(&VAR_14->tcf_lock));
 VAR_17.flags = VAR_16->flags;
 if (FUNC_2(VAR_10, VAR_7, sizeof(VAR_17), &VAR_17))
  goto nla_put_failure;
 if ((VAR_16->flags & VAR_1) &&
     FUNC_2(VAR_10, VAR_4, VAR_0, VAR_16->eth_dst))
  goto nla_put_failure;
 if ((VAR_16->flags & VAR_3) &&
     FUNC_2(VAR_10, VAR_8, VAR_0, VAR_16->eth_src))
  goto nla_put_failure;
 if ((VAR_16->flags & VAR_2) &&
     FUNC_4(VAR_10, VAR_5, FUNC_6(VAR_16->eth_type)))
  goto nla_put_failure;

 FUNC_12(&VAR_18, &VAR_14->tcf_tm);
 if (FUNC_3(VAR_10, VAR_9, sizeof(VAR_18), &VAR_18, VAR_6))
  goto nla_put_failure;

 FUNC_11(&VAR_14->tcf_lock);
 return VAR_10->len;
nla_put_failure:
 FUNC_11(&VAR_14->tcf_lock);
 FUNC_5(VAR_10, VAR_15);
 return -1;
}
