
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int WCHAR ;
typedef char* PWSTR ;
typedef int LPWSTR ;
typedef scalar_t__ LONG ;
typedef int INT ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int,int *,scalar_t__,int ,int ,int ,int *) ;
 int VAR_4 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int *,char*) ;
 int * VAR_10 ;
 scalar_t__ FUNC_8 (int *,char**,int) ;

INT FUNC_9(INT VAR_11, WCHAR **VAR_12)
{
    INT VAR_13;
    LONG VAR_14;
    PWSTR VAR_15;
    PWSTR VAR_16;
    PWSTR VAR_17[10] = {L"***", L"***", L"***", L"***",
                          L"***", L"***", L"***", L"***",
                          L"***", ((void*)0)};

    if (VAR_11 < 3)
    {
        FUNC_5(4381);
        FUNC_1(VAR_9, L"\n");
        FUNC_6(VAR_8);
        return 1;
    }

    for (VAR_13 = 2; VAR_13 < VAR_11; VAR_13++)
    {
        if (FUNC_7(VAR_12[VAR_13], L"/help") == 0)
        {
            FUNC_5(4381);
            FUNC_1(VAR_9, L"\n");
            FUNC_6(VAR_8);
            FUNC_6(VAR_7);
            return 1;
        }
    }

    VAR_14 = FUNC_8(VAR_12[2], &VAR_15, 10);
    if (*VAR_15 != 0)
    {
        FUNC_5(4381);
        FUNC_1(VAR_9, L"\n");
        FUNC_6(VAR_8);
        return 1;
    }

    if (VAR_14 >= VAR_6 && VAR_14 <= VAR_5)
    {
        FUNC_2(VAR_0 | VAR_2 |
                       VAR_1,
                       VAR_10,
                       VAR_14,
                       VAR_4,
                       (LPWSTR)&VAR_16,
                       0,
                       (va_list *)VAR_17);
        if (VAR_16)
        {
            FUNC_0(VAR_9, L"\n%s\n", VAR_16);
            FUNC_3(VAR_16);
        }
        else
        {
            FUNC_4(3871);
        }
    }
    else
    {

        FUNC_2(VAR_0 | VAR_3 |
                       VAR_1,
                       ((void*)0),
                       VAR_14,
                       VAR_4,
                       (LPWSTR)&VAR_16,
                       0,
                       (va_list *)VAR_17);
        if (VAR_16)
        {
            FUNC_0(VAR_9, L"\n%s\n", VAR_16);
            FUNC_3(VAR_16);
        }
        else
        {
            FUNC_4(3871);
        }
    }

    return 0;
}
