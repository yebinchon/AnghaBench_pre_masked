
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;



__attribute__((used)) static inline bool FUNC_0(u32 VAR_0, int VAR_1)
{





 if ((VAR_0 & 0xff00) == 0xff00) {
  u8 VAR_2 = (VAR_0 >> 16) & 0xff;
  if (VAR_2 >= 3 && VAR_2 < 3 + VAR_1)
   return 1;
 }
 return 0;
}
