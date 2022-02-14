
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;


 int const VAR_0 ;

u64 FUNC_0(const u8 *VAR_1, const u8 VAR_2)
{
 u64 VAR_3 = 0;

 if (VAR_2 >= VAR_0)
  VAR_3 += ((u64)*VAR_1++) << 40;
 if (VAR_2 > 4)
  VAR_3 += ((u64)*VAR_1++) << 32;
 if (VAR_2 > 3)
  VAR_3 += ((u64)*VAR_1++) << 24;
 if (VAR_2 > 2)
  VAR_3 += ((u64)*VAR_1++) << 16;
 if (VAR_2 > 1)
  VAR_3 += ((u64)*VAR_1++) << 8;
 if (VAR_2 > 0)
  VAR_3 += *VAR_1;

 return VAR_3;
}
