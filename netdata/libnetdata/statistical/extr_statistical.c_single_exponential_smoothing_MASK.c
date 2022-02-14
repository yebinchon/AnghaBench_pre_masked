
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double LONG_DOUBLE ;


 double VAR_0 ;
 int FUNC_0 (double const) ;
 double VAR_1 ;
 int FUNC_1 (double) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

LONG_DOUBLE FUNC_4(const LONG_DOUBLE *VAR_2, size_t VAR_3, LONG_DOUBLE VAR_4) {
    if(FUNC_3(VAR_3 == 0))
        return VAR_0;

    if(FUNC_3(FUNC_1(VAR_4)))
        VAR_4 = VAR_1;

    const LONG_DOUBLE *VAR_5 = VAR_2, *VAR_6 = &VAR_2[VAR_3];
    LONG_DOUBLE VAR_7 = (1.0 - VAR_4) * (*VAR_5);

    for(VAR_5++ ; VAR_5 < VAR_6; VAR_5++) {
        if(FUNC_2(FUNC_0(*VAR_5)))
            VAR_7 = VAR_4 * (*VAR_5) + (1.0 - VAR_4) * VAR_7;
    }

    return VAR_7;
}
