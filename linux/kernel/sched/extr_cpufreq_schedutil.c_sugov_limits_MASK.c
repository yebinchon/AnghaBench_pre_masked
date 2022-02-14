
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sugov_policy {int limits_changed; int work_lock; } ;
struct cpufreq_policy {int fast_switch_enabled; struct sugov_policy* governor_data; } ;


 int FUNC_0 (struct cpufreq_policy*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct cpufreq_policy *VAR_0)
{
 struct sugov_policy *VAR_1 = VAR_0->governor_data;

 if (!VAR_0->fast_switch_enabled) {
  FUNC_1(&VAR_1->work_lock);
  FUNC_0(VAR_0);
  FUNC_2(&VAR_1->work_lock);
 }

 VAR_1->limits_changed = 1;
}
