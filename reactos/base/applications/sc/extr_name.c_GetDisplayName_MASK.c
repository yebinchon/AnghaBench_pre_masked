
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int * SC_HANDLE ;
typedef int * LPTSTR ;
typedef int LPCTSTR ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,int *,int*) ;
 int * FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int *) ;
 int * FUNC_6 (int *,int *,int ) ;
 int FUNC_7 () ;
 int VAR_2 ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,int *) ;

BOOL FUNC_11(LPCTSTR VAR_4)
{
    SC_HANDLE VAR_5 = ((void*)0);
    BOOL VAR_6 = VAR_3;
    DWORD VAR_7 = 0;
    LPTSTR VAR_8 = ((void*)0);

    VAR_5 = FUNC_6(((void*)0),
                             ((void*)0),
                             VAR_2);
    if (VAR_5 == ((void*)0))
    {
        FUNC_10(FUNC_9("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_1());
        VAR_6 = VAR_1;
        goto done;
    }

    if (!FUNC_3(VAR_5,
                               VAR_4,
                               ((void*)0),
                               &VAR_7))
    {
        if (VAR_7 == 0)
        {
            FUNC_10(FUNC_9("[SC] GetServiceDisplayName FAILED %lu:\n\n"), FUNC_1());
            VAR_6 = VAR_1;
            goto done;
        }
    }

    VAR_8 = FUNC_4(FUNC_2(), 0, (VAR_7 + 1) * sizeof(TCHAR));
    if (VAR_8 == ((void*)0))
    {
        FUNC_8(VAR_0);
        FUNC_10(FUNC_9("[SC] HeapAlloc FAILED %lu:\n\n"), FUNC_1());
        VAR_6 = VAR_1;
        goto done;
    }

    VAR_7++;
    if (!FUNC_3(VAR_5,
                               VAR_4,
                               VAR_8,
                               &VAR_7))
    {
        FUNC_10(FUNC_9("[SC] GetServiceDisplayName FAILED %lu:\n\n"), FUNC_1());
        VAR_6 = VAR_1;
        goto done;
    }

    FUNC_10(FUNC_9("[SC] GetServiceDisplayName SUCCESS  Name = %s\n"), VAR_8);

done:
    if (VAR_6 == VAR_1)
        FUNC_7();

    if (VAR_8 != ((void*)0))
        FUNC_5(FUNC_2(), 0, VAR_8);

    if (VAR_5)
        FUNC_0(VAR_5);

    return VAR_6;
}
