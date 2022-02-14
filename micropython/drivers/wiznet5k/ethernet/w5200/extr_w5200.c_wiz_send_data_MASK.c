
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

void FUNC_4(uint8_t VAR_2, uint8_t *VAR_3, uint16_t VAR_4) {
    if (VAR_4 == 0) {
        return;
    }

    uint16_t VAR_5 = FUNC_2(VAR_2);
    uint16_t VAR_6 = VAR_5 & VAR_0;
    uint32_t VAR_7 = VAR_6 + FUNC_0(VAR_2);

    if (VAR_6 + VAR_4 > VAR_1) {

        uint16_t VAR_8 = VAR_1 - VAR_6;
        FUNC_1(VAR_7, VAR_3, VAR_8);
        FUNC_1(FUNC_0(VAR_2), VAR_3 + VAR_8, VAR_4 - VAR_8);
    } else {
        FUNC_1(VAR_7, VAR_3, VAR_4);
    }

    VAR_5 += VAR_4;
    FUNC_3(VAR_2, VAR_5);
}
