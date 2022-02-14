
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,scalar_t__) ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (scalar_t__) ;

void FUNC_2(uint8_t VAR_3, uint8_t VAR_4, uint8_t VAR_5, uint8_t VAR_6, uint8_t VAR_7, uint8_t VAR_8) {


    uint8_t VAR_9, VAR_10, VAR_11;
    uint8_t VAR_12, VAR_13, VAR_14;
    uint16_t VAR_15, VAR_16, VAR_17, VAR_18;

    if ((VAR_8 >= VAR_1) || (VAR_8 < 0)) return;

    uint8_t VAR_19 = VAR_8;
    uint8_t VAR_20 = FUNC_1(VAR_2[VAR_19] + 0);
    uint8_t VAR_21 = FUNC_1(VAR_2[VAR_19] + 1);
    uint8_t VAR_22 = FUNC_1(VAR_2[VAR_19] + 2);
    uint8_t VAR_23 = FUNC_1(VAR_2[VAR_19] + 3);
    uint16_t VAR_24 = (FUNC_1(VAR_2[VAR_19] + 4) * 100) + FUNC_1(VAR_2[VAR_19] + 5);

    if ((VAR_5 < VAR_22) || (VAR_5 > (VAR_22 + VAR_23 - 1)))
        return;

    VAR_11 = VAR_5 - VAR_22;


    VAR_9 = VAR_21 / 8;
    if (VAR_9 <= 1) VAR_9 = 1;


    if (VAR_9 == 1) {
        for (VAR_12 = 0; VAR_12 < VAR_20 + 1; VAR_12++) {
            if (VAR_12 == VAR_20)
                VAR_14 = 0;
            else
                VAR_14 = FUNC_1(VAR_2[VAR_19] + VAR_0 + (VAR_11 * VAR_20) + VAR_12);

            for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
                if (VAR_14 & 0x1) {
                    FUNC_0(VAR_3 + VAR_12, VAR_4 + VAR_13, VAR_6, VAR_7);
                } else {
                    FUNC_0(VAR_3 + VAR_12, VAR_4 + VAR_13, !VAR_6, VAR_7);
                }

                VAR_14 >>= 1;
            }
        }
        return;
    }



    VAR_15 = VAR_24 / VAR_20;
    VAR_16 = VAR_11 % VAR_15;
    VAR_17 = (int)(VAR_11 / VAR_15);
    VAR_18 = (VAR_17 * VAR_24 * (VAR_21 / 8)) + (VAR_16 * VAR_20);


    for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
        for (VAR_12 = 0; VAR_12 < VAR_20; VAR_12++) {
            VAR_14 = FUNC_1(VAR_2[VAR_19] + VAR_0 + (VAR_18 + VAR_12 + (VAR_10 * VAR_24)));
            for (VAR_13 = 0; VAR_13 < 8; VAR_13++) {
                if (VAR_14 & 0x1) {
                    FUNC_0(VAR_3 + VAR_12, VAR_4 + VAR_13 + (VAR_10 * 8), VAR_6, VAR_7);
                } else {
                    FUNC_0(VAR_3 + VAR_12, VAR_4 + VAR_13 + (VAR_10 * 8), !VAR_6, VAR_7);
                }
                VAR_14 >>= 1;
            }
        }
    }
}
