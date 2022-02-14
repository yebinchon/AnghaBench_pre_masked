
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__*,int) ;
 int FUNC_1 (scalar_t__,scalar_t__*,int) ;

void FUNC_2(uint8_t VAR_3, uint8_t* VAR_4, uint16_t VAR_5) {
    if (VAR_2) {
        if (VAR_3 == VAR_0) {
            FUNC_0(VAR_4[VAR_5 - 1], VAR_4, VAR_5 - 1);
        }
    } else {
        if (VAR_3 == VAR_1) {
            if (VAR_4[VAR_5 - 1] & 1) {
                FUNC_0(0, VAR_4, VAR_5 - 1);
            }
            VAR_4[VAR_5 - 1] >>= 1;
            FUNC_1(VAR_0, VAR_4, VAR_5);
        } else {
            VAR_4[VAR_5 - 1]++;
            FUNC_1(VAR_1, VAR_4, VAR_5);
        }
    }
}
