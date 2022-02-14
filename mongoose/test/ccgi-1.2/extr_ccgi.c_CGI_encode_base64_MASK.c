
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (int) ;

char *
FUNC_1(const void *VAR_1, int VAR_2) {
    const unsigned char *VAR_3 = VAR_1;
    char *VAR_4;
    int VAR_5 = 0, VAR_6 = 0;
    int VAR_7, VAR_8 = 0;

    if (VAR_3 == 0 || VAR_2 <= 0) {
        return 0;
    }
    VAR_4 = FUNC_0(4 + 4 * VAR_2 / 3);



    for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
        VAR_5 |= VAR_3[VAR_7] << (16 - VAR_6);
        if ((VAR_6 += 8) == 24) {
            VAR_4[VAR_8++] = VAR_0[(VAR_5 >> 18) & 077];
            VAR_4[VAR_8++] = VAR_0[(VAR_5 >> 12) & 077];
            VAR_4[VAR_8++] = VAR_0[(VAR_5 >> 6) & 077];
            VAR_4[VAR_8++] = VAR_0[ VAR_5 & 077];
            VAR_6 = 0;
            VAR_5 = 0;
        }
    }



    if (VAR_6 > 0) {
        for (VAR_7 = 18; VAR_7 >= 0; VAR_7 -= 6) {
            if (VAR_6 > 0) {
                VAR_4[VAR_8++] = VAR_0[(VAR_5 >> VAR_7) & 077];
                VAR_6 -= 6;
            }
            else {
                VAR_4[VAR_8++] = '=';
            }
        }
    }
    VAR_4[VAR_8] = 0;
    return VAR_4;
}
