
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint ;



int FUNC_0(int VAR_0, stb_uint VAR_1)
{
   if (VAR_1 > (1 << 24)) return 4;
   if (VAR_1 > (1 << 16)) return 3;
   if (VAR_1 > (1 << 8)) return 2;
   return 1;
}
