
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ FLASH_Status ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;

FLASH_Status FUNC_2(uint32_t VAR_2) {
    FLASH_Status VAR_3;


    VAR_3 = FUNC_0();

    while ((VAR_3 == VAR_0) && (VAR_2 != 0x00)) {
        FUNC_1();
        VAR_3 = FUNC_0();
        VAR_2--;
    }
    if (VAR_2 == 0) VAR_3 = VAR_1;

    return VAR_3;
}
