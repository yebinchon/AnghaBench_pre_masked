
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_chain {int dummy; } ;
struct tc_action {int act_cookie; int cpu_qstats; int cpu_bstats_hw; int cpu_bstats; int goto_chain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct tc_action*) ;
 struct tcf_chain* FUNC_2 (int ,int) ;
 int FUNC_3 (struct tcf_chain*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct tc_action *VAR_0)
{
 struct tcf_chain *VAR_1 = FUNC_2(VAR_0->goto_chain, 1);

 FUNC_0(VAR_0->cpu_bstats);
 FUNC_0(VAR_0->cpu_bstats_hw);
 FUNC_0(VAR_0->cpu_qstats);

 FUNC_4(&VAR_0->act_cookie, ((void*)0));
 if (VAR_1)
  FUNC_3(VAR_1);

 FUNC_1(VAR_0);
}
