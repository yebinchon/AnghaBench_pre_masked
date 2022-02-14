
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_nfacct_match_info {int nfacct; } ;
struct xt_action_param {struct xt_nfacct_match_info* targinfo; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff const*,int ) ;
 int FUNC_2 (struct xt_action_param*) ;

__attribute__((used)) static bool FUNC_3(const struct sk_buff *VAR_1, struct xt_action_param *VAR_2)
{
 int VAR_3;
 const struct xt_nfacct_match_info *VAR_4 = VAR_2->targinfo;

 FUNC_1(VAR_1, VAR_4->nfacct);

 VAR_3 = FUNC_0(FUNC_2(VAR_2), VAR_4->nfacct);

 return VAR_3 == VAR_0 ? 0 : 1;
}
