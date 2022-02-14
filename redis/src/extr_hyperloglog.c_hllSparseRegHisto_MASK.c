
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(uint8_t *VAR_1, int VAR_2, int *VAR_3, int* VAR_4) {
    int VAR_5 = 0, VAR_6, VAR_7;
    uint8_t *VAR_8 = VAR_1+VAR_2, *VAR_9 = VAR_1;

    while(VAR_9 < VAR_8) {
        if (FUNC_1(VAR_9)) {
            VAR_6 = FUNC_5(VAR_9);
            VAR_5 += VAR_6;
            VAR_4[0] += VAR_6;
            VAR_9++;
        } else if (FUNC_0(VAR_9)) {
            VAR_6 = FUNC_4(VAR_9);
            VAR_5 += VAR_6;
            VAR_4[0] += VAR_6;
            VAR_9 += 2;
        } else {
            VAR_6 = FUNC_2(VAR_9);
            VAR_7 = FUNC_3(VAR_9);
            VAR_5 += VAR_6;
            VAR_4[VAR_7] += VAR_6;
            VAR_9++;
        }
    }
    if (VAR_5 != VAR_0 && VAR_3) *VAR_3 = 1;
}
