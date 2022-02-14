
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lpDisplayName; int lpPassword; int lpServiceStartName; int lpDependencies; int dwTagId; scalar_t__ bTagId; int lpLoadOrderGroup; int lpBinaryPathName; int dwErrorControl; int dwStartType; int dwServiceType; int lpServiceName; } ;
typedef TYPE_1__ SERVICE_CREATE_INFO ;
typedef int * SC_HANDLE ;
typedef int LPCTSTR ;
typedef int INT ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int *,int ,int ,int ,int ,int ,int *,int ,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 () ;
 int * FUNC_3 (int *,int *,int ) ;
 int * FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,TYPE_1__*) ;
 int FUNC_6 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,...) ;

BOOL FUNC_10(LPCTSTR *VAR_4, INT VAR_5)
{
    SC_HANDLE VAR_6 = ((void*)0);
    SC_HANDLE VAR_7 = ((void*)0);
    BOOL VAR_8 = VAR_3;
    SERVICE_CREATE_INFO VAR_9;

    if (!FUNC_5(VAR_4, VAR_5, VAR_3, &VAR_9))
    {
        FUNC_7();
        return VAR_0;
    }
    VAR_6 = FUNC_3(((void*)0),
                             ((void*)0),
                             VAR_1);
    if (VAR_6 == ((void*)0))
    {
        FUNC_9(FUNC_8("[SC] OpenSCManager FAILED %lu:\n\n"), FUNC_2());
        VAR_8 = VAR_0;
        goto done;
    }

    VAR_7 = FUNC_4(VAR_6,
                           VAR_9.lpServiceName,
                           VAR_2);
    if (VAR_7 == ((void*)0))
    {
        FUNC_9(FUNC_8("[SC] OpenService FAILED %lu:\n\n"), FUNC_2());
        VAR_8 = VAR_0;
        goto done;
    }

    if (!FUNC_0(VAR_7,
                             VAR_9.dwServiceType,
                             VAR_9.dwStartType,
                             VAR_9.dwErrorControl,
                             VAR_9.lpBinaryPathName,
                             VAR_9.lpLoadOrderGroup,
                             VAR_9.bTagId ? &VAR_9.dwTagId : ((void*)0),
                             VAR_9.lpDependencies,
                             VAR_9.lpServiceStartName,
                             VAR_9.lpPassword,
                             VAR_9.lpDisplayName))
    {
        FUNC_9(FUNC_8("[SC] ChangeServiceConfig FAILED %lu:\n\n"), FUNC_2());
        VAR_8 = VAR_0;
        goto done;
    }

    FUNC_9(FUNC_8("[SC] ChangeServiceConfig SUCCESS\n\n"));

done:
    if (VAR_8 == VAR_0)
        FUNC_6();

    if (VAR_7)
        FUNC_1(VAR_7);

    if (VAR_6)
        FUNC_1(VAR_6);

    return VAR_8;
}
