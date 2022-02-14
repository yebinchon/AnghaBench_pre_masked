
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,int *,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int,int *,int*,int *,int*,int *,int*) ;
 int FUNC_3 (int ,int *,int ,int ,int *) ;
 int * FUNC_4 (int *,int,int *,int) ;
 int FUNC_5 (int ,int *,int,int,int *,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;
 int * FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(HANDLE VAR_4, HKEY VAR_5, WCHAR *VAR_6)
{
    LONG VAR_7;
    DWORD VAR_8 = 256, VAR_9;
    DWORD VAR_10 = 2048, VAR_11;
    DWORD VAR_12;
    DWORD VAR_13, VAR_14, VAR_15;
    WCHAR *VAR_16, *VAR_17, *VAR_18;
    BYTE *VAR_19;
    HKEY VAR_20;

    FUNC_6(VAR_4, VAR_6);

    VAR_16 = FUNC_8(VAR_8 * sizeof(WCHAR));
    VAR_19 = FUNC_8(VAR_10);

    VAR_13 = 0;
    for (;;)
    {
        VAR_9 = VAR_8;
        VAR_11 = VAR_10;
        VAR_7 = FUNC_2(VAR_5, VAR_13, VAR_16, &VAR_9, ((void*)0), &VAR_14, VAR_19, &VAR_11);

        if (VAR_7 == VAR_1)
        {
            FUNC_5(VAR_4, VAR_16, VAR_9, VAR_14, VAR_19, VAR_11);
            VAR_13++;
        }
        else if (VAR_7 == VAR_0)
        {
            if (VAR_11 > VAR_10)
            {
                VAR_10 = VAR_11;
                VAR_19 = FUNC_9(VAR_19, VAR_10);
            }
            else
            {
                VAR_8 *= 2;
                VAR_16 = FUNC_9(VAR_16, VAR_8 * sizeof(WCHAR));
            }
        }
        else break;
    }

    FUNC_7(VAR_19);
    FUNC_7(VAR_16);

    VAR_17 = FUNC_8(VAR_3 * sizeof(WCHAR));

    VAR_15 = FUNC_10(VAR_6);

    VAR_13 = 0;
    for (;;)
    {
        VAR_12 = VAR_3;
        VAR_7 = FUNC_1(VAR_5, VAR_13, VAR_17, &VAR_12, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_7 == VAR_1)
        {
            VAR_18 = FUNC_4(VAR_6, VAR_15, VAR_17, VAR_12);
            if (!FUNC_3(VAR_5, VAR_17, 0, VAR_2, &VAR_20))
            {
                FUNC_11(VAR_4, VAR_20, VAR_18);
                FUNC_0(VAR_20);
            }
            FUNC_7(VAR_18);
            VAR_13++;
        }
        else break;
    }

    FUNC_7(VAR_17);
    return 0;
}
