
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_defact {int tcf_lock; int tcf_tm; int tcfd_defdata; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_defact {int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,struct tc_defact*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,unsigned char*) ;
 int FUNC_5 (int *) ;
 unsigned char* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct tcf_t*,int *) ;
 struct tcf_defact* FUNC_10 (struct tc_action*) ;

__attribute__((used)) static int FUNC_11(struct sk_buff *VAR_4, struct tc_action *VAR_5,
    int VAR_6, int VAR_7)
{
 unsigned char *VAR_8 = FUNC_6(VAR_4);
 struct tcf_defact *VAR_9 = FUNC_10(VAR_5);
 struct tc_defact VAR_10 = {
  .index = VAR_9->tcf_index,
  .refcnt = FUNC_5(&VAR_9->tcf_refcnt) - VAR_7,
  .bindcnt = FUNC_0(&VAR_9->tcf_bindcnt) - VAR_6,
 };
 struct tcf_t VAR_11;

 FUNC_7(&VAR_9->tcf_lock);
 VAR_10.action = VAR_9->tcf_action;
 if (FUNC_1(VAR_4, VAR_2, sizeof(VAR_10), &VAR_10) ||
     FUNC_3(VAR_4, VAR_0, VAR_9->tcfd_defdata))
  goto nla_put_failure;

 FUNC_9(&VAR_11, &VAR_9->tcf_tm);
 if (FUNC_2(VAR_4, VAR_3, sizeof(VAR_11), &VAR_11, VAR_1))
  goto nla_put_failure;
 FUNC_8(&VAR_9->tcf_lock);

 return VAR_4->len;

nla_put_failure:
 FUNC_8(&VAR_9->tcf_lock);
 FUNC_4(VAR_4, VAR_8);
 return -1;
}
