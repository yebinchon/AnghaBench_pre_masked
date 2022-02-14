
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int t ;
struct tcf_vlan_params {scalar_t__ tcfv_action; int tcfv_push_prio; int tcfv_push_proto; int tcfv_push_vid; } ;
struct tcf_vlan {int tcf_lock; int tcf_tm; int vlan_p; int tcf_action; int tcf_bindcnt; int tcf_refcnt; int tcf_index; } ;
struct tcf_t {int dummy; } ;
struct tc_vlan {scalar_t__ v_action; int action; int bindcnt; int refcnt; int index; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
typedef int opt ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int,struct tc_vlan*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*,unsigned char*) ;
 struct tcf_vlan_params* FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 unsigned char* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_vlan* FUNC_14 (struct tc_action*) ;

__attribute__((used)) static int FUNC_15(struct sk_buff *VAR_8, struct tc_action *VAR_9,
    int VAR_10, int VAR_11)
{
 unsigned char *VAR_12 = FUNC_10(VAR_8);
 struct tcf_vlan *VAR_13 = FUNC_14(VAR_9);
 struct tcf_vlan_params *VAR_14;
 struct tc_vlan VAR_15 = {
  .index = VAR_13->tcf_index,
  .refcnt = FUNC_9(&VAR_13->tcf_refcnt) - VAR_11,
  .bindcnt = FUNC_0(&VAR_13->tcf_bindcnt) - VAR_10,
 };
 struct tcf_t VAR_16;

 FUNC_11(&VAR_13->tcf_lock);
 VAR_15.action = VAR_13->tcf_action;
 VAR_14 = FUNC_8(VAR_13->vlan_p, FUNC_1(&VAR_13->tcf_lock));
 VAR_15.v_action = VAR_14->tcfv_action;
 if (FUNC_2(VAR_8, VAR_3, sizeof(VAR_15), &VAR_15))
  goto nla_put_failure;

 if ((VAR_14->tcfv_action == VAR_1 ||
      VAR_14->tcfv_action == VAR_0) &&
     (FUNC_5(VAR_8, VAR_4, VAR_14->tcfv_push_vid) ||
      FUNC_4(VAR_8, VAR_6,
     VAR_14->tcfv_push_proto) ||
      (FUNC_6(VAR_8, VAR_5,
           VAR_14->tcfv_push_prio))))
  goto nla_put_failure;

 FUNC_13(&VAR_16, &VAR_13->tcf_tm);
 if (FUNC_3(VAR_8, VAR_7, sizeof(VAR_16), &VAR_16, VAR_2))
  goto nla_put_failure;
 FUNC_12(&VAR_13->tcf_lock);

 return VAR_8->len;

nla_put_failure:
 FUNC_12(&VAR_13->tcf_lock);
 FUNC_7(VAR_8, VAR_12);
 return -1;
}
