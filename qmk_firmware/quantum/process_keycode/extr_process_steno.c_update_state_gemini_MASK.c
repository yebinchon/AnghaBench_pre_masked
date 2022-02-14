
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static bool FUNC_0(uint8_t VAR_2, bool VAR_3) {
    int VAR_4 = VAR_2 / 7;
    uint8_t VAR_5 = 1 << (6 - (VAR_2 % 7));
    if (VAR_3) {
        VAR_1[VAR_4] |= VAR_5;
        VAR_0[VAR_4] |= VAR_5;
    } else {
        VAR_1[VAR_4] &= ~VAR_5;
    }
    return 0;
}
