
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_bitset ;


 int FUNC_0 (int*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;

int *FUNC_2(stb_bitset *VAR_0, int VAR_1, int VAR_2)
{
   int *VAR_3 = ((void*)0);
   int VAR_4;
   for (VAR_4=VAR_1; VAR_4 < VAR_2; ++VAR_4)
      if (FUNC_1(VAR_0, VAR_4))
         FUNC_0(VAR_3, VAR_4);
   return VAR_3;
}
