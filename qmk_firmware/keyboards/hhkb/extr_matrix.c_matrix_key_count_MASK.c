
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ int8_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;

uint8_t FUNC_2(void) {
    uint8_t VAR_1 = 0;
    for (int8_t VAR_2 = VAR_0 - 1; VAR_2 >= 0; --VAR_2) {
        VAR_1 += FUNC_0(FUNC_1(VAR_2));
    }
    return VAR_1;
}
