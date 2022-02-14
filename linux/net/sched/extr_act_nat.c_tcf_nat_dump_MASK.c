
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_t {int dummy; } ;
struct tcf_nat {int tcf_lock; int tcf_tm; int tcf_action; int flags; int mask; int new_addr; int old_addr; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tc_nat {int action; int flags; int mask; int new_addr; int old_addr; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,struct tc_nat*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 int FUNC_3 (struct sk_buff*,unsigned char*) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct tcf_t*,int *) ;
 struct tcf_nat* FUNC_9 (struct tc_action*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_3, struct tc_action *VAR_4,
   int VAR_5, int VAR_6)
{
 unsigned char *VAR_7 = FUNC_5(VAR_3);
 struct tcf_nat *VAR_8 = FUNC_9(VAR_4);
 struct tc_nat VAR_9 = {
  .index = VAR_8->tcf_index,
  .refcnt = FUNC_4(&VAR_8->tcf_refcnt) - VAR_6,
  .bindcnt = FUNC_0(&VAR_8->tcf_bindcnt) - VAR_5,
 };
 struct tcf_t VAR_10;

 FUNC_6(&VAR_8->tcf_lock);
 VAR_9.old_addr = VAR_8->old_addr;
 VAR_9.new_addr = VAR_8->new_addr;
 VAR_9.mask = VAR_8->mask;
 VAR_9.flags = VAR_8->flags;
 VAR_9.action = VAR_8->tcf_action;

 if (FUNC_1(VAR_3, VAR_1, sizeof(VAR_9), &VAR_9))
  goto nla_put_failure;

 FUNC_8(&VAR_10, &VAR_8->tcf_tm);
 if (FUNC_2(VAR_3, VAR_2, sizeof(VAR_10), &VAR_10, VAR_0))
  goto nla_put_failure;
 FUNC_7(&VAR_8->tcf_lock);

 return VAR_3->len;

nla_put_failure:
 FUNC_7(&VAR_8->tcf_lock);
 FUNC_3(VAR_3, VAR_7);
 return -1;
}
