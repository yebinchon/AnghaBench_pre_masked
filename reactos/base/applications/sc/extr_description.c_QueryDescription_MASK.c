
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lpDescription; } ;
typedef int * SC_HANDLE ;
typedef TYPE_1__* LPSERVICE_DESCRIPTION ;
typedef scalar_t__ LPCTSTR ;
typedef int * LPBYTE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,scalar_t__,int ) ;
 int FUNC_7 (int *,int ,int *,scalar_t__,scalar_t__*) ;
 int FUNC_8 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (scalar_t__,...) ;

BOOL FUNC_12(LPCTSTR VAR_6)
{
    SC_HANDLE VAR_7 = ((void*)0);
    SC_HANDLE VAR_8 = ((void*)0);
    BOOL VAR_9 = VAR_5;
    DWORD VAR_10 = 0;
    LPSERVICE_DESCRIPTION VAR_11 = ((void*)0);





    VAR_7 = FUNC_5(((void*)0),
                             ((void*)0),
                             VAR_2);
    if (VAR_7 == ((void*)0))
    {
        FUNC_11(FUNC_10("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_1());
        VAR_9 = VAR_1;
        goto done;
    }

    VAR_8 = FUNC_6(VAR_7, VAR_6, VAR_4);
    if (VAR_8 == ((void*)0))
    {
        FUNC_11(FUNC_10("[SC] OpenService FAILED %lu:\n\n"), FUNC_1());
        VAR_9 = VAR_1;
        goto done;
    }

    if (!FUNC_7(VAR_8,
                             VAR_3,
                             ((void*)0),
                             0,
                             &VAR_10))
    {
        if (VAR_10 == 0)
        {
            FUNC_11(FUNC_10("[SC] QueryServiceConfig2 FAILED %lu:\n\n"), FUNC_1());
            VAR_9 = VAR_1;
            goto done;
        }
    }

    VAR_11 = FUNC_3(FUNC_2(), 0, VAR_10);
    if (VAR_11 == ((void*)0))
    {
        FUNC_9(VAR_0);
        FUNC_11(FUNC_10("[SC] HeapAlloc FAILED %lu:\n\n"), FUNC_1());
        VAR_9 = VAR_1;
        goto done;
    }

    if (!FUNC_7(VAR_8,
                             VAR_3,
                             (LPBYTE)VAR_11,
                             VAR_10,
                             &VAR_10))
    {
        FUNC_11(FUNC_10("[SC] QueryServiceConfig2 FAILED %lu:\n\n"), FUNC_1());
        VAR_9 = VAR_1;
        goto done;
    }

    FUNC_11(FUNC_10("[SC] QueryServiceConfig2 SUCCESS\n\n"));

    FUNC_11(FUNC_10("SERVICE_NAME: %s\n"), VAR_6);
    FUNC_11(FUNC_10("        DESCRIPTION        : %s\n"),
             (VAR_11->lpDescription) ? VAR_11->lpDescription : FUNC_10(""));

done:
    if (VAR_9 == VAR_1)
        FUNC_8();

    if (VAR_11 != ((void*)0))
        FUNC_4(FUNC_2(), 0, VAR_11);

    if (VAR_8)
        FUNC_0(VAR_8);

    if (VAR_7)
        FUNC_0(VAR_7);

    return VAR_9;
}
