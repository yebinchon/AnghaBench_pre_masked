
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__* LPTSTR ;


 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static VOID
FUNC_3 (LPTSTR VAR_0)
{
    LPTSTR VAR_1 = VAR_0;
    while (*VAR_1 && !FUNC_1 (*VAR_1) && *VAR_1 != FUNC_0('='))
    {
        *VAR_1 = FUNC_2 (*VAR_1);
        VAR_1++;
    }
}
