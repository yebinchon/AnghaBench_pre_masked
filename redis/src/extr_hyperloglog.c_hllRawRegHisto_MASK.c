
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;

void FUNC_0(uint8_t *VAR_1, int* VAR_2) {
    uint64_t *VAR_3 = (uint64_t*) VAR_1;
    uint8_t *VAR_4;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_0/8; VAR_5++) {
        if (*VAR_3 == 0) {
            VAR_2[0] += 8;
        } else {
            VAR_4 = (uint8_t*) VAR_3;
            VAR_2[VAR_4[0]]++;
            VAR_2[VAR_4[1]]++;
            VAR_2[VAR_4[2]]++;
            VAR_2[VAR_4[3]]++;
            VAR_2[VAR_4[4]]++;
            VAR_2[VAR_4[5]]++;
            VAR_2[VAR_4[6]]++;
            VAR_2[VAR_4[7]]++;
        }
        VAR_3++;
    }
}
