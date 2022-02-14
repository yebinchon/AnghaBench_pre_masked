
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static inline uint16_t FUNC_7(uint8_t VAR_0) {
    uint16_t VAR_1 = 0;
    FUNC_1();
    FUNC_0();
    FUNC_4(VAR_0 | 0x0C);
    FUNC_2();
    if (!FUNC_5(500)) {
        FUNC_3();
        return -30;
    }
    if (!FUNC_6(500)) {
        FUNC_3();
        return 0;
    }

    uint8_t VAR_2 = 17;
    do {
        uint8_t VAR_3 = (uint8_t)FUNC_5(130);
        if (!VAR_3) goto error;

        uint8_t VAR_4 = (uint8_t)FUNC_6(VAR_3);
        if (!VAR_4) goto error;

        VAR_4 = VAR_3 - VAR_4;
        VAR_3 = 130 - VAR_3;

        VAR_1 <<= 1;
        if (VAR_3 < VAR_4) {
            VAR_1 |= 1;
        } else if (VAR_2 == 17) {
            FUNC_3();
            return -20;
        }
    } while (--VAR_2);



    if (!FUNC_5(351) || FUNC_6(91)) {
        FUNC_3();
        return -21;
    }
    FUNC_3();
    return VAR_1;

error:
    FUNC_3();
    return -VAR_2;
}
