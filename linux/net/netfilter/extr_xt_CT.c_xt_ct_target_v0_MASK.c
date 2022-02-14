
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_ct_target_info {struct nf_conn* ct; } ;
struct xt_action_param {struct xt_ct_target_info* targinfo; } ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;


 unsigned int FUNC_0 (struct sk_buff*,struct nf_conn*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sk_buff *VAR_0,
        const struct xt_action_param *VAR_1)
{
 const struct xt_ct_target_info *VAR_2 = VAR_1->targinfo;
 struct nf_conn *VAR_3 = VAR_2->ct;

 return FUNC_0(VAR_0, VAR_3);
}
