
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_result {void* goto_tp; } ;
struct tcf_chain {int filter_chain; } ;
struct tc_action {int goto_chain; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct tc_action *VAR_0,
           struct tcf_result *VAR_1)
{
 const struct tcf_chain *VAR_2 = FUNC_0(VAR_0->goto_chain);

 VAR_1->goto_tp = FUNC_0(VAR_2->filter_chain);
}
