
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

uint16_t FUNC_2(uint8_t VAR_0) {
    uint16_t VAR_1 = 0, VAR_2 = 0;
    do {
        VAR_2 = (FUNC_1(FUNC_0(VAR_0)) << 8) | FUNC_1(FUNC_0(VAR_0) + 1);
        if (VAR_2 != 0) {
            VAR_1 = (FUNC_1(FUNC_0(VAR_0)) << 8) | FUNC_1(FUNC_0(VAR_0) + 1);
        }
    } while (VAR_1 != VAR_2);
    return VAR_1;
}
