
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0)
{
   static signed char VAR_1[16] = { -1,0,1,0, 2,0,1,0, 3,0,1,0, 2,0,1,0 };
   int VAR_2 = VAR_1[VAR_0 & 15];
   if (VAR_2 >= 0) return VAR_2;
   VAR_2 = VAR_1[(VAR_0 >> 4) & 15];
   if (VAR_2 >= 0) return VAR_2+4;
   return VAR_2;
}
