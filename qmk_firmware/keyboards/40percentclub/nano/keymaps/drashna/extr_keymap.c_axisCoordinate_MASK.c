
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int int8_t ;
typedef scalar_t__ int16_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int16_t FUNC_1(uint8_t VAR_2, uint16_t VAR_3) {
    int8_t VAR_4;
    int16_t VAR_5;
    int16_t VAR_6;

    int16_t VAR_7 = FUNC_0(VAR_2);

    if (VAR_3 == VAR_7) {
        return 0;
    } else if (VAR_3 > VAR_7) {
        VAR_5 = VAR_3 - VAR_7;
        VAR_6 = VAR_3 - VAR_1;
        VAR_4 = -1;
    } else {
        VAR_5 = VAR_7 - VAR_3;
        VAR_6 = VAR_0 - VAR_3;
        VAR_4 = 1;
    }

    float VAR_8 = (float)VAR_5 / VAR_6;
    int16_t VAR_9 = (int16_t)(VAR_8 * 100);
    if (VAR_9 < 0) {
        return 0;
    } else if (VAR_9 > 100) {
        return 100 * VAR_4;
    } else {
        return VAR_9 * VAR_4;
    }
}
