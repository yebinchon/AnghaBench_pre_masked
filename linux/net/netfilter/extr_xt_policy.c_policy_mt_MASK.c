
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_policy_info {int flags; } ;
struct xt_action_param {struct xt_policy_info* matchinfo; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff const*,struct xt_policy_info const*,int ) ;
 int FUNC_1 (struct sk_buff const*,struct xt_policy_info const*,int ) ;
 int FUNC_2 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_2, struct xt_action_param *VAR_3)
{
 const struct xt_policy_info *VAR_4 = VAR_3->matchinfo;
 int VAR_5;

 if (VAR_4->flags & VAR_0)
  VAR_5 = FUNC_0(VAR_2, VAR_4, FUNC_2(VAR_3));
 else
  VAR_5 = FUNC_1(VAR_2, VAR_4, FUNC_2(VAR_3));

 if (VAR_5 < 0)
  VAR_5 = VAR_4->flags & VAR_1 ? 1 : 0;
 else if (VAR_4->flags & VAR_1)
  VAR_5 = 0;

 return VAR_5;
}
