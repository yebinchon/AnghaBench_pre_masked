
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * VAR_0 ;
 int FUNC_0 (int *,float,float,float,float,float,float) ;

__attribute__((used)) static int FUNC_1(float *VAR_1, float *VAR_2)
{
   int VAR_3;
   for (VAR_3=0; VAR_3 < 6; ++VAR_3)
      if (!FUNC_0(&VAR_0[VAR_3], VAR_1[0], VAR_1[1], VAR_1[2], VAR_2[0], VAR_2[1], VAR_2[2]))
         return 0;
   return 1;
}
