
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;



size_t FUNC_0(uint32 VAR_0)
{
   if (VAR_0 == 0) return 0;
   if (VAR_0 < 256) return 1;
   if (VAR_0 < 256*256) return 2;
   if (VAR_0 < 256*256*256) return 3;
   return 4;
}
