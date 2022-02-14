
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_ecn_info {int operation; } ;
struct xt_action_param {struct xt_ecn_info* matchinfo; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff const*,struct xt_ecn_info const*) ;
 int FUNC_1 (struct sk_buff const*,struct xt_action_param*) ;

__attribute__((used)) static bool FUNC_2(const struct sk_buff *VAR_3, struct xt_action_param *VAR_4)
{
 const struct xt_ecn_info *VAR_5 = VAR_4->matchinfo;

 if (VAR_5->operation & VAR_2 && !FUNC_0(VAR_3, VAR_5))
  return 0;

 if (VAR_5->operation & (VAR_1 | VAR_0) &&
     !FUNC_1(VAR_3, VAR_4))
  return 0;

 return 1;
}
