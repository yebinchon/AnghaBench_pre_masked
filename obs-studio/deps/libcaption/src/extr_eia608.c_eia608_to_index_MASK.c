
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(uint16_t VAR_0, int* VAR_1, int* VAR_2, int* VAR_3)
{
    (*VAR_2) = (*VAR_3) = -1;
    (*VAR_1) = 0;
    VAR_0 &= 0x7F7F;


    if (FUNC_0(VAR_0)) {

        (*VAR_2) = (VAR_0 >> 8) - 0x20;
        VAR_0 &= 0x00FF;

        if (0x0020 <= VAR_0 && 0x0080 > VAR_0) {
            (*VAR_3) = VAR_0 - 0x20;
            return 2;
        }

        return 1;
    }


    (*VAR_1) = VAR_0 & 0x0800;
    VAR_0 = VAR_0 & 0xF7FF;

    if (FUNC_1(VAR_0)) {

        (*VAR_2) = VAR_0 - 0x1130 + 0x60;
        return 1;
    }

    if (0x1220 <= VAR_0 && 0x1240 > VAR_0) {

        (*VAR_2) = VAR_0 - 0x1220 + 0x70;
        return 1;
    }

    if (0x1320 <= VAR_0 && 0x1340 > VAR_0) {

        (*VAR_2) = VAR_0 - 0x1320 + 0x90;
        return 1;
    }

    return 0;
}
