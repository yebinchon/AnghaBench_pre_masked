
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 () ;

int16_t FUNC_1(uint16_t VAR_7) {

    VAR_2 = (1 << VAR_6) | (1 << VAR_5) | (1 << VAR_4);

    uint16_t VAR_8 = FUNC_0();
    while (!(VAR_2 & (1 << VAR_6))) {
        if ((VAR_7 != VAR_1) && ((FUNC_0() - VAR_8) >= VAR_7)) {
            return VAR_0;
        }
    }


    return VAR_3;
}
