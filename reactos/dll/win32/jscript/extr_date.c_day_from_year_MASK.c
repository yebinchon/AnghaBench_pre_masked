
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DOUBLE ;


 int VAR_0 ;
 int FUNC_0 (double) ;

__attribute__((used)) static inline DOUBLE FUNC_1(DOUBLE VAR_1)
{
    if(VAR_1 != (int)VAR_1)
        return VAR_0;

    return FUNC_0(365.0*(VAR_1-1970) + FUNC_0((VAR_1-1969)/4)
        - FUNC_0((VAR_1-1901)/100) + FUNC_0((VAR_1-1601)/400));
}
