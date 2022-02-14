
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double LONG_DOUBLE ;


 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int) ;

LONG_DOUBLE FUNC_2(const LONG_DOUBLE *VAR_0, size_t VAR_1, size_t VAR_2) {
    if(FUNC_1(VAR_2 <= 0))
        return 0.0;

    size_t VAR_3, VAR_4;
    LONG_DOUBLE VAR_5 = 0, VAR_6 = 0;
    LONG_DOUBLE VAR_7[VAR_2];

    for(VAR_4 = 0; VAR_4 < VAR_2 ; VAR_4++)
        VAR_7[VAR_4] = 0.0;

    for(VAR_3 = 0, VAR_4 = 0; VAR_3 < VAR_1; VAR_3++) {
        LONG_DOUBLE VAR_8 = VAR_0[VAR_3];
        if(FUNC_1(!FUNC_0(VAR_8))) continue;

        if(FUNC_1(VAR_4 < VAR_2)) {
            VAR_5 += VAR_8;
            VAR_6 = (VAR_4 == VAR_2 - 1) ? VAR_5 / (LONG_DOUBLE)VAR_2 : 0;
        }
        else {
            VAR_5 = VAR_5 - VAR_7[VAR_4 % VAR_2] + VAR_8;
            VAR_6 = VAR_5 / (LONG_DOUBLE)VAR_2;
        }

        VAR_7[VAR_4 % VAR_2] = VAR_8;
        VAR_4++;
    }

    return VAR_6;
}
