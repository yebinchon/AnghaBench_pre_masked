
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sugov_tunables {int attr_set; } ;
struct sugov_policy {int tunables_hook; struct sugov_tunables* tunables; } ;
struct cpufreq_policy {struct sugov_policy* governor_data; } ;


 int FUNC_0 (struct cpufreq_policy*) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sugov_policy*) ;
 int FUNC_5 (struct sugov_policy*) ;
 int FUNC_6 (struct sugov_tunables*) ;

__attribute__((used)) static void FUNC_7(struct cpufreq_policy *VAR_1)
{
 struct sugov_policy *VAR_2 = VAR_1->governor_data;
 struct sugov_tunables *VAR_3 = VAR_2->tunables;
 unsigned int VAR_4;

 FUNC_2(&VAR_0);

 VAR_4 = FUNC_1(&VAR_3->attr_set, &VAR_2->tunables_hook);
 VAR_1->governor_data = ((void*)0);
 if (!VAR_4)
  FUNC_6(VAR_3);

 FUNC_3(&VAR_0);

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_0(VAR_1);
}
