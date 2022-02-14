
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_u32 {int invert; } ;
struct xt_action_param {struct xt_u32* matchinfo; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct xt_u32 const*,struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_u32 *VAR_2 = VAR_1->matchinfo;
 bool VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 return VAR_3 ^ VAR_2->invert;
}
