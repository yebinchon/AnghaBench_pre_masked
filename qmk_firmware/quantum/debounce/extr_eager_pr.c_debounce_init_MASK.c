
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int debounce_counter_t ;


 int VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

void FUNC_1(uint8_t VAR_2) {
    VAR_1 = (debounce_counter_t *)FUNC_0(VAR_2 * sizeof(debounce_counter_t));
    for (uint8_t VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_1[VAR_3] = VAR_0;
    }
}
