
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ip; } ;
struct xt_tproxy_target_info_v1 {int mark_value; int mark_mask; int lport; TYPE_1__ laddr; } ;
struct xt_action_param {struct xt_tproxy_target_info_v1* targinfo; } ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (int ,struct sk_buff*,int ,int ,int ,int ) ;
 int FUNC_1 (struct xt_action_param const*) ;

__attribute__((used)) static unsigned int
FUNC_2(struct sk_buff *VAR_0, const struct xt_action_param *VAR_1)
{
 const struct xt_tproxy_target_info_v1 *VAR_2 = VAR_1->targinfo;

 return FUNC_0(FUNC_1(VAR_1), VAR_0, VAR_2->laddr.ip, VAR_2->lport,
     VAR_2->mark_mask, VAR_2->mark_value);
}
