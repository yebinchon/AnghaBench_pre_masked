
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int debounce_counter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(uint8_t VAR_3) {
    VAR_2 = (debounce_counter_t *)FUNC_0(VAR_3 * VAR_1 * sizeof(debounce_counter_t));
    int VAR_4 = 0;
    for (uint8_t VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        for (uint8_t VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
            VAR_2[VAR_4++] = VAR_0;
        }
    }
}
