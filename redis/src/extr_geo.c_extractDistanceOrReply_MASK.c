
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int robj ;
typedef int client ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 double FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *,double*,char*) ;

double FUNC_3(client *VAR_1, robj **VAR_2,
                                     double *VAR_3) {
    double VAR_4;
    if (FUNC_2(VAR_1, VAR_2[0], &VAR_4,
                                   "need numeric radius") != VAR_0) {
        return -1;
    }

    if (VAR_4 < 0) {
        FUNC_0(VAR_1,"radius cannot be negative");
        return -1;
    }

    double VAR_5 = FUNC_1(VAR_1,VAR_2[1]);
    if (VAR_5 < 0) {
        return -1;
    }

    if (VAR_3) *VAR_3 = VAR_5;
    return VAR_4 * VAR_5;
}
