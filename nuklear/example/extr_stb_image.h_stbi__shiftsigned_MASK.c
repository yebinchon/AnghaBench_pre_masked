
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0, int VAR_1, int VAR_2)
{
   int VAR_3;
   int VAR_4=0;

   if (VAR_1 < 0) VAR_0 <<= -VAR_1;
   else VAR_0 >>= VAR_1;
   VAR_3 = VAR_0;

   VAR_4 = VAR_2;
   while (VAR_4 < 8) {
      VAR_3 += VAR_0 >> VAR_4;
      VAR_4 += VAR_2;
   }
   return VAR_3;
}
