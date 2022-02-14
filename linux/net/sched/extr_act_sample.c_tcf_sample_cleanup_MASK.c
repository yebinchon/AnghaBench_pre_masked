
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_sample {int psample_group; } ;
struct tc_action {int dummy; } ;
struct psample_group {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct psample_group*) ;
 struct psample_group* FUNC_2 (int ,int) ;
 struct tcf_sample* FUNC_3 (struct tc_action*) ;

__attribute__((used)) static void FUNC_4(struct tc_action *VAR_0)
{
 struct tcf_sample *VAR_1 = FUNC_3(VAR_0);
 struct psample_group *VAR_2;


 VAR_2 = FUNC_2(VAR_1->psample_group, 1);
 FUNC_0(VAR_1->psample_group, ((void*)0));
 if (VAR_2)
  FUNC_1(VAR_2);
}
