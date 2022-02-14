
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double FUNC_0 (int ) ;
 int FUNC_1 (double) ;
 double FUNC_2 (double) ;

int FUNC_3(double VAR_1, double VAR_2, double VAR_3,
                       double *VAR_4) {
    if (!VAR_4) return 0;

    VAR_4[0] = VAR_1 - FUNC_2(VAR_3/VAR_0/FUNC_0(FUNC_1(VAR_2)));
    VAR_4[2] = VAR_1 + FUNC_2(VAR_3/VAR_0/FUNC_0(FUNC_1(VAR_2)));
    VAR_4[1] = VAR_2 - FUNC_2(VAR_3/VAR_0);
    VAR_4[3] = VAR_2 + FUNC_2(VAR_3/VAR_0);
    return 1;
}
