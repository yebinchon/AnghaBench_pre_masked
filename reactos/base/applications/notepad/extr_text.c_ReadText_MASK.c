
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int* LPWSTR ;
typedef int LPCSTR ;
typedef int* LPBYTE ;
typedef int HANDLE ;
typedef int ENCODING ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (int**,int*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int*) ;
 int VAR_7 ;
 int FUNC_7 (int,int ,int ,int,int*,int) ;
 int FUNC_8 (int ,int*,int,int*,int *) ;
 int VAR_8 ;

BOOL
FUNC_9(HANDLE VAR_9, LPWSTR *VAR_10, DWORD *VAR_11, ENCODING *VAR_12, int *VAR_13)
{
    DWORD VAR_14;
    LPBYTE VAR_15 = ((void*)0);
    LPWSTR VAR_16;
    LPWSTR VAR_17 = ((void*)0);
    DWORD VAR_18, VAR_19;
    DWORD VAR_20;
    BOOL VAR_21 = VAR_6;
    BYTE VAR_22 = 0;
    ENCODING VAR_23 = 131;
    int VAR_24 = 0;
    WCHAR VAR_25[2] = {'\r', '\n'};
    DWORD VAR_26[3] = {0, 0, 0};

    *VAR_10 = ((void*)0);
    *VAR_11 = 0;

    VAR_14 = FUNC_3(VAR_9, ((void*)0));
    if (VAR_14 == VAR_7)
        goto done;

    VAR_15 = FUNC_5(FUNC_4(), 0, VAR_14 + 2);
    if (!VAR_15)
        goto done;

    if (!FUNC_8(VAR_9, VAR_15, VAR_14, &VAR_14, ((void*)0)))
        goto done;
    VAR_18 = 0;


    VAR_15[VAR_14 + 0] = '\0';
    VAR_15[VAR_14 + 1] = '\0';


    if ((VAR_14 >= 2) && (VAR_15[0] == 0xFF) && (VAR_15[1] == 0xFE))
    {
        VAR_23 = 129;
        VAR_18 += 2;
    }
    else if ((VAR_14 >= 2) && (VAR_15[0] == 0xFE) && (VAR_15[1] == 0xFF))
    {
        VAR_23 = 130;
        VAR_18 += 2;
    }
    else if ((VAR_14 >= 3) && (VAR_15[0] == 0xEF) && (VAR_15[1] == 0xBB) && (VAR_15[2] == 0xBF))
    {
        VAR_23 = 128;
        VAR_18 += 3;
    }
    else
    {
        VAR_23 = FUNC_1((const char *)VAR_15, VAR_14);
    }

    switch(VAR_23)
    {
    case 130:
        for (VAR_19 = VAR_18; VAR_19 < VAR_14-1; VAR_19 += 2)
        {
            VAR_22 = VAR_15[VAR_19+0];
            VAR_15[VAR_19+0] = VAR_15[VAR_19+1];
            VAR_15[VAR_19+1] = VAR_22;
        }


    case 129:
        VAR_16 = (LPWSTR) &VAR_15[VAR_18];
        VAR_20 = (VAR_14 - VAR_18) / sizeof(WCHAR);
        break;

    case 131:
    case 128:
        if (VAR_23 == 131)
            VAR_24 = VAR_0;
        else if (VAR_23 == 128)
            VAR_24 = VAR_1;

        if ((VAR_14 - VAR_18) > 0)
        {
            VAR_20 = FUNC_7(VAR_24, 0, (LPCSTR)&VAR_15[VAR_18], VAR_14 - VAR_18, ((void*)0), 0);
            if (VAR_20 == 0)
                goto done;
        }
        else
        {

            VAR_20 = 0;
        }

        VAR_17 = (LPWSTR) FUNC_5(FUNC_4(), 0, (VAR_20 + 1) * sizeof(WCHAR));
        if (!VAR_17)
            goto done;

        if ((VAR_14 - VAR_18) > 0)
        {
            if (!FUNC_7(VAR_24, 0, (LPCSTR)&VAR_15[VAR_18], VAR_14 - VAR_18, VAR_17, VAR_20))
                goto done;
        }

        VAR_17[VAR_20] = '\0';
        VAR_16 = VAR_17;
        break;
    VAR_2;
    }

    VAR_18 = 0;
    for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
    {
        switch(VAR_16[VAR_19])
        {
        case '\r':
            if ((VAR_19 < VAR_20-1) && (VAR_16[VAR_19+1] == '\n'))
            {
                VAR_19++;
                VAR_26[VAR_4]++;
                break;
            }


        case '\n':
            if (!FUNC_2(VAR_10, VAR_11, &VAR_16[VAR_18], VAR_19 - VAR_18))
                return VAR_6;
            if (!FUNC_2(VAR_10, VAR_11, VAR_25, FUNC_0(VAR_25)))
                return VAR_6;
            VAR_18 = VAR_19 + 1;

            if (VAR_16[VAR_19] == '\r')
                VAR_26[VAR_3]++;
            else
                VAR_26[VAR_5]++;
            break;

        case '\0':
            VAR_16[VAR_19] = ' ';
            break;
        }
    }

    if (!*VAR_10 && (VAR_16 == VAR_17))
    {

        *VAR_10 = VAR_17;
        *VAR_11 = VAR_20;
        VAR_17 = ((void*)0);
    }
    else
    {

        if (!FUNC_2(VAR_10, VAR_11, &VAR_16[VAR_18], VAR_19 - VAR_18 + 1))
            return VAR_6;
    }


    *VAR_13 = VAR_4;
    if (VAR_26[VAR_5] > VAR_26[*VAR_13])
        *VAR_13 = VAR_5;
    if (VAR_26[VAR_3] > VAR_26[*VAR_13])
        *VAR_13 = VAR_3;
    *VAR_12 = VAR_23;

    VAR_21 = VAR_8;

done:
    if (VAR_15)
        FUNC_6(FUNC_4(), 0, VAR_15);
    if (VAR_17)
        FUNC_6(FUNC_4(), 0, VAR_17);

    if (!VAR_21 && *VAR_10)
    {
        FUNC_6(FUNC_4(), 0, *VAR_10);
        *VAR_10 = ((void*)0);
        *VAR_11 = 0;
    }
    return VAR_21;
}
