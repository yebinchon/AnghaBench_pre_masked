
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_0(uint32_t VAR_4) {
    int8_t VAR_5;
    uint32_t VAR_6;
    uint32_t VAR_7, VAR_8;

    if (VAR_4 < 10)
        VAR_5 = 0;
    else if (VAR_4 < 100)
        VAR_5 = 1;
    else if (VAR_4 < 1000)
        VAR_5 = 2;
    else if (VAR_4 < 10000)
        VAR_5 = 3;
    else if (VAR_4 < 100000)
        VAR_5 = 4;
    else if (VAR_4 < 1000000)
        VAR_5 = 5;
    else if (VAR_4 < 10000000)
        VAR_5 = 6;
    else if (VAR_4 < 100000000)
        VAR_5 = 7;
    else if (VAR_4 < 1000000000)
        VAR_5 = 8;
    else
        VAR_5 = 9;

    while (VAR_5 >= 0) {
        VAR_8 = VAR_5;
        VAR_7 = 1;
        while (VAR_8--) VAR_7 *= 10;
        VAR_6 = VAR_4 / VAR_7;
        VAR_4 -= VAR_6 * VAR_7;
        if (!VAR_6) {
            VAR_1;
            VAR_0;
            VAR_1;
            VAR_0;
            VAR_6--;
        } else {
            while (VAR_6 > 0) {
                VAR_1;
                VAR_0;
                VAR_6--;
            }
        }

        VAR_5--;
    }

    for (VAR_3 = VAR_2; VAR_3; VAR_3--)
        ;
}
