
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned int FUNC_0(int VAR_0)
{
   static signed char VAR_1[32] = { 0,0,0,0,1,0,-1,0,1,-1,-1,3,-1,0,-1,2,1,
                                   0,2,0,-1,-4,-1,5,-1,18,-2,15,2,-1,2,0 };
   if (!VAR_1[0]) {
      int VAR_2;
      for (VAR_2=0; VAR_2 < 32; ++VAR_2)
         VAR_1[VAR_2] = (1 << VAR_2) + 2*VAR_1[VAR_2] - 1;
      VAR_1[1] = 2;
      VAR_1[0] = 1;
   }
   if (VAR_0 >= 32) return 0xfffffffb;
   return VAR_1[VAR_0];
}
