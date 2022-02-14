
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int i2c_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 () ;

i2c_status_t FUNC_1(uint8_t VAR_10, uint16_t VAR_11) {

    VAR_5 = VAR_10;

    VAR_4 = (1 << VAR_7) | (1 << VAR_6);

    uint16_t VAR_12 = FUNC_0();
    while (!(VAR_4 & (1 << VAR_7))) {
        if ((VAR_11 != VAR_3) && ((FUNC_0() - VAR_12) >= VAR_11)) {
            return VAR_2;
        }
    }

    if ((VAR_9 & 0xF8) != VAR_8) {
        return VAR_0;
    }

    return VAR_1;
}
