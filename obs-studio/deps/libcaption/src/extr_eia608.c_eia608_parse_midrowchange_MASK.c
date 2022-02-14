
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int eia608_style_t ;



int FUNC_0(uint16_t VAR_0, int* VAR_1, eia608_style_t* VAR_2, int* VAR_3)
{
    (*VAR_1) = !!(0x0800 & VAR_0);

    if (0x1120 == (0x7770 & VAR_0)) {
        (*VAR_2) = (0x000E & VAR_0) >> 1;
        (*VAR_3) = 0x0001 & VAR_0;
    }

    return 1;
}
