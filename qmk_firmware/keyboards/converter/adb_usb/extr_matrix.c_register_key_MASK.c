
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* VAR_0 ;

__attribute__((used)) inline
static void FUNC_0(uint8_t VAR_1)
{
    uint8_t VAR_2, VAR_3;
    VAR_2 = VAR_1&0x07;
    VAR_3 = (VAR_1>>3)&0x0F;
    if (VAR_1&0x80) {
        VAR_0[VAR_3] &= ~(1<<VAR_2);
    } else {
        VAR_0[VAR_3] |= (1<<VAR_2);
    }
}
