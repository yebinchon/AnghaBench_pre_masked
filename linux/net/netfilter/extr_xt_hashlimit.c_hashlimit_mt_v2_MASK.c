
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_hashlimit_mtinfo2 {int cfg; struct xt_hashlimit_htable* hinfo; } ;
struct xt_hashlimit_htable {int dummy; } ;
struct xt_action_param {struct xt_hashlimit_mtinfo2* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct hashlimit_cfg3 {int dummy; } ;


 int FUNC_0 (struct hashlimit_cfg3*,void*,int) ;
 int FUNC_1 (struct sk_buff const*,struct xt_action_param*,struct xt_hashlimit_htable*,struct hashlimit_cfg3*,int) ;

__attribute__((used)) static bool
FUNC_2(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_hashlimit_mtinfo2 *VAR_2 = VAR_1->matchinfo;
 struct xt_hashlimit_htable *VAR_3 = VAR_2->hinfo;
 struct hashlimit_cfg3 VAR_4 = {};
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4, (void *)&VAR_2->cfg, 2);
 if (VAR_5)
  return VAR_5;

 return FUNC_1(VAR_0, VAR_1, VAR_3, &VAR_4, 2);
}
