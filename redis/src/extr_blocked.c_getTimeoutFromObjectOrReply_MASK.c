
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef long long mstime_t ;
typedef int client ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (int *,int *,long double*,char*) ;
 scalar_t__ FUNC_2 (int *,int *,long long*,char*) ;
 scalar_t__ FUNC_3 () ;

int FUNC_4(client *VAR_3, robj *VAR_4, mstime_t *VAR_5, int VAR_6) {
    long long VAR_7;
    long double VAR_8;

    if (VAR_6 == VAR_2) {
        if (FUNC_1(VAR_3,VAR_4,&VAR_8,
            "timeout is not an float or out of range") != VAR_1)
            return VAR_0;
        VAR_7 = (long long) (VAR_8 * 1000.0);
    } else {
        if (FUNC_2(VAR_3,VAR_4,&VAR_7,
            "timeout is not an integer or out of range") != VAR_1)
            return VAR_0;
    }

    if (VAR_7 < 0) {
        FUNC_0(VAR_3,"timeout is negative");
        return VAR_0;
    }

    if (VAR_7 > 0) {
        VAR_7 += FUNC_3();
    }
    *VAR_5 = VAR_7;

    return VAR_1;
}
