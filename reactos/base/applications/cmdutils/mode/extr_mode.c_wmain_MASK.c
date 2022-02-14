
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SIZE_T ;
typedef int* PWSTR ;
typedef int* PCWSTR ;
typedef int INT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int* FUNC_5 (int*,int*) ;
 int FUNC_6 () ;
 int* FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int*) ;
 int FUNC_12 (int,int*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_17 (int*,char*,int) ;
 int FUNC_18 (int*,int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int*,char*) ;

int FUNC_21(int VAR_4, WCHAR* VAR_5[])
{
    int VAR_6 = 0;
    int VAR_7;
    SIZE_T VAR_8;
    PCWSTR VAR_9, VAR_10;

    INT VAR_11;


    FUNC_0();
    VAR_8 = 0;


    for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7++)
    {
        VAR_8 += FUNC_19(VAR_5[VAR_7]) + 1;
    }
    VAR_9 = FUNC_7(FUNC_6(), 0, (VAR_8 + 1) * sizeof(WCHAR));
    if (VAR_9 == ((void*)0))
    {
        FUNC_1(VAR_2, L"ERROR: Not enough memory\n");
        return 1;
    }


    VAR_10 = VAR_9;
    for (VAR_7 = 1; VAR_7 < VAR_4; VAR_7++)
    {
        FUNC_18((PWSTR)VAR_10, VAR_5[VAR_7]);
        VAR_10 += FUNC_19(VAR_5[VAR_7]);
        *(PWSTR)VAR_10++ = L' ';
    }
    *(PWSTR)VAR_10 = L'\0';


    VAR_10 = VAR_9;

    while (*VAR_10 == L' ') VAR_10++;
    if (!*VAR_10) goto show_status;

    if (FUNC_20(VAR_10, L"/?") || FUNC_20(VAR_10, L"-?"))
    {
        FUNC_3(VAR_3, VAR_1);
        goto Quit;
    }
    else if (FUNC_17(VAR_10, L"/STA", 4) == 0)
    {

        while (*VAR_10 != L' ') VAR_10++;

        while (*VAR_10 == L' ') VAR_10++;


        if (*VAR_10)
            goto invalid_parameter;

        goto show_status;
    }
    else if (FUNC_17(VAR_10, L"LPT", 3) == 0)
    {
        VAR_10 = FUNC_5(VAR_10+3, &VAR_11);
        if (!VAR_10 || VAR_11 == -1)
            goto invalid_parameter;

        if (*VAR_10 == L':') VAR_10++;
        while (*VAR_10 == L' ') VAR_10++;

        if (!*VAR_10 || FUNC_17(VAR_10, L"/STA", 4) == 0)
            VAR_6 = FUNC_15(VAR_11);
        else
            FUNC_1(VAR_2, L"ERROR: LPT port redirection is not implemented!\n");

        goto Quit;
    }
    else if (FUNC_17(VAR_10, L"COM", 3) == 0)
    {
        VAR_10 = FUNC_5(VAR_10+3, &VAR_11);
        if (!VAR_10 || VAR_11 == -1)
            goto invalid_parameter;

        if (*VAR_10 == L':') VAR_10++;
        while (*VAR_10 == L' ') VAR_10++;

        if (!*VAR_10 || FUNC_17(VAR_10, L"/STA", 4) == 0)
            VAR_6 = FUNC_16(VAR_11);
        else
            VAR_6 = FUNC_12(VAR_11, VAR_10);
        goto Quit;
    }
    else if (FUNC_17(VAR_10, L"CON", 3) == 0)
    {
        VAR_10 += 3;

        if (*VAR_10 == L':') VAR_10++;
        while (*VAR_10 == L' ') VAR_10++;

        if (!*VAR_10 || FUNC_17(VAR_10, L"/STA", 4) == 0)
        {
            VAR_6 = FUNC_14();
        }
        else if ( (FUNC_17(VAR_10, L"CP", 2) == 0 && (VAR_10 += 2)) ||
                  (FUNC_17(VAR_10, L"CODEPAGE", 8) == 0 && (VAR_10 += 8)) )
        {
            while (*VAR_10 == L' ') VAR_10++;

            if (!*VAR_10 || FUNC_17(VAR_10, L"/STA", 4) == 0)
                VAR_6 = FUNC_13();
            else
                VAR_6 = FUNC_9(VAR_10);
        }
        else
        {
            VAR_6 = FUNC_10(VAR_10);
        }
        goto Quit;
    }

    else
    {

        VAR_6 = FUNC_11(VAR_10);
        goto Quit;
    }

show_status:
    FUNC_4();
    goto Quit;

invalid_parameter:
    FUNC_2(VAR_2, VAR_0, VAR_9);
    goto Quit;

Quit:

    FUNC_8(FUNC_6(), 0, (PWSTR)VAR_9);
    return VAR_6;
}
