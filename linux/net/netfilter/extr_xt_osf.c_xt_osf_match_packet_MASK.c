
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_action_param {int matchinfo; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff const*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct xt_action_param*) ;
 int FUNC_2 (struct xt_action_param*) ;
 int FUNC_3 (struct xt_action_param*) ;
 int FUNC_4 (struct xt_action_param*) ;
 int FUNC_5 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_6(const struct sk_buff *VAR_1, struct xt_action_param *VAR_2)
{
 return FUNC_0(VAR_1, FUNC_1(VAR_2), FUNC_2(VAR_2), FUNC_3(VAR_2),
       FUNC_5(VAR_2), VAR_2->matchinfo, FUNC_4(VAR_2), VAR_0);
}
