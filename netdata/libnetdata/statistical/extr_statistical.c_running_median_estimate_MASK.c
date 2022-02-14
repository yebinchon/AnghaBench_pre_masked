
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float LONG_DOUBLE ;


 int FUNC_0 (float) ;
 float FUNC_1 (float,float) ;
 scalar_t__ FUNC_2 (int) ;

LONG_DOUBLE FUNC_3(const LONG_DOUBLE *VAR_0, size_t VAR_1) {
    LONG_DOUBLE VAR_2 = 0.0f;
    LONG_DOUBLE VAR_3 = 0.0f;
    size_t VAR_4;

    for(VAR_4 = 0; VAR_4 < VAR_1 ; VAR_4++) {
        LONG_DOUBLE VAR_5 = VAR_0[VAR_4];
        if(FUNC_2(!FUNC_0(VAR_5))) continue;

        VAR_3 += ( VAR_5 - VAR_3 ) * 0.1f;
        VAR_2 += FUNC_1( VAR_3 * 0.01, VAR_5 - VAR_2 );
    }

    return VAR_2;
}
