
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lpServiceName; scalar_t__ lpDisplayName; int ServiceStatus; } ;
typedef int * SC_HANDLE ;
typedef TYPE_1__* LPENUM_SERVICE_STATUS ;
typedef int LPCTSTR ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,TYPE_1__*,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_1__* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int * FUNC_6 (int *,int *,int ) ;
 int * FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int ,...) ;

BOOL FUNC_13(LPCTSTR VAR_6)
{
    SC_HANDLE VAR_7 = ((void*)0);
    SC_HANDLE VAR_8 = ((void*)0);
    BOOL VAR_9 = VAR_5;
    DWORD VAR_10 = 0;
    DWORD VAR_11 = 0;
    LPENUM_SERVICE_STATUS VAR_12 = ((void*)0);
    DWORD VAR_13;

    VAR_7 = FUNC_6(((void*)0),
                             ((void*)0),
                             VAR_2);
    if (VAR_7 == ((void*)0))
    {
        FUNC_12(FUNC_11("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_2());
        VAR_9 = VAR_1;
        goto done;
    }

    VAR_8 = FUNC_7(VAR_7, VAR_6, VAR_3);
    if (VAR_8 == ((void*)0))
    {
        FUNC_12(FUNC_11("[SC] OpenService FAILED %lu:\n\n"), FUNC_2());
        VAR_9 = VAR_1;
        goto done;
    }

    if (!FUNC_1(VAR_8,
                               VAR_4,
                               ((void*)0),
                               0,
                               &VAR_10,
                               &VAR_11))
    {
        if (VAR_10 == 0)
        {
            FUNC_12(FUNC_11("[SC] EnumDependentServices FAILED %lu:\n\n"), FUNC_2());
            VAR_9 = VAR_1;
            goto done;
        }
    }

    VAR_12 = FUNC_4(FUNC_3(), 0, VAR_10);
    if (VAR_12 == ((void*)0))
    {
        FUNC_10(VAR_0);
        FUNC_12(FUNC_11("[SC] HeapAlloc FAILED %lu:\n\n"), FUNC_2());
        VAR_9 = VAR_1;
        goto done;
    }

    if (!FUNC_1(VAR_8,
                               VAR_4,
                               VAR_12,
                               VAR_10,
                               &VAR_10,
                               &VAR_11))
    {
        FUNC_12(FUNC_11("[SC] EnumDependentServices FAILED %lu:\n\n"), FUNC_2());
        VAR_9 = VAR_1;
        goto done;
    }

    FUNC_12(FUNC_11("Enum: entriesRead = %lu\n"), VAR_11);

    for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++)
    {
        FUNC_12(FUNC_11("\n"));
        FUNC_12(FUNC_11("SERVICE_NAME: %s\n"), VAR_12[VAR_13].lpServiceName);
        FUNC_12(FUNC_11("DISPLAY_NAME: %s\n"), VAR_12[VAR_13].lpDisplayName);
        FUNC_8(&VAR_12[VAR_13].ServiceStatus);
    }

done:
    if (VAR_9 == VAR_1)
        FUNC_9();

    if (VAR_12 != ((void*)0))
        FUNC_5(FUNC_3(), 0, VAR_12);

    if (VAR_8)
        FUNC_0(VAR_8);

    if (VAR_7)
        FUNC_0(VAR_7);

    return VAR_9;
}
