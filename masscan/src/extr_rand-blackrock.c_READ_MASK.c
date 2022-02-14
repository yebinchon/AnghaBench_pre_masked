
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 size_t FUNC_0 (int,int) ;
 int* VAR_0 ;

__attribute__((used)) static inline uint64_t
FUNC_1(uint64_t VAR_1, uint64_t VAR_2, uint64_t VAR_3)
{
    uint64_t VAR_4, VAR_5, VAR_6, VAR_7;



    VAR_2 ^= (VAR_3 << VAR_1) ^ (VAR_3 >> (64 - VAR_1));

    VAR_4 = VAR_0[((((VAR_2)>>(0*8))^VAR_3^VAR_1)&0xFF)]<< 0 | VAR_0[((((VAR_2)>>(1*8))^VAR_3^VAR_1)&0xFF)]<< 8;
    VAR_5 = (VAR_0[((((VAR_2)>>(2*8))^VAR_3^VAR_1)&0xFF)]<<16UL | VAR_0[((((VAR_2)>>(3*8))^VAR_3^VAR_1)&0xFF)]<<24UL)&0x0ffffFFFFUL;
    VAR_6 = VAR_0[((((VAR_2)>>(4*8))^VAR_3^VAR_1)&0xFF)]<< 0 | VAR_0[((((VAR_2)>>(5*8))^VAR_3^VAR_1)&0xFF)]<< 8;
    VAR_7 = (VAR_0[((((VAR_2)>>(6*8))^VAR_3^VAR_1)&0xFF)]<<16UL | VAR_0[((((VAR_2)>>(7*8))^VAR_3^VAR_1)&0xFF)]<<24UL)&0x0ffffFFFFUL;

    VAR_2 = VAR_4 ^ VAR_5 ^ VAR_6<<23UL ^ VAR_7<<33UL;

    return VAR_2;
}
