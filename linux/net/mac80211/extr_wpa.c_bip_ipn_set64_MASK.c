
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;



__attribute__((used)) static inline void FUNC_0(u8 *VAR_0, u64 VAR_1)
{
 *VAR_0++ = VAR_1;
 *VAR_0++ = VAR_1 >> 8;
 *VAR_0++ = VAR_1 >> 16;
 *VAR_0++ = VAR_1 >> 24;
 *VAR_0++ = VAR_1 >> 32;
 *VAR_0 = VAR_1 >> 40;
}
