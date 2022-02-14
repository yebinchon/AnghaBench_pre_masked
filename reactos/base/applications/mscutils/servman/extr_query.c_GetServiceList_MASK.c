
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_7__ {int ServiceStatusProcess; void* lpDisplayName; void* lpServiceName; } ;
struct TYPE_6__ {int NumServices; TYPE_2__* pAllServices; } ;
typedef int SERVICE_STATUS_PROCESS ;
typedef int * SC_HANDLE ;
typedef TYPE_1__* PMAIN_WND_INFO ;
typedef int * LPBYTE ;
typedef TYPE_2__ ENUM_SERVICE_STATUS_PROCESS ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int *,int,int*,int*,int*,int ) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 () ;
 int VAR_2 ;
 void* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int * FUNC_7 (int *,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (void*,void*) ;
 int FUNC_9 (void*) ;

BOOL
FUNC_10(PMAIN_WND_INFO VAR_9)
{
    ENUM_SERVICE_STATUS_PROCESS *VAR_10 = ((void*)0);
    SC_HANDLE VAR_11;
    BOOL VAR_12 = VAR_1;

    DWORD VAR_13 = 0;
    DWORD VAR_14 = 0;
    DWORD VAR_15 = 0;
    DWORD VAR_16;

    FUNC_3(VAR_9);

    VAR_11 = FUNC_7(((void*)0),
                              ((void*)0),
                              VAR_5);
    if (VAR_11 != ((void*)0))
    {
        if (!FUNC_2(VAR_11,
                                  VAR_4,
                                  VAR_7,
                                  VAR_6,
                                  ((void*)0),
                                  0,
                                  &VAR_13,
                                  &VAR_15,
                                  &VAR_14,
                                  0))
        {

            if (FUNC_4() == VAR_0)
            {

                VAR_10 = (ENUM_SERVICE_STATUS_PROCESS *)FUNC_5(VAR_3,
                                                                     0,
                                                                     VAR_13);
                if (VAR_10)
                {

                    if (FUNC_2(VAR_11,
                                             VAR_4,
                                             VAR_7,
                                             VAR_6,
                                             (LPBYTE)VAR_10,
                                             VAR_13,
                                             &VAR_13,
                                             &VAR_15,
                                             &VAR_14,
                                             0))
                    {
                        VAR_12 = VAR_8;
                    }
                }
            }
        }
    }

    if (VAR_11)
        FUNC_0(VAR_11);

    VAR_9->pAllServices = (ENUM_SERVICE_STATUS_PROCESS *)FUNC_5(VAR_3,
                                                                  VAR_2,
                                                                  VAR_15 * sizeof(ENUM_SERVICE_STATUS_PROCESS));
    if (VAR_9->pAllServices != ((void*)0))
    {
        VAR_9->NumServices = VAR_15;

        for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
        {
            VAR_9->pAllServices[VAR_16].lpServiceName = FUNC_5(VAR_3,
                                                            VAR_2,
                                                            (FUNC_9(VAR_10[VAR_16].lpServiceName) + 1) * sizeof(WCHAR));
            if (VAR_9->pAllServices[VAR_16].lpServiceName)
                FUNC_8(VAR_9->pAllServices[VAR_16].lpServiceName, VAR_10[VAR_16].lpServiceName);

            VAR_9->pAllServices[VAR_16].lpDisplayName = FUNC_5(VAR_3,
                                                            VAR_2,
                                                            (FUNC_9(VAR_10[VAR_16].lpDisplayName) + 1) * sizeof(WCHAR));
            if (VAR_9->pAllServices[VAR_16].lpDisplayName)
                FUNC_8(VAR_9->pAllServices[VAR_16].lpDisplayName, VAR_10[VAR_16].lpDisplayName);

            FUNC_1(&VAR_9->pAllServices[VAR_16].ServiceStatusProcess,
                       &VAR_10[VAR_16].ServiceStatusProcess,
                       sizeof(SERVICE_STATUS_PROCESS));
        }
    }

    if (VAR_10)
        FUNC_6(VAR_3, 0, VAR_10);

    return VAR_12;
}
