
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef char BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,char*,int*,int *,int *,int *,int *) ;
 int FUNC_2 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int*,char*,int*) ;
 int VAR_6 ;
 char* FUNC_4 (char*,int,char*,int) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (int) ;
 char* FUNC_7 (char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,int,char*,int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static int FUNC_12(HKEY VAR_9, WCHAR *VAR_10, WCHAR *VAR_11, BOOL VAR_12)
{
    LONG VAR_13;
    DWORD VAR_14 = 2048, VAR_15;
    DWORD VAR_16;
    DWORD VAR_17, VAR_18, VAR_19;
    BYTE *VAR_20;
    WCHAR VAR_21[] = {'%','1','\n',0};
    WCHAR *VAR_22, *VAR_23;
    HKEY VAR_24;

    VAR_20 = FUNC_6(VAR_14);

    for (;;)
    {
        VAR_15 = VAR_14;
        VAR_13 = FUNC_3(VAR_9, VAR_10, ((void*)0), &VAR_17, VAR_20, &VAR_15);
        if (VAR_13 == VAR_1)
        {
            VAR_14 = VAR_15;
            VAR_20 = FUNC_7(VAR_20, VAR_14);
        }
        else break;
    }

    if (VAR_13 == VAR_2)
    {
        FUNC_9(VAR_21, VAR_11);
        FUNC_10(VAR_10, VAR_17, VAR_20, VAR_15);
        FUNC_9(VAR_7);
        VAR_8++;
    }

    FUNC_5(VAR_20);

    if (!VAR_12)
    {
        if (VAR_13 == VAR_0)
        {
            if (VAR_10 && *VAR_10)
            {
                FUNC_8(VAR_6);
                return 1;
            }
            FUNC_9(VAR_21, VAR_11);
            FUNC_10(((void*)0), VAR_5, ((void*)0), 0);
        }
        return 0;
    }

    VAR_22 = FUNC_6(VAR_4 * sizeof(WCHAR));

    VAR_18 = FUNC_11(VAR_11);

    VAR_19 = 0;
    for (;;)
    {
        VAR_16 = VAR_4;
        VAR_13 = FUNC_1(VAR_9, VAR_19, VAR_22, &VAR_16, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_13 == VAR_2)
        {
            VAR_23 = FUNC_4(VAR_11, VAR_18, VAR_22, VAR_16);
            if (!FUNC_2(VAR_9, VAR_22, 0, VAR_3, &VAR_24))
            {
                FUNC_12(VAR_24, VAR_10, VAR_23, VAR_12);
                FUNC_0(VAR_24);
            }
            FUNC_5(VAR_23);
            VAR_19++;
        }
        else break;
    }

    FUNC_5(VAR_22);
    return 0;
}
