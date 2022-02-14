
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__* PWSTR ;
typedef int * PULONG ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,scalar_t__**,int) ;

__attribute__((used)) static
BOOL
FUNC_1(
    PWSTR VAR_3,
    PULONG VAR_4)
{
    PWSTR VAR_5, VAR_6;
    ULONG VAR_7 = 0;
    BOOL VAR_8 = VAR_0;

    VAR_5 = VAR_3;
    VAR_6 = ((void*)0);
    VAR_7 = FUNC_0(VAR_5, &VAR_6, 10);
    if (VAR_6 != ((void*)0) && *VAR_6 == VAR_2)
    {
        VAR_8 = VAR_1;

        if (VAR_4 != ((void*)0))
            *VAR_4 = VAR_7;
    }

    return VAR_8;
}
