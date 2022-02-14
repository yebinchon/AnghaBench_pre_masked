
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(uint32_t VAR_5, uint8_t VAR_6) {
    int8_t VAR_7;
    uint32_t VAR_8;
    uint32_t VAR_9, VAR_10;

    if (VAR_5 < 10)
        VAR_7 = 0;
    else if (VAR_5 < 100)
        VAR_7 = 1;
    else if (VAR_5 < 1000)
        VAR_7 = 2;
    else if (VAR_5 < 10000)
        VAR_7 = 3;
    else if (VAR_5 < 100000)
        VAR_7 = 4;
    else if (VAR_5 < 1000000)
        VAR_7 = 5;
    else if (VAR_5 < 10000000)
        VAR_7 = 6;
    else if (VAR_5 < 100000000)
        VAR_7 = 7;
    else if (VAR_5 < 1000000000)
        VAR_7 = 8;
    else
        VAR_7 = 9;

    while (VAR_7 >= 0) {
        VAR_10 = VAR_7;
        VAR_9 = 1;
        while (VAR_10--) VAR_9 *= 10;
        VAR_8 = VAR_5 / VAR_9;
        VAR_5 -= VAR_8 * VAR_9;
        if (!VAR_8) {
            VAR_1;
            for (VAR_4 = VAR_2 / 4; VAR_4; VAR_4--)
                ;
            VAR_0;
            for (VAR_4 = VAR_2 / 4; VAR_4; VAR_4--)
                ;
            VAR_1;
            for (VAR_4 = VAR_2 / 4; VAR_4; VAR_4--)
                ;
            VAR_0;
            for (VAR_4 = VAR_2 / 4; VAR_4; VAR_4--)
                ;
            VAR_8--;
        } else {
            while (VAR_8 > 0) {
                VAR_1;
                for (VAR_4 = VAR_2; VAR_4; VAR_4--)
                    ;
                VAR_0;
                for (VAR_4 = VAR_2 / 2; VAR_4; VAR_4--)
                    ;
                VAR_8--;
            }
        }

        for (VAR_4 = VAR_3; VAR_4; VAR_4--)
            ;
        VAR_7--;
    }

    if (VAR_6) {
        for (VAR_4 = VAR_3 * 4; VAR_4; VAR_4--)
            ;
    }
}
