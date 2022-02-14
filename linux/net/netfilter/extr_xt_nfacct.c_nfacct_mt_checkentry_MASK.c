
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_nfacct_match_info {struct nf_acct* nfacct; int name; } ;
struct xt_mtchk_param {int net; struct xt_nfacct_match_info* matchinfo; } ;
struct nf_acct {int dummy; } ;


 int VAR_0 ;
 struct nf_acct* FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int
FUNC_2(const struct xt_mtchk_param *VAR_1)
{
 struct xt_nfacct_match_info *VAR_2 = VAR_1->matchinfo;
 struct nf_acct *VAR_3;

 VAR_3 = FUNC_0(VAR_1->net, VAR_2->name);
 if (VAR_3 == ((void*)0)) {
  FUNC_1("accounting object `%s' does not exists\n",
        VAR_2->name);
  return -VAR_0;
 }
 VAR_2->nfacct = VAR_3;
 return 0;
}
