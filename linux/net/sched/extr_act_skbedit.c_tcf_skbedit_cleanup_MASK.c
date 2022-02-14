
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_skbedit_params {int dummy; } ;
struct tcf_skbedit {int params; } ;
struct tc_action {int dummy; } ;


 int FUNC_0 (struct tcf_skbedit_params*,int ) ;
 int VAR_0 ;
 struct tcf_skbedit_params* FUNC_1 (int ,int) ;
 struct tcf_skbedit* FUNC_2 (struct tc_action*) ;

__attribute__((used)) static void FUNC_3(struct tc_action *VAR_1)
{
 struct tcf_skbedit *VAR_2 = FUNC_2(VAR_1);
 struct tcf_skbedit_params *VAR_3;

 VAR_3 = FUNC_1(VAR_2->params, 1);
 if (VAR_3)
  FUNC_0(VAR_3, VAR_0);
}
