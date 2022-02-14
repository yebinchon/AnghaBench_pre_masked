
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u32 ;



void FUNC_0(unsigned char *VAR_0, u32 VAR_1, u8 VAR_2)
{
 u32 VAR_3;
 u8 VAR_4;


 VAR_3 = VAR_1 / 8;
 VAR_4 = 0x80 >> (VAR_1 % 8);
 if (VAR_2)
  VAR_0[VAR_3] |= VAR_4;
 else
  VAR_0[VAR_3] &= ~VAR_4;
}
