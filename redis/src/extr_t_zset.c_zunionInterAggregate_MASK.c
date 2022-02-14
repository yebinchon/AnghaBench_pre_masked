
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (double) ;
 int FUNC_1 (char*) ;

__attribute__((used)) inline static void FUNC_2(double *VAR_3, double VAR_4, int VAR_5) {
    if (VAR_5 == VAR_2) {
        *VAR_3 = *VAR_3 + VAR_4;



        if (FUNC_0(*VAR_3)) *VAR_3 = 0.0;
    } else if (VAR_5 == VAR_1) {
        *VAR_3 = VAR_4 < *VAR_3 ? VAR_4 : *VAR_3;
    } else if (VAR_5 == VAR_0) {
        *VAR_3 = VAR_4 > *VAR_3 ? VAR_4 : *VAR_3;
    } else {

        FUNC_1("Unknown ZUNION/INTER aggregate type");
    }
}
