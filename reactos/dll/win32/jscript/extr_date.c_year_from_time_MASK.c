
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double DOUBLE ;


 double VAR_0 ;
 double VAR_1 ;
 scalar_t__ FUNC_0 (double) ;
 double FUNC_1 (int) ;

__attribute__((used)) static inline DOUBLE FUNC_2(DOUBLE VAR_2)
{
    int VAR_3;

    if(FUNC_0(VAR_2))
        return VAR_1;

    VAR_3 = 1970 + VAR_2/365.25/VAR_0;

    if(FUNC_1(VAR_3) > VAR_2)
        while(FUNC_1(VAR_3) > VAR_2) VAR_3--;
    else
        while(FUNC_1(VAR_3+1)<=VAR_2) VAR_3++;

    return VAR_3;
}
