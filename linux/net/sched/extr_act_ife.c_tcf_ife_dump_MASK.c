
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tc_ife {int flags; int action; int bindcnt; int refcnt; int index; } ;
struct tcf_ife_params {struct tc_ife eth_type; struct tc_ife* eth_src; struct tc_ife* eth_dst; int flags; } ;
struct tcf_ife_info {int tcf_lock; int tcf_tm; int params; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
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
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct tcf_ife_info*) ;
 int FUNC_2 (struct tc_ife*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tc_ife*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 int FUNC_6 (struct sk_buff*,unsigned char*) ;
 int FUNC_7 (char*) ;
 struct tcf_ife_params* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_ife_info* FUNC_14 (struct tc_action*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_7, struct tc_action *VAR_8, int VAR_9,
   int VAR_10)
{
 unsigned char *VAR_11 = FUNC_10(VAR_7);
 struct tcf_ife_info *VAR_12 = FUNC_14(VAR_8);
 struct tcf_ife_params *VAR_13;
 struct tc_ife VAR_14 = {
  .index = VAR_12->tcf_index,
  .refcnt = FUNC_9(&VAR_12->tcf_refcnt) - VAR_10,
  .bindcnt = FUNC_0(&VAR_12->tcf_bindcnt) - VAR_9,
 };
 struct tcf_t VAR_15;

 FUNC_11(&VAR_12->tcf_lock);
 VAR_14.action = VAR_12->tcf_action;
 VAR_13 = FUNC_8(VAR_12->params,
          FUNC_3(&VAR_12->tcf_lock));
 VAR_14.flags = VAR_13->flags;

 if (FUNC_4(VAR_7, VAR_3, sizeof(VAR_14), &VAR_14))
  goto nla_put_failure;

 FUNC_13(&VAR_15, &VAR_12->tcf_tm);
 if (FUNC_5(VAR_7, VAR_5, sizeof(VAR_15), &VAR_15, VAR_2))
  goto nla_put_failure;

 if (!FUNC_2(VAR_13->eth_dst)) {
  if (FUNC_4(VAR_7, VAR_1, VAR_0, VAR_13->eth_dst))
   goto nla_put_failure;
 }

 if (!FUNC_2(VAR_13->eth_src)) {
  if (FUNC_4(VAR_7, VAR_4, VAR_0, VAR_13->eth_src))
   goto nla_put_failure;
 }

 if (FUNC_4(VAR_7, VAR_6, 2, &VAR_13->eth_type))
  goto nla_put_failure;

 if (FUNC_1(VAR_7, VAR_12)) {

  FUNC_7("Failed to dump metalist\n");
 }

 FUNC_12(&VAR_12->tcf_lock);
 return VAR_7->len;

nla_put_failure:
 FUNC_12(&VAR_12->tcf_lock);
 FUNC_6(VAR_7, VAR_11);
 return -1;
}
