
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPTSTR ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__* FUNC_2 (scalar_t__*,scalar_t__) ;

__attribute__((used)) static
INT FUNC_3(LPTSTR *VAR_3)
{
    LPTSTR VAR_4;
    VAR_4 = FUNC_2(*VAR_3,FUNC_0(' '));
    if (!VAR_4)
    {
        VAR_4 = FUNC_2 (*VAR_3, FUNC_0('\0'));
        if (VAR_4 != ((void*)0))
            *VAR_3=VAR_4;
        return VAR_0;
    }

    while(FUNC_1(*VAR_4))
        VAR_4++;

    if (*VAR_4 == FUNC_0('\0'))
    {
        *VAR_3=VAR_4;
        return VAR_1;
    }

    *VAR_3 = VAR_4;

    return VAR_2;
}
