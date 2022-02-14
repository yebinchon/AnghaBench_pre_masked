
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ uint32_t ;


 size_t* VAR_0 ;
 size_t* VAR_1 ;

void FUNC_0(uint8_t* VAR_2, uint8_t VAR_3, uint32_t VAR_4) {
    while (VAR_4 > 0) {
        if (VAR_2[0] != 0) {
            if (VAR_0[VAR_2[0]] <= VAR_3)
                VAR_2[0] = VAR_1[(VAR_0[VAR_2[0]] + (255 - VAR_3)) % 255];
            else
                VAR_2[0] = VAR_1[(VAR_0[VAR_2[0]] - VAR_3) % 255];
        }

        VAR_2++;
        VAR_4--;
    }
}
