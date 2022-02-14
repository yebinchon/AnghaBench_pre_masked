
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_tgchk_param {int family; int net; struct nf_nat_range2* targinfo; } ;
struct nf_nat_range2 {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(const struct xt_tgchk_param *VAR_2)
{
 const struct nf_nat_range2 *VAR_3 = VAR_2->targinfo;

 if (!(VAR_3->flags & VAR_1))
  return -VAR_0;
 return FUNC_0(VAR_2->net, VAR_2->family);
}
