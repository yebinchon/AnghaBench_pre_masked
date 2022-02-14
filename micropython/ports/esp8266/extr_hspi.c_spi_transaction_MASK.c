
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (int) ;
 int VAR_19 ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int) ;

uint32_t FUNC_11(uint8_t VAR_20, uint8_t VAR_21, uint16_t VAR_22,
                         uint32_t VAR_23, uint32_t VAR_24,
                         uint32_t VAR_25, uint32_t VAR_26,
                         uint32_t VAR_27, uint32_t VAR_28) {
    while (FUNC_10(VAR_20)) {};



    FUNC_0(FUNC_5(VAR_20), VAR_16 | VAR_13 |
                        VAR_6 | VAR_3 | VAR_10);




    if (VAR_27) {
        if (VAR_25) {
            FUNC_2(FUNC_5(VAR_20), VAR_0);
        } else {
            FUNC_2(FUNC_5(VAR_20), VAR_13);
        }
    }
    if (VAR_28) {
        FUNC_2(FUNC_5(VAR_20), VAR_10);
    }


    FUNC_9(FUNC_6(VAR_20),

        ((VAR_23 - 1) & VAR_4) << VAR_5 |

        ((VAR_25 - 1) & VAR_17) << VAR_18 |

        ((VAR_27 - 1) & VAR_14) << VAR_15 |

        ((VAR_28 - 1) & VAR_11) << VAR_12);


    if (VAR_21) {

        FUNC_2(FUNC_5(VAR_20), VAR_6);

        uint16_t VAR_29 = VAR_22 << (16-VAR_21);

        VAR_29 = ((VAR_29>>8)&0xff) | ((VAR_29<<8)&0xff00);
        FUNC_9(FUNC_7(VAR_20), (
            (((VAR_21 - 1) & VAR_7) << VAR_8) |
            (VAR_29 & VAR_9)
        ));
    }


    if (VAR_23) {

        FUNC_2(FUNC_5(VAR_20), VAR_3);

        FUNC_9(FUNC_3(VAR_20), VAR_24 << (32 - VAR_23));
    }


    if (VAR_25) {

        FUNC_2(FUNC_5(VAR_20), VAR_16);

    if (FUNC_1(FUNC_5(VAR_20))&VAR_19) {
        FUNC_9(FUNC_8(VAR_20), VAR_26 << (32 - VAR_25));
    } else {
        uint8_t VAR_30 = VAR_25%8;

        if (VAR_30) {
            FUNC_9(FUNC_8(VAR_20), (
                (0xFFFFFFFF << (VAR_25 - VAR_30) & VAR_26)
                    << (8-VAR_30) |
                ((0xFFFFFFFF >> (32 - (VAR_25 - VAR_30)))
                    & VAR_26)
            ));
        } else {
            FUNC_9(FUNC_8(VAR_20), VAR_26);
        }
    }
}


    FUNC_2(FUNC_4(VAR_20), VAR_2);


    if (VAR_27) {
        while (FUNC_10(VAR_20)) {};
        if (FUNC_1(FUNC_5(VAR_20))&VAR_1) {

            return FUNC_1(FUNC_8(VAR_20)) >> (32 - VAR_27);
        } else {


            return FUNC_1(FUNC_8(VAR_20));
        }
        return 0;
    }


    return 1;
}
