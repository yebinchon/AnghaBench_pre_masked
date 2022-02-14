
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; TYPE_2__ ICorDebug_iface; int * runtimehost; int processes; int * pCallback2; int * pCallback; TYPE_1__ ICorDebugProcessEnum_iface; } ;
typedef int IUnknown ;
typedef int ICLRRuntimeHost ;
typedef int HRESULT ;
typedef TYPE_3__ CorDebug ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_3__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;

HRESULT FUNC_4(ICLRRuntimeHost *VAR_4, IUnknown** VAR_5)
{
    CorDebug *VAR_6;

    VAR_6 = FUNC_1( FUNC_0(), 0, sizeof *VAR_6 );
    if ( !VAR_6 )
        return VAR_0;

    VAR_6->ICorDebug_iface.lpVtbl = &VAR_2;
    VAR_6->ICorDebugProcessEnum_iface.lpVtbl = &VAR_3;
    VAR_6->ref = 1;
    VAR_6->pCallback = ((void*)0);
    VAR_6->pCallback2 = ((void*)0);
    VAR_6->runtimehost = VAR_4;

    FUNC_3(&VAR_6->processes);

    if(VAR_6->runtimehost)
        FUNC_2(VAR_6->runtimehost);

    *VAR_5 = (IUnknown*)&VAR_6->ICorDebug_iface;

    return VAR_1;
}
