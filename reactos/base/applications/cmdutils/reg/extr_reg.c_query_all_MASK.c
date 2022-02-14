
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef char BYTE ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int,char*,int*,int *,int*,char*,int*) ;
 int FUNC_3 (int ,char*,int ,int ,int *) ;
 char* FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (char*,int) ;
 int VAR_4 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(HKEY VAR_5, WCHAR *VAR_6, BOOL VAR_7)
{
    LONG VAR_8;
    DWORD VAR_9 = 256, VAR_10;
    DWORD VAR_11 = 2048, VAR_12;
    DWORD VAR_13;
    DWORD VAR_14, VAR_15, VAR_16;
    WCHAR VAR_17[] = {'%','1','\n',0};
    WCHAR VAR_18[] = {'%','1','\\','%','2','\n',0};
    WCHAR *VAR_19, *VAR_20, *VAR_21;
    BYTE *VAR_22;
    HKEY VAR_23;

    FUNC_8(VAR_17, VAR_6);

    VAR_19 = FUNC_6(VAR_9 * sizeof(WCHAR));
    VAR_22 = FUNC_6(VAR_11);

    VAR_14 = 0;
    for (;;)
    {
        VAR_10 = VAR_9;
        VAR_12 = VAR_11;
        VAR_8 = FUNC_2(VAR_5, VAR_14, VAR_19, &VAR_10, ((void*)0), &VAR_15, VAR_22, &VAR_12);
        if (VAR_8 == VAR_1)
        {
            FUNC_9(VAR_19, VAR_15, VAR_22, VAR_12);
            VAR_14++;
        }
        else if (VAR_8 == VAR_0)
        {
            if (VAR_12 > VAR_11)
            {
                VAR_11 = VAR_12;
                VAR_22 = FUNC_7(VAR_22, VAR_11);
            }
            else
            {
                VAR_9 *= 2;
                VAR_19 = FUNC_7(VAR_19, VAR_9 * sizeof(WCHAR));
            }
        }
        else break;
    }

    FUNC_5(VAR_22);
    FUNC_5(VAR_19);

    if (VAR_14 || VAR_7)
        FUNC_8(VAR_4);

    VAR_20 = FUNC_6(VAR_3 * sizeof(WCHAR));

    VAR_16 = FUNC_10(VAR_6);

    VAR_14 = 0;
    for (;;)
    {
        VAR_13 = VAR_3;
        VAR_8 = FUNC_1(VAR_5, VAR_14, VAR_20, &VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_8 == VAR_1)
        {
            if (VAR_7)
            {
                VAR_21 = FUNC_4(VAR_6, VAR_16, VAR_20, VAR_13);
                if (!FUNC_3(VAR_5, VAR_20, 0, VAR_2, &VAR_23))
                {
                    FUNC_11(VAR_23, VAR_21, VAR_7);
                    FUNC_0(VAR_23);
                }
                FUNC_5(VAR_21);
            }
            else FUNC_8(VAR_18, VAR_6, VAR_20);
            VAR_14++;
        }
        else break;
    }

    FUNC_5(VAR_20);

    if (VAR_14 && !VAR_7)
        FUNC_8(VAR_4);

    return 0;
}
