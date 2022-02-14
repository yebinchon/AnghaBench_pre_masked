
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;



__attribute__((used)) static inline bool
FUNC_0(const u8 *VAR_0, u32 VAR_1, u32 VAR_2, u8 VAR_3)
{
 return (VAR_0[VAR_1] & (0x3 << VAR_2)) & (VAR_3 << VAR_2);
}
