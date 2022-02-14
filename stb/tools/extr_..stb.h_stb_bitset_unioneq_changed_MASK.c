
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_bitset ;



int FUNC_0(stb_bitset *VAR_0, stb_bitset *VAR_1, int VAR_2)
{
   int VAR_3, VAR_4=0;
   for (VAR_3=0; VAR_3 < VAR_2; ++VAR_3) {
      stb_bitset VAR_5 = VAR_0[VAR_3] | VAR_1[VAR_3];
      if (VAR_5 != VAR_0[VAR_3]) {
         VAR_0[VAR_3] = VAR_5;
         VAR_4 = 1;
      }
   }
   return VAR_4;
}
