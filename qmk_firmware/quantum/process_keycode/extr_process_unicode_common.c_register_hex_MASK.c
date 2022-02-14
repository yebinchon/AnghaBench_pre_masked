
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void FUNC_2(uint16_t VAR_0) {
    for (int VAR_1 = 3; VAR_1 >= 0; VAR_1--) {
        uint8_t VAR_2 = ((VAR_0 >> (VAR_1 * 4)) & 0xF);
        FUNC_1(FUNC_0(VAR_2));
    }
}
