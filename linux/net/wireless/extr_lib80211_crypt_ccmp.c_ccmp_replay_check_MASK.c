
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ s32 ;



__attribute__((used)) static inline int FUNC_0(u8 *VAR_0, u8 *VAR_1)
{
 u32 VAR_2, VAR_3;
 u32 VAR_4, VAR_5;

 VAR_2 = (VAR_0[0] << 24) | (VAR_0[1] << 16) | (VAR_0[2] << 8) | VAR_0[3];
 VAR_3 = (VAR_0[4] << 8) | VAR_0[5];

 VAR_4 = (VAR_1[0] << 24) | (VAR_1[1] << 16) | (VAR_1[2] << 8) | VAR_1[3];
 VAR_5 = (VAR_1[4] << 8) | VAR_1[5];

 if ((s32)VAR_2 - (s32)VAR_4 < 0 ||
     (VAR_2 == VAR_4 && VAR_3 <= VAR_5))
  return 1;
 return 0;
}
