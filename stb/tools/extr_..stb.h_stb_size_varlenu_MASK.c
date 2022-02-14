
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(unsigned int VAR_0)
{
   if (VAR_0 < 0x00000080) return 1;
   if (VAR_0 < 0x00004000) return 2;
   if (VAR_0 < 0x00200000) return 3;
   if (VAR_0 < 0x10000000) return 4;
   return 5;
}
