
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

uint32_t FUNC_0(void *VAR_1, unsigned long VAR_2)
{
 unsigned char *VAR_3 = VAR_1;
 unsigned long VAR_4 = VAR_2;
 uint32_t VAR_5 = 0;

 while (VAR_2--)
  VAR_5 = (VAR_5 << 8) ^ VAR_0[((VAR_5 >> 24) ^ *VAR_3++) & 0xFF];

 while (VAR_4) {
  VAR_5 = (VAR_5 << 8) ^ VAR_0[((VAR_5 >> 24) ^ VAR_4) & 0xFF];
  VAR_4 >>= 8;
 }

 return ~VAR_5;
}
