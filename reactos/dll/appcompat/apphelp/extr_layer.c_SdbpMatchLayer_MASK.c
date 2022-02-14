
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t PCWSTR ;
typedef int BOOL ;


 int FUNC_0 (size_t,size_t,size_t) ;
 int FUNC_1 (size_t,size_t) ;
 size_t FUNC_2 (size_t) ;

BOOL FUNC_3(PCWSTR VAR_0, PCWSTR VAR_1, PCWSTR VAR_2)
{
    size_t VAR_3;
    if (!VAR_1)
        return !FUNC_1(VAR_0, VAR_2);
    VAR_3 = VAR_1 - VAR_0;
    return FUNC_2(VAR_2) == VAR_3 && !FUNC_0(VAR_0, VAR_2, VAR_3);
}
