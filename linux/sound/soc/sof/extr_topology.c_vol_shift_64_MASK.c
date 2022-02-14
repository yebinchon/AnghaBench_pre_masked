
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;



__attribute__((used)) static inline u32 FUNC_0(u64 VAR_0, u32 VAR_1)
{

 if (VAR_1 > 32)
  VAR_1 = 32;

 if (VAR_1 == 0)
  return (u32)VAR_0;

 return (u32)(((VAR_0 >> (VAR_1 - 1)) + 1) >> 1);
}
