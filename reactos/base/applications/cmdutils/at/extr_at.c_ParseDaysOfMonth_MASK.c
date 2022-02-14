
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__* PWSTR ;
typedef int* PULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,scalar_t__**,int) ;

__attribute__((used)) static
BOOL
FUNC_2(
    PWSTR VAR_3,
    PULONG VAR_4)
{
    PWSTR VAR_5, VAR_6;
    ULONG VAR_7;

    if (FUNC_0(VAR_3) == 0)
        return VAR_0;

    VAR_5 = VAR_3;
    VAR_6 = ((void*)0);
    for (;;)
    {
        VAR_7 = FUNC_1(VAR_5, &VAR_6, 10);
        if (VAR_7 == 0)
            return VAR_0;

        if (VAR_7 > 0 && VAR_7 <= 31)
            *VAR_4 |= (1 << (VAR_7 - 1));

        if (VAR_6 != ((void*)0) && *VAR_6 == VAR_2)
            return VAR_1;

        VAR_5 = VAR_6 + 1;
        VAR_6 = ((void*)0);
    }

    return VAR_0;
}
