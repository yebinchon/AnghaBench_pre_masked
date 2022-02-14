
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ int8_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

void FUNC_3(uint8_t VAR_0, uint8_t VAR_1, uint8_t VAR_2, uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5) {
    uint8_t VAR_6 = FUNC_0(VAR_3 - VAR_1) > FUNC_0(VAR_2 - VAR_0);
    if (VAR_6) {
        FUNC_2(VAR_0, VAR_1);
        FUNC_2(VAR_2, VAR_3);
    }

    if (VAR_0 > VAR_2) {
        FUNC_2(VAR_0, VAR_2);
        FUNC_2(VAR_1, VAR_3);
    }

    uint8_t VAR_7, VAR_8;
    VAR_7 = VAR_2 - VAR_0;
    VAR_8 = FUNC_0(VAR_3 - VAR_1);

    int8_t VAR_9 = VAR_7 / 2;
    int8_t VAR_10;

    if (VAR_1 < VAR_3) {
        VAR_10 = 1;
    } else {
        VAR_10 = -1;
    }

    for (; VAR_0 < VAR_2; VAR_0++) {
        if (VAR_6) {
            FUNC_1(VAR_1, VAR_0, VAR_4, VAR_5);
        } else {
            FUNC_1(VAR_0, VAR_1, VAR_4, VAR_5);
        }
        VAR_9 -= VAR_8;
        if (VAR_9 < 0) {
            VAR_1 += VAR_10;
            VAR_9 += VAR_7;
        }
    }
}
