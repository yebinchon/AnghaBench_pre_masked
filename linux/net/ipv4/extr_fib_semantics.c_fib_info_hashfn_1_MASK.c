
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef unsigned int u32 ;



__attribute__((used)) static unsigned int FUNC_0(int VAR_0, u8 VAR_1, u8 VAR_2,
          u32 VAR_3, u32 VAR_4)
{
 unsigned int VAR_5 = VAR_0;

 VAR_5 ^= (VAR_1 << 8) | VAR_2;
 VAR_5 ^= VAR_3;
 VAR_5 ^= VAR_4;

 return VAR_5;
}
