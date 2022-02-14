
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* Flink; } ;
struct TYPE_13__ {TYPE_3__ PtiList; } ;
struct TYPE_11__ {int W32PF_flags; int peProcess; } ;
struct TYPE_10__ {TYPE_2__* ppi; } ;
typedef TYPE_1__* PTHREADINFO ;
typedef TYPE_2__* PPROCESSINFO ;
typedef TYPE_3__* PLIST_ENTRY ;
typedef TYPE_4__* PDESKTOP ;
typedef int LPARAM ;
typedef scalar_t__ HHOOK ;
typedef int BOOL ;


 TYPE_1__* FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_1__*,int ,int,int ,int ,int *,int ,int ,int ) ;
 int VAR_6 ;

BOOL
FUNC_6(PDESKTOP VAR_7, int VAR_8, HHOOK VAR_9)
{
    PTHREADINFO VAR_10;
    PLIST_ENTRY VAR_11;
    PPROCESSINFO VAR_12;

    FUNC_4("IntHookModuleUnloaded: iHookID=%d\n", VAR_8);

    VAR_12 = FUNC_2(VAR_6);

    VAR_11 = VAR_7->PtiList.Flink;
    while(VAR_11 != &VAR_7->PtiList)
    {
        VAR_10 = FUNC_0(VAR_11, VAR_3, VAR_2);




        if(!FUNC_3(VAR_10->ppi->peProcess) &&
           VAR_10->ppi != VAR_12)
        {
            if(VAR_10->ppi->W32PF_flags & VAR_5)
            {
                FUNC_4("IntHookModuleUnloaded: sending message to PID %p, ppi=%p\n", FUNC_1(VAR_10->ppi->peProcess), VAR_10->ppi);
                FUNC_5( VAR_10,
                                        0,
                                        VAR_8,
                                        VAR_4,
                                        (LPARAM)VAR_9,
                                        ((void*)0),
                                        0,
                                        VAR_0,
                                        VAR_1);
            }
        }
        VAR_11 = VAR_11->Flink;
    }

    return VAR_4;
}
