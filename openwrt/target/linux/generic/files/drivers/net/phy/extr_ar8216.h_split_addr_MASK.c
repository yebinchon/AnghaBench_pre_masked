
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;



__attribute__((used)) static inline void
FUNC_0(u32 VAR_0, u16 *VAR_1, u16 *VAR_2, u16 *VAR_3)
{
 VAR_0 >>= 1;
 *VAR_1 = VAR_0 & 0x1e;

 VAR_0 >>= 5;
 *VAR_2 = VAR_0 & 0x7;

 VAR_0 >>= 3;
 *VAR_3 = VAR_0 & 0x1ff;
}
