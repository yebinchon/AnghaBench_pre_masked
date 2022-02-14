
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* VAR_0 ;

uint32_t FUNC_0(void) {
    static unsigned int VAR_1 = 3;

    if (VAR_1 == 31)
        VAR_1 = 0;
    VAR_0[VAR_1] += VAR_0[(VAR_1 + 28) % 31];
    return VAR_0[VAR_1++] / 2;
}
