
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_pedit {struct tc_pedit_key* tcfp_keys_ex; struct tc_pedit_key* tcfp_keys; } ;
struct tc_pedit_key {int dummy; } ;
struct tc_action {int dummy; } ;


 int FUNC_0 (struct tc_pedit_key*) ;
 struct tcf_pedit* FUNC_1 (struct tc_action*) ;

__attribute__((used)) static void FUNC_2(struct tc_action *VAR_0)
{
 struct tcf_pedit *VAR_1 = FUNC_1(VAR_0);
 struct tc_pedit_key *VAR_2 = VAR_1->tcfp_keys;

 FUNC_0(VAR_2);
 FUNC_0(VAR_1->tcfp_keys_ex);
}
