
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SERVICE_STATUS ;
typedef int * SC_HANDLE ;
typedef int INT ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *,int ,int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_5 (int *,int ,int ) ;
 int * FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (int *,char*) ;

INT FUNC_10(INT VAR_9, WCHAR **VAR_10)
{
    SC_HANDLE VAR_11 = ((void*)0);
    SC_HANDLE VAR_12 = ((void*)0);
    SERVICE_STATUS VAR_13;
    DWORD VAR_14 = VAR_0;
    INT VAR_15 = 0;
    INT VAR_16;

    if (VAR_9 != 3)
    {
        FUNC_7(4381);
        FUNC_2(VAR_8, L"\n");
        FUNC_8(VAR_2);
        return 1;
    }

    for (VAR_16 = 2; VAR_16 < VAR_9; VAR_16++)
    {
        if (FUNC_9(VAR_10[VAR_16], L"/help") == 0)
        {
            FUNC_7(4381);
            FUNC_2(VAR_8, L"\n");
            FUNC_8(VAR_2);
            FUNC_8(VAR_1);
            return 1;
        }
    }

    VAR_11 = FUNC_5(((void*)0),
                              VAR_4,
                              VAR_3);
    if (VAR_11 == ((void*)0))
    {
        VAR_14 = FUNC_4();
        VAR_15 = 1;
        goto done;
    }

    VAR_12 = FUNC_6(VAR_11,
                            VAR_10[2],
                            VAR_6);
    if (VAR_12 == ((void*)0))
    {
        VAR_14 = FUNC_4();
        VAR_15 = 1;
        goto done;
    }

    if (!FUNC_3(VAR_12, VAR_5, &VAR_13))
    {
        VAR_14 = FUNC_4();
        VAR_15 = 1;
        goto done;
    }

done:
    if (VAR_12 != ((void*)0))
        FUNC_0(VAR_12);

    if (VAR_11 != ((void*)0))
        FUNC_0(VAR_11);

    if (VAR_14 != VAR_0)
    {

        FUNC_1(VAR_7, L"Error: %lu\n", VAR_14);
    }

    return VAR_15;
}
