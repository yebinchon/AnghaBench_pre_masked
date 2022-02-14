
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const LONG_DOUBLE ;


 int const VAR_0 ;
 int* FUNC_0 (int const*,size_t) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*,size_t) ;
 int FUNC_3 (int const*,size_t) ;
 scalar_t__ FUNC_4 (int) ;

LONG_DOUBLE FUNC_5(const LONG_DOUBLE *VAR_1, size_t VAR_2) {
    if(FUNC_4(VAR_2 == 0)) return VAR_0;
    if(FUNC_4(VAR_2 == 1)) return VAR_1[0];

    if(FUNC_4(VAR_2 == 2))
        return (VAR_1[0] + VAR_1[1]) / 2;

    LONG_DOUBLE *VAR_3 = FUNC_0(VAR_1, VAR_2);
    FUNC_3(VAR_3, VAR_2);

    LONG_DOUBLE VAR_4 = FUNC_2(VAR_3, VAR_2);

    FUNC_1(VAR_3);
    return VAR_4;
}
