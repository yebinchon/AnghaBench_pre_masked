
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SERVICE_STATUS ;
typedef int * SC_HANDLE ;
typedef int INT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (int *,char*) ;

INT FUNC_10(INT VAR_8, WCHAR **VAR_9)
{
    SC_HANDLE VAR_10 = ((void*)0);
    SC_HANDLE VAR_11 = ((void*)0);
    SERVICE_STATUS VAR_12;
    INT VAR_13 = 0;
    INT VAR_14;

    if (VAR_8 != 3)
    {
        FUNC_7(4381);
        FUNC_2(VAR_7, L"\n");
        FUNC_8(VAR_1);
        return 1;
    }

    for (VAR_14 = 2; VAR_14 < VAR_8; VAR_14++)
    {
        if (FUNC_9(VAR_9[VAR_14], L"/help") == 0)
        {
            FUNC_7(4381);
            FUNC_2(VAR_7, L"\n");
            FUNC_8(VAR_1);
            FUNC_8(VAR_0);
            return 1;
        }
    }

    VAR_10 = FUNC_5(((void*)0), VAR_3, VAR_2);
    if (VAR_10 == ((void*)0))
    {
        FUNC_1(VAR_6, L"[OpenSCManager] Error: %ld\n", FUNC_4());
        VAR_13 = 1;
        goto done;
    }

    VAR_11 = FUNC_6(VAR_10, VAR_9[2], VAR_5);
    if (VAR_11 == ((void*)0))
    {
        FUNC_1(VAR_6, L"[OpenService] Error: %ld\n", FUNC_4());
        VAR_13 = 1;
        goto done;
    }

    if (!FUNC_3(VAR_11, VAR_4, &VAR_12))
    {
        FUNC_1(VAR_6, L"[ControlService] Error: %ld\n", FUNC_4());
        VAR_13 = 1;
    }

done:
    if (VAR_11 != ((void*)0))
        FUNC_0(VAR_11);

    if (VAR_10 != ((void*)0))
        FUNC_0(VAR_10);

    return VAR_13;
}
