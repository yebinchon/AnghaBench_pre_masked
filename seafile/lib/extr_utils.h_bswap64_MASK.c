
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int uint8_t ;
typedef int uint64_t ;



__attribute__((used)) static inline uint64_t
FUNC_0 (uint64_t VAR_0)
{
    uint64_t VAR_1;
    uint8_t *VAR_2 = (uint8_t *)&VAR_1;

    VAR_2[0]=((VAR_0)>>56)&0xFF;
    VAR_2[1]=((VAR_0)>>48)&0xFF;
    VAR_2[2]=((VAR_0)>>40)&0xFF;
    VAR_2[3]=((VAR_0)>>32)&0xFF;
    VAR_2[4]=((VAR_0)>>24)&0xFF;
    VAR_2[5]=((VAR_0)>>16)&0xFF;
    VAR_2[6]=((VAR_0)>>8)&0xFF;
    VAR_2[7]=(VAR_0)&0xFF;

    return VAR_1;
}
