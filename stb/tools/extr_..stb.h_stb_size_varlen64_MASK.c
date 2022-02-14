
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int stb_uint64 ;


 int FUNC_0 (int) ;

int FUNC_1(stb_uint64 VAR_0)
{
   if (VAR_0 < 0x00000080) return 1;
   if (VAR_0 < 0x00004000) return 2;
   if (VAR_0 < 0x00200000) return 3;
   if (VAR_0 < 0x10000000) return 4;
   if (VAR_0 < FUNC_0(0x0000000800000000)) return 5;
   if (VAR_0 < FUNC_0(0x0000040000000000)) return 6;
   if (VAR_0 < FUNC_0(0x0002000000000000)) return 7;
   if (VAR_0 < FUNC_0(0x0100000000000000)) return 8;
   return 9;
}
