
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int i2c_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 () ;

i2c_status_t FUNC_1(uint8_t VAR_14, uint16_t VAR_15) {

    VAR_4 = 0;

    VAR_4 = (1 << VAR_7) | (1 << VAR_8) | (1 << VAR_6);

    uint16_t VAR_16 = FUNC_0();
    while (!(VAR_4 & (1 << VAR_7))) {
        if ((VAR_15 != VAR_3) && ((FUNC_0() - VAR_16) >= VAR_15)) {
            return VAR_2;
        }
    }


    if (((VAR_13 & 0xF8) != VAR_12) && ((VAR_13 & 0xF8) != VAR_11)) {
        return VAR_0;
    }


    VAR_5 = VAR_14;

    VAR_4 = (1 << VAR_7) | (1 << VAR_6);

    VAR_16 = FUNC_0();
    while (!(VAR_4 & (1 << VAR_7))) {
        if ((VAR_15 != VAR_3) && ((FUNC_0() - VAR_16) >= VAR_15)) {
            return VAR_2;
        }
    }


    uint8_t VAR_17 = VAR_13 & 0xF8;
    if ((VAR_17 != VAR_10) && (VAR_17 != VAR_9)) {
        return VAR_0;
    }

    return VAR_1;
}
