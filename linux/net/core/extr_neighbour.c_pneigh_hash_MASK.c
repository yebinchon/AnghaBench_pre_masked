
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static u32 FUNC_0(const void *VAR_1, unsigned int VAR_2)
{
 u32 VAR_3 = *(u32 *)(VAR_1 + VAR_2 - 4);
 VAR_3 ^= (VAR_3 >> 16);
 VAR_3 ^= VAR_3 >> 8;
 VAR_3 ^= VAR_3 >> 4;
 VAR_3 &= VAR_0;
 return VAR_3;
}
