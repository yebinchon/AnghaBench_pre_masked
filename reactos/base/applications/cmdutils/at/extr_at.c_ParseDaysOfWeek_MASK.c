
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ ULONG_PTR ;
typedef int * PWSTR ;
typedef int* PUCHAR ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int ** VAR_2 ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
BOOL
FUNC_3(
    PWSTR VAR_3,
    PUCHAR VAR_4)
{
    PWSTR VAR_5, VAR_6;
    INT VAR_7, VAR_8;

    if (FUNC_2(VAR_3) == 0)
        return VAR_0;

    VAR_5 = VAR_3;
    VAR_6 = ((void*)0);
    for (;;)
    {
        VAR_6 = FUNC_1(VAR_5, L',');
        if (VAR_6 == ((void*)0))
            VAR_7 = FUNC_2(VAR_5);
        else
            VAR_7 = (INT)((ULONG_PTR)VAR_6 - (ULONG_PTR)VAR_5) / sizeof(WCHAR);

        for (VAR_8 = 0; VAR_8 < 7; VAR_8++)
        {
            if (VAR_7 == FUNC_2(VAR_2[VAR_8]) &&
                FUNC_0(VAR_5, VAR_2[VAR_8], VAR_7) == 0)
            {
                *VAR_4 |= (1 << VAR_8);
                break;
            }
        }

        if (VAR_6 == ((void*)0))
            return VAR_1;

        VAR_5 = VAR_6 + 1;
        VAR_6 = ((void*)0);
    }

    return VAR_0;
}
