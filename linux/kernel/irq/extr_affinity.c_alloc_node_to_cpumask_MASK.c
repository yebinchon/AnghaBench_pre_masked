
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpumask_var_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int,int,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static cpumask_var_t *FUNC_4(void)
{
 cpumask_var_t *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1, sizeof(cpumask_var_t), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (!FUNC_3(&VAR_2[VAR_3], VAR_0))
   goto out_unwind;
 }

 return VAR_2;

out_unwind:
 while (--VAR_3 >= 0)
  FUNC_0(VAR_2[VAR_3]);
 FUNC_2(VAR_2);
 return ((void*)0);
}
