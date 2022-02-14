
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 int * FUNC_0 (scalar_t__) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (size_t,int *) ;
 int FUNC_3 (int,char*) ;
 scalar_t__ VAR_0 ;

size_t FUNC_4(cpu_set_t **VAR_1)
{
 cpu_set_t *VAR_2;
 size_t VAR_3;

 VAR_2 = FUNC_0((VAR_0 + 1));
 if (VAR_2 == ((void*)0))
  FUNC_3(3, "CPU_ALLOC");
 VAR_3 = FUNC_1((VAR_0 + 1));
 FUNC_2(VAR_3, VAR_2);

 *VAR_1 = VAR_2;
 return VAR_3;
}
