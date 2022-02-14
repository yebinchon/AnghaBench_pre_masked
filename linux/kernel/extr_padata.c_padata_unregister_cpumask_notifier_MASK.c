
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padata_instance {int cpumask_change_notifier; } ;
struct notifier_block {int dummy; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct padata_instance *VAR_0,
           struct notifier_block *VAR_1)
{
 return FUNC_0(
  &VAR_0->cpumask_change_notifier,
  VAR_1);
}
