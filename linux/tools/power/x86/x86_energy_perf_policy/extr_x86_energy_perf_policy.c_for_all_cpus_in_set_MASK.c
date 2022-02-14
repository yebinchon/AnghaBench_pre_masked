
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cpu_set_t ;


 scalar_t__ FUNC_0 (int,size_t,int *) ;
 int VAR_0 ;

void FUNC_1(size_t VAR_1, cpu_set_t *VAR_2, int (VAR_3)(int))
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 <= VAR_0; ++VAR_4)
  if (FUNC_0(VAR_4, VAR_1, VAR_2))
   VAR_3(VAR_4);
}
