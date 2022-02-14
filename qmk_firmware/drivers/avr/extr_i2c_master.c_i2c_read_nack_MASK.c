
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
 scalar_t__ FUNC_0 () ;

int16_t FUNC_1(uint16_t VAR_6) {

    VAR_2 = (1 << VAR_5) | (1 << VAR_4);

    uint16_t VAR_7 = FUNC_0();
    while (!(VAR_2 & (1 << VAR_5))) {
        if ((VAR_6 != VAR_1) && ((FUNC_0() - VAR_7) >= VAR_6)) {
            return VAR_0;
        }
    }


    return VAR_3;
}
