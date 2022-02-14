
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cpumask* pcpu; struct cpumask* cbcpu; } ;
struct padata_instance {int lock; TYPE_1__ cpumask; } ;
struct cpumask {int dummy; } ;
typedef struct cpumask* cpumask_var_t ;


 int VAR_0 ;


 int FUNC_0 (struct padata_instance*,struct cpumask*,struct cpumask*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;

int FUNC_5(struct padata_instance *VAR_1, int VAR_2,
         cpumask_var_t VAR_3)
{
 struct cpumask *VAR_4, *VAR_5;
 int VAR_6 = -VAR_0;

 FUNC_2(&VAR_1->lock);
 FUNC_1();

 switch (VAR_2) {
 case 129:
  VAR_4 = VAR_1->cpumask.cbcpu;
  VAR_5 = VAR_3;
  break;
 case 128:
  VAR_5 = VAR_1->cpumask.pcpu;
  VAR_4 = VAR_3;
  break;
 default:
   goto out;
 }

 VAR_6 = FUNC_0(VAR_1, VAR_5, VAR_4);

out:
 FUNC_4();
 FUNC_3(&VAR_1->lock);

 return VAR_6;
}
