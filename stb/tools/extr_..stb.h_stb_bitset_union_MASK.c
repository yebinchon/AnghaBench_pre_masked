
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_bitset ;


 scalar_t__ FUNC_0 (int) ;

stb_bitset *FUNC_1(stb_bitset *VAR_0, stb_bitset *VAR_1, int VAR_2)
{
   int VAR_3;
   stb_bitset *VAR_4 = (stb_bitset *) FUNC_0(sizeof(*VAR_4) * VAR_2);
   for (VAR_3=0; VAR_3 < VAR_2; ++VAR_3) VAR_4[VAR_3] = VAR_0[VAR_3] | VAR_1[VAR_3];
   return VAR_4;
}
