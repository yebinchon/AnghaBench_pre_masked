
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_ct_params {int rcu; } ;
struct tcf_ct {int params; } ;
struct tc_action {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 struct tcf_ct_params* FUNC_1 (int ,int) ;
 int VAR_0 ;
 struct tcf_ct* FUNC_2 (struct tc_action*) ;

__attribute__((used)) static void FUNC_3(struct tc_action *VAR_1)
{
 struct tcf_ct_params *VAR_2;
 struct tcf_ct *VAR_3 = FUNC_2(VAR_1);

 VAR_2 = FUNC_1(VAR_3->params, 1);
 if (VAR_2)
  FUNC_0(&VAR_2->rcu, VAR_0);
}
