
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int eia608_style_t ;


 int* VAR_0 ;
 int VAR_1 ;

int FUNC_0(uint16_t VAR_2, int* VAR_3, int* VAR_4, eia608_style_t* VAR_5, int* VAR_6, int* VAR_7)
{
    (*VAR_3) = VAR_0[((0x0700 & VAR_2) >> 7) | ((0x0020 & VAR_2) >> 5)];
    (*VAR_6) = !!(0x0800 & VAR_2);
    (*VAR_7) = 0x0001 & VAR_2;

    if (0x0010 & VAR_2) {
        (*VAR_5) = VAR_1;
        (*VAR_4) = 4 * ((0x000E & VAR_2) >> 1);
    } else {
        (*VAR_5) = (0x000E & VAR_2) >> 1;
        (*VAR_4) = 0;
    }

    return 1;
}
