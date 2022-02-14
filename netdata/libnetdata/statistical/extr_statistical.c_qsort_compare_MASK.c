
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG_DOUBLE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(const void *VAR_0, const void *VAR_1) {
    LONG_DOUBLE *VAR_2 = (LONG_DOUBLE *)VAR_0, *VAR_3 = (LONG_DOUBLE *)VAR_1;
    LONG_DOUBLE VAR_4 = *VAR_2, VAR_5 = *VAR_3;

    if(FUNC_2(FUNC_1(VAR_4) || FUNC_1(VAR_5))) {
        if(FUNC_1(VAR_4) && !FUNC_1(VAR_5)) return -1;
        if(!FUNC_1(VAR_4) && FUNC_1(VAR_5)) return 1;
        return 0;
    }
    if(FUNC_2(FUNC_0(VAR_4) || FUNC_0(VAR_5))) {
        if(!FUNC_0(VAR_4) && FUNC_0(VAR_5)) return -1;
        if(FUNC_0(VAR_4) && !FUNC_0(VAR_5)) return 1;
        return 0;
    }

    if(FUNC_2(VAR_4 < VAR_5)) return -1;
    if(FUNC_2(VAR_4 > VAR_5)) return 1;
    return 0;
}
