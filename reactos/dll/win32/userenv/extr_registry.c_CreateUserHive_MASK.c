
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPCWSTR ;
typedef scalar_t__ LONG ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,char*,int ,int ,int **) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (char*,int *) ;

BOOL
FUNC_7(LPCWSTR VAR_6,
               LPCWSTR VAR_7)
{
    HKEY VAR_8 = ((void*)0);
    HKEY VAR_9 = ((void*)0);
    LONG VAR_10;
    BOOL VAR_11 = VAR_1;

    FUNC_1("CreateUserHive(%S) called\n", VAR_6);

    VAR_10 = FUNC_4(VAR_2,
                          L".Default",
                          0,
                          VAR_4,
                          &VAR_8);
    if (VAR_10 != VAR_0)
    {
        FUNC_5((DWORD)VAR_10);
        goto Cleanup;
    }

    VAR_10 = FUNC_4(VAR_2,
                          VAR_6,
                          0,
                          VAR_3,
                          &VAR_9);
    if (VAR_10 != VAR_0)
    {
        FUNC_5((DWORD)VAR_10);
        goto Cleanup;
    }

    if (!FUNC_0(VAR_9, VAR_8))
    {
        goto Cleanup;
    }

    if (!FUNC_6(VAR_7,
                                        VAR_9))
    {
        goto Cleanup;
    }

    FUNC_3(VAR_9);
    VAR_11 = VAR_5;

Cleanup:
    if (VAR_9 != ((void*)0))
        FUNC_2 (VAR_9);

    if (VAR_8 != ((void*)0))
        FUNC_2 (VAR_8);

    return VAR_11;
}
