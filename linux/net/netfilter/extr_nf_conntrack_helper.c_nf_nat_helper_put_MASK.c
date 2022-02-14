
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_nat_helper {int module; } ;
struct nf_conntrack_helper {int nat_mod_name; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct nf_conntrack_nat_helper* FUNC_2 (int ) ;

void FUNC_3(struct nf_conntrack_helper *VAR_0)
{
 struct nf_conntrack_nat_helper *VAR_1;

 VAR_1 = FUNC_2(VAR_0->nat_mod_name);
 if (FUNC_0(!VAR_1))
  return;

 FUNC_1(VAR_1->module);
}
