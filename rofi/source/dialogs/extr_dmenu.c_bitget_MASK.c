
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static inline unsigned int FUNC_0 ( uint32_t *VAR_0, unsigned int VAR_1 )
{
    uint32_t VAR_2 = VAR_1 % 32;
    uint32_t VAR_3 = VAR_0[VAR_1 / 32];
    return ( VAR_3 >> VAR_2 ) & 1;
}
