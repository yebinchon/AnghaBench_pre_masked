
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_14__ {scalar_t__ lpBinaryPathName; } ;
struct TYPE_13__ {TYPE_2__* Info; TYPE_1__* pService; } ;
struct TYPE_12__ {scalar_t__ bIsUserAnAdmin; } ;
struct TYPE_11__ {scalar_t__ lpServiceName; scalar_t__ lpDisplayName; } ;
typedef TYPE_3__* PSERVICEPROPSHEET ;
typedef TYPE_4__* LPWSTR ;
typedef TYPE_4__* LPQUERY_SERVICE_CONFIG ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_4__* FUNC_2 (scalar_t__) ;
 TYPE_4__* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (scalar_t__,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static VOID
FUNC_8(PSERVICEPROPSHEET VAR_8,
                HWND VAR_9)
{
    LPQUERY_SERVICE_CONFIG VAR_10;
    LPWSTR VAR_11;


    FUNC_5(VAR_9,
                        VAR_4,
                        VAR_7,
                        0,
                        (LPARAM)VAR_8->pService->lpServiceName);


    FUNC_5(VAR_9,
                        VAR_1,
                        VAR_7,
                        0,
                        (LPARAM)VAR_8->pService->lpDisplayName);


    if ((VAR_11 = FUNC_3(VAR_8->pService->lpServiceName)))
    {
        FUNC_5(VAR_9,
                            VAR_0,
                            VAR_7,
                            0,
                            (LPARAM)VAR_11);

        FUNC_4(VAR_5,
                 0,
                 VAR_11);
    }

    VAR_10 = FUNC_2(VAR_8->pService->lpServiceName);
    if (VAR_10)
    {
        FUNC_5(VAR_9,
                            VAR_3,
                            VAR_7,
                            0,
                            (LPARAM)VAR_10->lpBinaryPathName);
        FUNC_4(VAR_5,
                 0,
                 VAR_10);
    }



    FUNC_7(VAR_8->pService->lpServiceName, VAR_9);

    FUNC_6(VAR_8,
                         VAR_9);

    if (VAR_8->Info->bIsUserAnAdmin)
    {
        FUNC_0(FUNC_1(VAR_9, VAR_2), VAR_6);
    }
}
