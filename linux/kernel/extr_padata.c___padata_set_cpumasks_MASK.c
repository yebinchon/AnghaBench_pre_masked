
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parallel_data {int dummy; } ;
struct TYPE_2__ {int cbcpu; int pcpu; } ;
struct padata_instance {TYPE_1__ cpumask; } ;
typedef int cpumask_var_t ;


 int VAR_0 ;
 int FUNC_0 (struct padata_instance*) ;
 int FUNC_1 (struct padata_instance*) ;
 int FUNC_2 (int ,int ) ;
 struct parallel_data* FUNC_3 (struct padata_instance*,int ,int ) ;
 int FUNC_4 (struct padata_instance*,struct parallel_data*) ;
 int FUNC_5 (struct padata_instance*,int ) ;

__attribute__((used)) static int FUNC_6(struct padata_instance *VAR_1,
     cpumask_var_t VAR_2,
     cpumask_var_t VAR_3)
{
 int VAR_4;
 struct parallel_data *VAR_5;

 VAR_4 = FUNC_5(VAR_1, VAR_2);
 if (!VAR_4) {
  FUNC_1(VAR_1);
  goto out_replace;
 }

 VAR_4 = FUNC_5(VAR_1, VAR_3);
 if (!VAR_4)
  FUNC_1(VAR_1);

out_replace:
 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 FUNC_2(VAR_1->cpumask.pcpu, VAR_2);
 FUNC_2(VAR_1->cpumask.cbcpu, VAR_3);

 FUNC_4(VAR_1, VAR_5);

 if (VAR_4)
  FUNC_0(VAR_1);

 return 0;
}
