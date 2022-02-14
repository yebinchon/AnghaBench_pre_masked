
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;



void FUNC_0(uint32_t VAR_0, uint8_t *VAR_1)
{
    if (VAR_0<13)
    {
        *VAR_1 = (0xFF & VAR_0);
    }
    else
    if (VAR_0<=0xFF+13)
    {
        *VAR_1 = 13;
    } else if (VAR_0<=0xFFFF+269)
    {
        *VAR_1 = 14;
    }
}
