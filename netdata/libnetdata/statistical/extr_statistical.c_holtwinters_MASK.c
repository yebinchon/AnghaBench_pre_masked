
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double LONG_DOUBLE ;


 int FUNC_0 (double const*,int,double,double,double,int*,int*,double*,double*,double*,double*,double*,double*,double*) ;
 double* FUNC_1 (size_t,int) ;
 int FUNC_2 (double*) ;
 int FUNC_3 (double) ;
 scalar_t__ FUNC_4 (int ) ;

LONG_DOUBLE FUNC_5(const LONG_DOUBLE *VAR_0, size_t VAR_1, LONG_DOUBLE VAR_2, LONG_DOUBLE VAR_3, LONG_DOUBLE VAR_4, LONG_DOUBLE *VAR_5) {
    if(FUNC_4(FUNC_3(VAR_2)))
        VAR_2 = 0.3;

    if(FUNC_4(FUNC_3(VAR_3)))
        VAR_3 = 0.05;

    if(FUNC_4(FUNC_3(VAR_4)))
        VAR_4 = 0;

    int VAR_6 = 0;
    int VAR_7 = 0;
    LONG_DOUBLE VAR_8 = VAR_0[0];
    LONG_DOUBLE VAR_9 = 0;
    LONG_DOUBLE VAR_10[] = {};

    LONG_DOUBLE VAR_11 = 0.0;
    size_t VAR_12 = VAR_1;
    LONG_DOUBLE *VAR_13 = FUNC_1(VAR_12, sizeof(LONG_DOUBLE));
    LONG_DOUBLE *VAR_14 = FUNC_1(VAR_12, sizeof(LONG_DOUBLE));
    LONG_DOUBLE *VAR_15 = FUNC_1(VAR_12, sizeof(LONG_DOUBLE));

    int VAR_16 = FUNC_0(
            VAR_0,
            (int)VAR_1,
            VAR_2,
            VAR_3,
            VAR_4,
            &VAR_6,
            &VAR_7,
            &VAR_8,
            &VAR_9,
            VAR_10,
            &VAR_11,
            VAR_13,
            VAR_14,
            VAR_15
    );

    LONG_DOUBLE VAR_17 = VAR_13[VAR_12 - 1];

    if(VAR_5)
        *VAR_5 = 0.0;

    FUNC_2(VAR_13);
    FUNC_2(VAR_14);
    FUNC_2(VAR_15);

    if(!VAR_16)
        return 0.0;

    return VAR_17;
}
