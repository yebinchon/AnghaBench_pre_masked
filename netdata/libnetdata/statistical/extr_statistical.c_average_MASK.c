
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONG_DOUBLE ;


 int VAR_0 ;
 int FUNC_0 (int const*,size_t,size_t*) ;
 scalar_t__ FUNC_1 (int) ;

inline LONG_DOUBLE FUNC_2(const LONG_DOUBLE *VAR_1, size_t VAR_2) {
    size_t VAR_3 = 0;
    LONG_DOUBLE VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);

    if(FUNC_1(!VAR_3)) return VAR_0;
    return VAR_4 / (LONG_DOUBLE)VAR_3;
}
