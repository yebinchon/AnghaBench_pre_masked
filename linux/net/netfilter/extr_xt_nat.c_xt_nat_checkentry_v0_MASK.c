
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {int family; int net; struct nf_nat_ipv4_multi_range_compat* targinfo; } ;
struct nf_nat_ipv4_multi_range_compat {int rangesize; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(const struct xt_tgchk_param *VAR_1)
{
 const struct nf_nat_ipv4_multi_range_compat *VAR_2 = VAR_1->targinfo;

 if (VAR_2->rangesize != 1) {
  FUNC_1("multiple ranges no longer supported\n");
  return -VAR_0;
 }
 return FUNC_0(VAR_1->net, VAR_1->family);
}
