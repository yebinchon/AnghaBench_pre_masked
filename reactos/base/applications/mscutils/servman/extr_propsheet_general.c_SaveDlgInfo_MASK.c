
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
struct TYPE_13__ {int lpServiceName; TYPE_2__* lpDisplayName; } ;
struct TYPE_12__ {TYPE_1__* dlgInfo; scalar_t__ bDescriptionChanged; scalar_t__ bStartTypeChanged; scalar_t__ bDisplayNameChanged; scalar_t__ bBinaryPathChanged; } ;
struct TYPE_11__ {struct TYPE_11__* lpBinaryPathName; struct TYPE_11__* lpDisplayName; void* dwStartType; void* dwErrorControl; void* dwServiceType; } ;
struct TYPE_10__ {TYPE_9__* pService; int Info; } ;
typedef TYPE_2__* PWSTR ;
typedef TYPE_3__* PPAGEDATA ;
typedef TYPE_2__* LPQUERY_SERVICE_CONFIG ;
typedef int LPARAM ;
typedef int INT ;
typedef int HWND ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_9__*,int ) ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_3 (int ,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;
 int VAR_14 ;
 int VAR_15 ;

VOID
FUNC_6(PPAGEDATA VAR_16,
            HWND VAR_17)
{
    LPQUERY_SERVICE_CONFIG VAR_18 = ((void*)0);
    PWSTR VAR_19 = ((void*)0);
    PWSTR VAR_20;
    INT VAR_21;
    DWORD VAR_22;

    VAR_18 = FUNC_1(VAR_9,
                               VAR_1,
                               sizeof(*VAR_18));
    if (VAR_18)
    {
        VAR_18->dwServiceType = VAR_13;
        VAR_18->dwErrorControl = VAR_13;
        VAR_18->dwStartType = VAR_13;

        if (VAR_16->bStartTypeChanged)
        {
            VAR_22 = FUNC_3(VAR_17, VAR_5, VAR_0, 0, 0);
            switch (VAR_22)
            {
                case 0:
                    VAR_18->dwStartType = VAR_10;
                    break;

                case 1:
                    VAR_18->dwStartType = VAR_11;
                    break;
                case 2:
                    VAR_18->dwStartType = VAR_12;
                    break;
            }
        }

        if (VAR_16->bBinaryPathChanged)
        {
            VAR_21 = FUNC_3(VAR_17, VAR_4, VAR_15, 0, 0);
            VAR_18->lpBinaryPathName = FUNC_1(VAR_9,
                                                         VAR_1,
                                                         (VAR_21 + 1) * sizeof(WCHAR));
            if (VAR_18->lpBinaryPathName != ((void*)0))
                FUNC_3(VAR_17, VAR_4, VAR_14, VAR_21 + 1, (LPARAM)VAR_18->lpBinaryPathName);
        }

        if (VAR_16->bDisplayNameChanged)
        {
            VAR_21 = FUNC_3(VAR_17, VAR_3, VAR_15, 0, 0);
            VAR_19 = FUNC_1(VAR_9,
                                     VAR_1,
                                     (VAR_21 + 1) * sizeof(WCHAR));
            if (VAR_19 != ((void*)0))
            {
                FUNC_3(VAR_17, VAR_3, VAR_14, VAR_21 + 1, (LPARAM)VAR_19);

                if (VAR_16->dlgInfo->pService->lpDisplayName)
                    FUNC_2(VAR_9, 0, VAR_16->dlgInfo->pService->lpDisplayName);

                VAR_16->dlgInfo->pService->lpDisplayName = VAR_19;
                VAR_18->lpDisplayName = VAR_19;
            }
        }

        if (FUNC_4(VAR_18,
                             VAR_16->dlgInfo->pService->lpServiceName,
                             ((void*)0)))
        {
            if (VAR_16->bDisplayNameChanged)
                FUNC_0(VAR_16->dlgInfo->Info,
                                   VAR_16->dlgInfo->pService,
                                   VAR_7);

            if (VAR_16->bStartTypeChanged)
                FUNC_0(VAR_16->dlgInfo->Info,
                                   VAR_16->dlgInfo->pService,
                                   VAR_8);
        }

        if (VAR_18->lpBinaryPathName != ((void*)0))
            FUNC_2(VAR_9, 0, VAR_18->lpBinaryPathName);

        FUNC_2(VAR_9, 0, VAR_18);
    }

    if (VAR_16->bDescriptionChanged)
    {
        VAR_21 = FUNC_3(VAR_17, VAR_2, VAR_15, 0, 0);
        VAR_20 = FUNC_1(VAR_9, VAR_1, (VAR_21 + 1) * sizeof(WCHAR));
        if (VAR_20 != ((void*)0))
        {
            FUNC_3(VAR_17, VAR_2, VAR_14, VAR_21 + 1, (LPARAM)VAR_20);

            if (FUNC_5(VAR_16->dlgInfo->pService->lpServiceName,
                                      VAR_20))
            {
                FUNC_0(VAR_16->dlgInfo->Info,
                                   VAR_16->dlgInfo->pService,
                                   VAR_6);
            }

            FUNC_2(VAR_9, 0, VAR_20);
        }
    }
}
