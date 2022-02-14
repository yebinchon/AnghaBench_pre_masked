
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_7__ {int dwServiceType; } ;
struct TYPE_9__ {TYPE_1__ ServiceStatus; int * lpServiceName; int lpDisplayName; } ;
struct TYPE_8__ {int hDependsTreeView2; } ;
typedef TYPE_2__* PDEPENDDATA ;
typedef int LPWSTR ;
typedef TYPE_3__* LPENUM_SERVICE_STATUSW ;
typedef int * HTREEITEM ;
typedef size_t DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int *,int ,int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 TYPE_3__* FUNC_6 (int ,size_t*) ;
 int FUNC_7 (int *) ;
 int VAR_2 ;

VOID
FUNC_8(PDEPENDDATA VAR_3,
                        HTREEITEM VAR_4,
                        LPWSTR VAR_5)
{

    LPENUM_SERVICE_STATUSW VAR_6;
    LPWSTR VAR_7;
    DWORD VAR_8, VAR_9;
    BOOL VAR_10;


    VAR_6 = FUNC_6(VAR_5, &VAR_8);
    if (VAR_6)
    {
        for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        {

            VAR_10 = FUNC_7(VAR_6[VAR_9].lpServiceName);


            FUNC_0(VAR_3->hDependsTreeView2,
                              VAR_4,
                              VAR_6[VAR_9].lpDisplayName,
                              VAR_6[VAR_9].lpServiceName,
                              VAR_6[VAR_9].ServiceStatus.dwServiceType,
                              VAR_10);
        }

        FUNC_4(FUNC_3(),
                 0,
                 VAR_6);
    }
    else
    {

        if (!VAR_4)
        {

            FUNC_1(&VAR_7, VAR_2, VAR_1);

            FUNC_0(VAR_3->hDependsTreeView2,
                              ((void*)0),
                              VAR_7,
                              ((void*)0),
                              0,
                              VAR_0);

            FUNC_5(VAR_7);


            FUNC_2(VAR_3->hDependsTreeView2, VAR_0);
        }
    }
}
