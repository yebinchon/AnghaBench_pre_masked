
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef int INT ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int*,int*,int,int,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int,int*) ;
 int FUNC_5 (int*,int,int*,int *) ;
 int VAR_5 ;
 int FUNC_6 (int*,int*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int*,char*) ;
 int FUNC_9 (int*,char*) ;
 scalar_t__ FUNC_10 (int*,char*) ;
 int FUNC_11 (int*) ;
 char* FUNC_12 (int*,int) ;

int FUNC_13(int VAR_12, WCHAR *VAR_13[])
{
    INT VAR_14;
    WCHAR VAR_15[VAR_5];
    WCHAR VAR_16 [VAR_5];
    BOOL VAR_17 = VAR_0;
    BOOL VAR_18 = VAR_0;
    DWORD VAR_19 = 0;
    DWORD VAR_20 = 0;


    FUNC_1();


    if (VAR_12 > 1 && FUNC_8(VAR_13[1], L"/?") == 0)
    {
        FUNC_3(VAR_9, VAR_6);
        return 0;
    }


    for (VAR_14 = 1; VAR_14 < VAR_12; VAR_14++)
    {
        if (FUNC_10(VAR_13[VAR_14], L"/s") == 0)
            VAR_17 = VAR_10;
        else if (FUNC_10(VAR_13[VAR_14], L"/d") == 0)
            VAR_18 = VAR_10;
    }


    for (VAR_14 = 1; VAR_14 < VAR_12; VAR_14++)
    {
        if (*VAR_13[VAR_14] == L'+')
        {
            if (FUNC_11(VAR_13[VAR_14]) != 2)
            {
                FUNC_2(VAR_8, VAR_7, VAR_13[VAR_14]);
                return -1;
            }

            switch (FUNC_7(VAR_13[VAR_14][1]))
            {
                case L'A':
                    VAR_20 |= VAR_1;
                    VAR_19 |= VAR_1;
                    break;

                case L'H':
                    VAR_20 |= VAR_2;
                    VAR_19 |= VAR_2;
                    break;

                case L'R':
                    VAR_20 |= VAR_3;
                    VAR_19 |= VAR_3;
                    break;

                case L'S':
                    VAR_20 |= VAR_4;
                    VAR_19 |= VAR_4;
                    break;

                default:
                    FUNC_2(VAR_8, VAR_7, VAR_13[VAR_14]);
                    return -1;
            }
        }
        else if (*VAR_13[VAR_14] == L'-')
        {
            if (FUNC_11(VAR_13[VAR_14]) != 2)
            {
                FUNC_2(VAR_8, VAR_7, VAR_13[VAR_14]);
                return -1;
            }

            switch (FUNC_7(VAR_13[VAR_14][1]))
            {
                case L'A':
                    VAR_20 |= VAR_1;
                    VAR_19 &= ~VAR_1;
                    break;

                case L'H':
                    VAR_20 |= VAR_2;
                    VAR_19 &= ~VAR_2;
                    break;

                case L'R':
                    VAR_20 |= VAR_3;
                    VAR_19 &= ~VAR_3;
                    break;

                case L'S':
                    VAR_20 |= VAR_4;
                    VAR_19 &= ~VAR_4;
                    break;

                default:
                    FUNC_2(VAR_8, VAR_7, VAR_13[VAR_14]);
                    return -1;
            }
        }
    }

    if (VAR_12 == 1)
    {
        DWORD VAR_21;

        VAR_21 = FUNC_4(VAR_5, VAR_15);
        if (VAR_15[VAR_21-1] != L'\\')
        {
            VAR_15[VAR_21] = L'\\';
            VAR_15[VAR_21 + 1] = VAR_11;
        }
        FUNC_9(VAR_16, L"*.*");
        FUNC_6(VAR_15, VAR_16, VAR_17);
        return 0;
    }


    for (VAR_14 = 1; VAR_14 < VAR_12; VAR_14++)
    {
        if ((*VAR_13[VAR_14] != L'+') && (*VAR_13[VAR_14] != L'-') && (*VAR_13[VAR_14] != L'/'))
        {
            LPWSTR VAR_22;

            FUNC_5(VAR_13[VAR_14], VAR_5, VAR_15, ((void*)0));
            VAR_22 = FUNC_12(VAR_15, L'\\') + 1;
            FUNC_9(VAR_16, VAR_22);
            *VAR_22 = L'\0';

            if (VAR_20 == 0)
                FUNC_6(VAR_15, VAR_16, VAR_17);
            else
                FUNC_0(VAR_15, VAR_16, VAR_20,
                         VAR_19, VAR_17, VAR_18);
        }
    }

    return 0;
}
