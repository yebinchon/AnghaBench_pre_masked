
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int const VAR_0 ;

void FUNC_0(const u64 VAR_1, u8 *VAR_2, const u8 VAR_3)
{
 if (VAR_3 >= VAR_0)
  *VAR_2++ = (VAR_1 & 0xFF0000000000ull) >> 40;
 if (VAR_3 > 4)
  *VAR_2++ = (VAR_1 & 0xFF00000000ull) >> 32;
 if (VAR_3 > 3)
  *VAR_2++ = (VAR_1 & 0xFF000000) >> 24;
 if (VAR_3 > 2)
  *VAR_2++ = (VAR_1 & 0xFF0000) >> 16;
 if (VAR_3 > 1)
  *VAR_2++ = (VAR_1 & 0xFF00) >> 8;
 if (VAR_3 > 0)
  *VAR_2++ = (VAR_1 & 0xFF);
}
