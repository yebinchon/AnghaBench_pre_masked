
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_chain {int dummy; } ;
struct tc_action {int tcfa_action; int goto_chain; } ;


 int FUNC_0 (int ,struct tcf_chain*,int) ;

struct tcf_chain *FUNC_1(struct tc_action *VAR_0, int VAR_1,
      struct tcf_chain *VAR_2)
{
 VAR_0->tcfa_action = VAR_1;
 FUNC_0(VAR_0->goto_chain, VAR_2, 1);
 return VAR_2;
}
