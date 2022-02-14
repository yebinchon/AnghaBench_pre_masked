
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;
typedef int FILE ;


 unsigned int FUNC_0 (int *) ;

int FUNC_1(FILE *VAR_0, int VAR_1, stb_uint VAR_2)
{
   unsigned int VAR_3=0;
   if (VAR_2 > (1 << 24)) VAR_3 += FUNC_0(VAR_0) << 24;
   if (VAR_2 > (1 << 16)) VAR_3 += FUNC_0(VAR_0) << 16;
   if (VAR_2 > (1 << 8)) VAR_3 += FUNC_0(VAR_0) << 8;
   VAR_3 += FUNC_0(VAR_0);
   return VAR_1+VAR_3;
}
