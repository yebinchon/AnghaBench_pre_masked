
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(uint32_t VAR_1, uint32_t *VAR_2)
{





 register uint32_t *VAR_3 = VAR_2;
 register uint32_t *VAR_4 = VAR_2;
 register int VAR_5 = 1;

 *VAR_3++ = VAR_1 & 0xffffffffU;
 for( ; VAR_5 < VAR_0; ++VAR_5 ) {
  *VAR_3++ = ( 1812433253U * ( *VAR_4 ^ (*VAR_4 >> 30) ) + VAR_5 ) & 0xffffffffU;
  VAR_4++;
 }
}
