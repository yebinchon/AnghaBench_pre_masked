
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG_DOUBLE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__ const) ;
 scalar_t__ FUNC_1 (size_t*) ;
 scalar_t__ FUNC_2 (int) ;

inline LONG_DOUBLE FUNC_3(const LONG_DOUBLE *VAR_1, size_t VAR_2, size_t *VAR_3) {
    const LONG_DOUBLE *VAR_4, *VAR_5 = &VAR_1[VAR_2];
    LONG_DOUBLE VAR_6 = 0;
    size_t VAR_7 = 0;

    for(VAR_4 = VAR_1; VAR_4 < VAR_5 ; VAR_4++) {
        if(FUNC_0(*VAR_4)) {
            VAR_6 += *VAR_4;
            VAR_7++;
        }
    }

    if(FUNC_2(!VAR_7)) VAR_6 = VAR_0;
    if(FUNC_1(VAR_3)) *VAR_3 = VAR_7;

    return VAR_6;
}
