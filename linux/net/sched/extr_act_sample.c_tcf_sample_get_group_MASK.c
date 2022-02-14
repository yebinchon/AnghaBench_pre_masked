
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tc_action_priv_destructor ;
struct tcf_sample {int tcf_lock; int psample_group; } ;
struct tc_action {int dummy; } ;
struct psample_group {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct psample_group*) ;
 struct psample_group* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 struct tcf_sample* FUNC_5 (struct tc_action const*) ;

__attribute__((used)) static struct psample_group *
FUNC_6(const struct tc_action *VAR_1,
       tc_action_priv_destructor *VAR_2)
{
 struct tcf_sample *VAR_3 = FUNC_5(VAR_1);
 struct psample_group *VAR_4;

 FUNC_3(&VAR_3->tcf_lock);
 VAR_4 = FUNC_2(VAR_3->psample_group,
       FUNC_0(&VAR_3->tcf_lock));
 if (VAR_4) {
  FUNC_1(VAR_4);
  *VAR_2 = VAR_0;
 }
 FUNC_4(&VAR_3->tcf_lock);

 return VAR_4;
}
