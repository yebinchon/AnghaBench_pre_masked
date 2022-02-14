
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_defact {int tcfd_defdata; } ;
struct tc_action {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tcf_defact* FUNC_1 (struct tc_action*) ;

__attribute__((used)) static void FUNC_2(struct tc_action *VAR_0)
{
 struct tcf_defact *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1->tcfd_defdata);
}
