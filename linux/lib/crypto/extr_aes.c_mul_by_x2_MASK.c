
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static u32 FUNC_0(u32 VAR_0)
{
 u32 VAR_1 = VAR_0 & 0x3f3f3f3f;
 u32 VAR_2 = VAR_0 & 0x80808080;
 u32 VAR_3 = VAR_0 & 0x40404040;


 return (VAR_1 << 2) ^ (VAR_2 >> 7) * 0x36 ^ (VAR_3 >> 6) * 0x1b;
}
