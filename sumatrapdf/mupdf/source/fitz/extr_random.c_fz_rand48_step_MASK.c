
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
typedef unsigned int uint16_t ;



__attribute__((used)) static uint64_t FUNC_0(uint16_t *VAR_0, uint16_t *VAR_1)
{
 uint64_t VAR_2, VAR_3;
 VAR_3 = VAR_0[0] | (VAR_0[1]+0U)<<16 | (VAR_0[2]+0ULL)<<32;
 VAR_2 = VAR_1[0] | (VAR_1[1]+0U)<<16 | (VAR_1[2]+0ULL)<<32;
 VAR_3 = VAR_2*VAR_3 + VAR_1[3];
 VAR_0[0] = VAR_3;
 VAR_0[1] = VAR_3>>16;
 VAR_0[2] = VAR_3>>32;
 return VAR_3 & 0xffffffffffffull;
}
