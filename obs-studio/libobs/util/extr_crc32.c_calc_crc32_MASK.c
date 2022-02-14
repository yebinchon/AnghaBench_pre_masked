
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long uint32_t ;


 unsigned long* VAR_0 ;

uint32_t FUNC_0(uint32_t VAR_1, const void *VAR_2, size_t VAR_3)
{
 const uint8_t *VAR_4;

 VAR_4 = VAR_2;
 VAR_1 = VAR_1 ^ ~0UL;

 while (VAR_3--)
  VAR_1 = VAR_0[(VAR_1 ^ *VAR_4++) & 0xFF] ^ (VAR_1 >> 8);

 return VAR_1 ^ ~0UL;
}
