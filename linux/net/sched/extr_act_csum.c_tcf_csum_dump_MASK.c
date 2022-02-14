
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_csum_params {int update_flags; } ;
struct tcf_csum {int tcf_lock; int tcf_tm; int tcf_action; int params; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_csum {int update_flags; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tc_csum*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 struct tcf_csum_params* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 unsigned char* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tcf_t*,int *) ;
 struct tcf_csum* FUNC_11 (struct tc_action*) ;

__attribute__((used)) static int FUNC_12(struct sk_buff *VAR_3, struct tc_action *VAR_4, int VAR_5,
    int VAR_6)
{
 unsigned char *VAR_7 = FUNC_7(VAR_3);
 struct tcf_csum *VAR_8 = FUNC_11(VAR_4);
 struct tcf_csum_params *VAR_9;
 struct tc_csum VAR_10 = {
  .index = VAR_8->tcf_index,
  .refcnt = FUNC_6(&VAR_8->tcf_refcnt) - VAR_6,
  .bindcnt = FUNC_0(&VAR_8->tcf_bindcnt) - VAR_5,
 };
 struct tcf_t VAR_11;

 FUNC_8(&VAR_8->tcf_lock);
 VAR_9 = FUNC_5(VAR_8->params,
        FUNC_1(&VAR_8->tcf_lock));
 VAR_10.action = VAR_8->tcf_action;
 VAR_10.update_flags = VAR_9->update_flags;

 if (FUNC_2(VAR_3, VAR_1, sizeof(VAR_10), &VAR_10))
  goto nla_put_failure;

 FUNC_10(&VAR_11, &VAR_8->tcf_tm);
 if (FUNC_3(VAR_3, VAR_2, sizeof(VAR_11), &VAR_11, VAR_0))
  goto nla_put_failure;
 FUNC_9(&VAR_8->tcf_lock);

 return VAR_3->len;

nla_put_failure:
 FUNC_9(&VAR_8->tcf_lock);
 FUNC_4(VAR_3, VAR_7);
 return -1;
}
