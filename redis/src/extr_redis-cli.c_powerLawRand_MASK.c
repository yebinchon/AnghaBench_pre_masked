
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (double,double) ;
 scalar_t__ FUNC_1 () ;

long long FUNC_2(long long VAR_1, long long VAR_2, double VAR_3) {
    double VAR_4, VAR_5;

    VAR_2 += 1;
    VAR_5 = ((double)FUNC_1()) / VAR_0;
    VAR_4 = FUNC_0(
        ((FUNC_0(VAR_2,VAR_3+1) - FUNC_0(VAR_1,VAR_3+1))*VAR_5 + FUNC_0(VAR_1,VAR_3+1)),
        (1.0/(VAR_3+1)));
    return (VAR_2-1-(long long)VAR_4)+VAR_1;
}
