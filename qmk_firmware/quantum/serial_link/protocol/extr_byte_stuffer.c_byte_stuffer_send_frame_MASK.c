
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;


 int FUNC_0 (scalar_t__,scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__ const*,int) ;

void FUNC_2(uint8_t VAR_0, uint8_t* VAR_1, uint16_t VAR_2) {
    const uint8_t VAR_3 = 0;
    if (VAR_2 > 0) {
        uint16_t VAR_4 = 1;
        uint8_t* VAR_5 = VAR_1 + VAR_2;
        uint8_t* VAR_6 = VAR_1;
        while (VAR_1 < VAR_5) {
            if (VAR_4 == 0xFF) {


                FUNC_0(VAR_0, VAR_6, VAR_1, VAR_4);
                VAR_6 = VAR_1;
                VAR_4 = 1;
            } else {
                if (*VAR_1 == 0) {

                    FUNC_0(VAR_0, VAR_6, VAR_1, VAR_4);
                    VAR_6 = VAR_1 + 1;
                    VAR_4 = 1;
                } else {
                    VAR_4++;
                }
                ++VAR_1;
            }
        }
        FUNC_0(VAR_0, VAR_6, VAR_1, VAR_4);
        FUNC_1(VAR_0, &VAR_3, 1);
    }
}
