
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;



__attribute__((used)) static
uint16_t FUNC_0(uint8_t* VAR_0, int VAR_1, int VAR_2)
{
    uint8_t VAR_3 = VAR_0[VAR_1];
    uint8_t VAR_4 = VAR_0[VAR_1+1];

    return (VAR_2) ? ((VAR_4 << 8) | VAR_3) : ((VAR_3 << 8) | VAR_4);
}
