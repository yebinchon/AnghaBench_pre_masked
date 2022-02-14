
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_nfacct_match_info {int nfacct; } ;
struct xt_mtdtor_param {struct xt_nfacct_match_info* matchinfo; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(const struct xt_mtdtor_param *VAR_0)
{
 const struct xt_nfacct_match_info *VAR_1 = VAR_0->matchinfo;

 FUNC_0(VAR_1->nfacct);
}
