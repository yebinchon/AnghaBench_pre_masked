
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (char*) ;

uint16_t FUNC_1(const uint16_t *VAR_0, uint32_t VAR_1)
{
    if ( (((uint32_t)VAR_0) % 4) != 0 )
    {
        FUNC_0("aligned_array is not 4-byte aligned.\n");
        return 0;
    }
    volatile uint32_t VAR_2 = ((uint32_t *)VAR_0)[ VAR_1 / 2 ];
    uint16_t *VAR_3 = (uint16_t *) (&VAR_2);
    return (VAR_1 % 2 == 0) ? VAR_3[ 0 ] : VAR_3[ 1 ];
}
