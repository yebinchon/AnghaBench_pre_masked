
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_conntrack_mtinfo3 {int status_mask; int state_mask; } ;
struct xt_action_param {struct xt_conntrack_mtinfo3* matchinfo; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff const*,struct xt_action_param*,int ,int ) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_conntrack_mtinfo3 *VAR_2 = VAR_1->matchinfo;

 return FUNC_0(VAR_0, VAR_1, VAR_2->state_mask, VAR_2->status_mask);
}
