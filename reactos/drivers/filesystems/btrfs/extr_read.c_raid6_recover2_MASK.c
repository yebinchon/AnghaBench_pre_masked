
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef int ULONG ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int*,int*,int) ;
 int FUNC_3 (int*,int,int) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;

void FUNC_8(uint8_t* VAR_0, uint16_t VAR_1, ULONG VAR_2, uint16_t VAR_3, uint16_t VAR_4, uint8_t* VAR_5) {
    if (VAR_3 == VAR_1 - 2 || VAR_4 == VAR_1 - 2) {
        uint16_t VAR_6 = VAR_3 == (VAR_1 - 2) ? VAR_4 : VAR_3;
        uint16_t VAR_7;

        VAR_7 = VAR_1 - 3;

        if (VAR_7 == VAR_6)
            FUNC_1(VAR_5, VAR_2);
        else
            FUNC_0(VAR_5, VAR_0 + (VAR_7 * VAR_2), VAR_2);

        do {
            VAR_7--;

            FUNC_4(VAR_5, VAR_2);

            if (VAR_7 != VAR_6)
                FUNC_2(VAR_5, VAR_0 + (VAR_7 * VAR_2), VAR_2);
        } while (VAR_7 > 0);

        FUNC_2(VAR_5, VAR_0 + ((VAR_1 - 1) * VAR_2), VAR_2);

        if (VAR_6 != 0)
            FUNC_3(VAR_5, (uint8_t)VAR_6, VAR_2);
    } else {
        uint16_t VAR_8, VAR_9, VAR_10;
        uint8_t VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, *VAR_16, *VAR_17, *VAR_18, *VAR_19;
        uint32_t VAR_20;

        VAR_10 = VAR_1 - 3;

        VAR_18 = VAR_5 + VAR_2;
        VAR_19 = VAR_5;

        if (VAR_10 == VAR_3 || VAR_10 == VAR_4) {
            FUNC_1(VAR_19, VAR_2);
            FUNC_1(VAR_18, VAR_2);

            if (VAR_10 == VAR_3)
                VAR_8 = VAR_10;
            else
                VAR_9 = VAR_10;
        } else {
            FUNC_0(VAR_19, VAR_0 + (VAR_10 * VAR_2), VAR_2);
            FUNC_0(VAR_18, VAR_0 + (VAR_10 * VAR_2), VAR_2);
        }

        do {
            VAR_10--;

            FUNC_4(VAR_19, VAR_2);

            if (VAR_10 != VAR_3 && VAR_10 != VAR_4) {
                FUNC_2(VAR_19, VAR_0 + (VAR_10 * VAR_2), VAR_2);
                FUNC_2(VAR_18, VAR_0 + (VAR_10 * VAR_2), VAR_2);
            } else if (VAR_10 == VAR_3)
                VAR_8 = VAR_10;
            else if (VAR_10 == VAR_4)
                VAR_9 = VAR_10;
        } while (VAR_10 > 0);

        VAR_11 = FUNC_7(VAR_9 > VAR_8 ? (VAR_9-VAR_8) : (255-VAR_8+VAR_9));
        VAR_12 = FUNC_7(255-VAR_8);

        VAR_13 = FUNC_5(1, VAR_11 ^ 1);
        VAR_14 = FUNC_6(VAR_11, VAR_13);
        VAR_15 = FUNC_6(VAR_12, VAR_13);

        VAR_16 = VAR_0 + ((VAR_1 - 2) * VAR_2);
        VAR_17 = VAR_0 + ((VAR_1 - 1) * VAR_2);

        for (VAR_20 = 0; VAR_20 < VAR_2; VAR_20++) {
            *VAR_19 = FUNC_6(VAR_14, *VAR_16 ^ *VAR_18) ^ FUNC_6(VAR_15, *VAR_17 ^ *VAR_19);

            VAR_16++;
            VAR_17++;
            VAR_18++;
            VAR_19++;
        }

        FUNC_2(VAR_5 + VAR_2, VAR_5, VAR_2);
        FUNC_2(VAR_5 + VAR_2, VAR_0 + ((VAR_1 - 2) * VAR_2), VAR_2);
    }
}
