
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ULONG ;
typedef int* PWSTR ;
typedef int* PULONG ;
typedef int INT ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int*,int**,int) ;

__attribute__((used)) static
BOOL
FUNC_5(
    PWSTR VAR_3,
    PULONG VAR_4,
    PULONG VAR_5)
{
    WCHAR VAR_6[3], VAR_7[3], VAR_8[5];
    PWSTR VAR_9, VAR_10;
    ULONG VAR_11 = 0, VAR_12 = 0;
    INT VAR_13;

    if (VAR_3 == ((void*)0))
        return VAR_0;

    VAR_9 = VAR_3;


    VAR_13 = 0;
    while (*VAR_9 != L'\0' && FUNC_1(*VAR_9))
    {
        if (VAR_13 >= 2)
            return VAR_0;

        VAR_6[VAR_13] = *VAR_9;
        VAR_13++;

        VAR_9++;
    }
    VAR_6[VAR_13] = L'\0';


    if (*VAR_9 != L':')
        return VAR_0;


    VAR_9++;


    VAR_13 = 0;
    while (*VAR_9 != L'\0' && FUNC_1(*VAR_9))
    {
        if (VAR_13 >= 2)
            return VAR_0;

        VAR_7[VAR_13] = *VAR_9;
        VAR_13++;

        VAR_9++;
    }
    VAR_7[VAR_13] = L'\0';


    VAR_13 = 0;
    while (*VAR_9 != L'\0')
    {
        if (VAR_13 >= 4)
            return VAR_0;

        if (!FUNC_2(*VAR_9))
        {
            VAR_8[VAR_13] = *VAR_9;
            VAR_13++;
        }

        VAR_9++;
    }
    VAR_8[VAR_13] = L'\0';


    VAR_11 = FUNC_4(VAR_6, &VAR_10, 10);
    if (VAR_11 == 0 && *VAR_10 != VAR_2)
        return VAR_0;


    VAR_12 = FUNC_4(VAR_7, &VAR_10, 10);
    if (VAR_12 == 0 && *VAR_10 != VAR_2)
        return VAR_0;


    if (FUNC_3(VAR_8) > 0 &&
        FUNC_0(VAR_8, L"a") != 0 &&
        FUNC_0(VAR_8, L"am") != 0 &&
        FUNC_0(VAR_8, L"p") != 0 &&
        FUNC_0(VAR_8, L"pm") != 0)
        return VAR_0;


    if (VAR_12 > 59)
        return VAR_0;

    if (FUNC_3(VAR_8) > 0)
    {



        if (VAR_11 == 0 || VAR_11 > 12)
            return VAR_0;


        if (FUNC_0(VAR_8, L"a") == 0 ||
            FUNC_0(VAR_8, L"am") == 0)
        {
            if (VAR_11 == 12)
                VAR_11 = 0;
        }
        else
        {
            if (VAR_11 >= 1 && VAR_11 <= 11)
                VAR_11 += 12;
        }
    }
    else
    {



        if (VAR_11 > 23)
            return VAR_0;
    }

    if (VAR_4 != ((void*)0))
        *VAR_4 = VAR_11;

    if (VAR_5 != ((void*)0))
        *VAR_5 = VAR_12;

    return VAR_1;
}
