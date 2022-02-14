
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ REAL ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(REAL VAR_0, REAL VAR_1, REAL *VAR_2, REAL *VAR_3, REAL VAR_4)
{
    REAL VAR_5, VAR_6, VAR_7, VAR_8;

    if((VAR_1 == *VAR_3) && (VAR_0 == *VAR_2))
        return;

    VAR_5 = FUNC_3((*VAR_2 - VAR_0) * (*VAR_2 - VAR_0) + (*VAR_3 - VAR_1) * (*VAR_3 - VAR_1)) * -VAR_4;
    VAR_6 = FUNC_1((*VAR_3 - VAR_1), (*VAR_2 - VAR_0));
    VAR_7 = FUNC_0(VAR_6) * VAR_5;
    VAR_8 = FUNC_2(VAR_6) * VAR_5;

    *VAR_2 = *VAR_2 + VAR_7;
    *VAR_3 = *VAR_3 + VAR_8;
}
