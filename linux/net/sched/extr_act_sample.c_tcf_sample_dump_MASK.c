
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_sample {int tcf_lock; int psample_group_num; int trunc_size; scalar_t__ truncate; int rate; int tcf_tm; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_sample {int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,struct tc_sample*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 int FUNC_5 (int *) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct tcf_t*,int *) ;
 struct tcf_sample* FUNC_10 (struct tc_action*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_6, struct tc_action *VAR_7,
      int VAR_8, int VAR_9)
{
 unsigned char *VAR_10 = FUNC_6(VAR_6);
 struct tcf_sample *VAR_11 = FUNC_10(VAR_7);
 struct tc_sample VAR_12 = {
  .index = VAR_11->tcf_index,
  .refcnt = FUNC_5(&VAR_11->tcf_refcnt) - VAR_9,
  .bindcnt = FUNC_0(&VAR_11->tcf_bindcnt) - VAR_8,
 };
 struct tcf_t VAR_13;

 FUNC_7(&VAR_11->tcf_lock);
 VAR_12.action = VAR_11->tcf_action;
 if (FUNC_1(VAR_6, VAR_1, sizeof(VAR_12), &VAR_12))
  goto nla_put_failure;

 FUNC_9(&VAR_13, &VAR_11->tcf_tm);
 if (FUNC_2(VAR_6, VAR_4, sizeof(VAR_13), &VAR_13, VAR_0))
  goto nla_put_failure;

 if (FUNC_3(VAR_6, VAR_3, VAR_11->rate))
  goto nla_put_failure;

 if (VAR_11->truncate)
  if (FUNC_3(VAR_6, VAR_5, VAR_11->trunc_size))
   goto nla_put_failure;

 if (FUNC_3(VAR_6, VAR_2, VAR_11->psample_group_num))
  goto nla_put_failure;
 FUNC_8(&VAR_11->tcf_lock);

 return VAR_6->len;

nla_put_failure:
 FUNC_8(&VAR_11->tcf_lock);
 FUNC_4(VAR_6, VAR_10);
 return -1;
}
