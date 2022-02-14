
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_skbmod_params {int dummy; } ;
struct tcf_skbmod {int skbmod_p; } ;
struct tc_action {int dummy; } ;


 int FUNC_0 (struct tcf_skbmod_params*,int ) ;
 int VAR_0 ;
 struct tcf_skbmod_params* FUNC_1 (int ,int) ;
 struct tcf_skbmod* FUNC_2 (struct tc_action*) ;

__attribute__((used)) static void FUNC_3(struct tc_action *VAR_1)
{
 struct tcf_skbmod *VAR_2 = FUNC_2(VAR_1);
 struct tcf_skbmod_params *VAR_3;

 VAR_3 = FUNC_1(VAR_2->skbmod_p, 1);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_0);
}
