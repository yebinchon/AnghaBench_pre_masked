
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ debounce_counter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,int ) ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;

void FUNC_1(uint8_t VAR_5, uint8_t VAR_6) {
    VAR_3 = 0;
    debounce_counter_t *VAR_7 = VAR_4;
    for (uint8_t VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
        if (*VAR_7 != VAR_1) {
            if (FUNC_0(VAR_6, *VAR_7, VAR_2) >= VAR_0) {
                *VAR_7 = VAR_1;
            } else {
                VAR_3 = 1;
            }
        }
        VAR_7++;
    }
}
