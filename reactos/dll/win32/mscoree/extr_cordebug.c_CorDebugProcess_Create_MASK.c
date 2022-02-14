
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int ICorDebug_iface; } ;
struct TYPE_9__ {int * lpVtbl; } ;
struct TYPE_11__ {int ref; TYPE_1__ ICorDebugProcess_iface; TYPE_4__* cordebug; int dwProcessID; int handle; int thread; } ;
struct TYPE_10__ {int dwProcessId; int hThread; int hProcess; } ;
typedef TYPE_2__* LPPROCESS_INFORMATION ;
typedef int IUnknown ;
typedef int HRESULT ;
typedef TYPE_3__ DebugProcess ;
typedef TYPE_4__ CorDebug ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_3__* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static HRESULT FUNC_8(CorDebug *VAR_6, IUnknown** VAR_7, LPPROCESS_INFORMATION VAR_8)
{
    DebugProcess *VAR_9;

    VAR_9 = FUNC_5( FUNC_4(), 0, sizeof *VAR_9 );
    if ( !VAR_9 )
        return VAR_2;

    if(!FUNC_1(FUNC_3(), VAR_8->hProcess,
                    FUNC_3(), &VAR_9->handle, 0, VAR_3, VAR_0))
    {
        FUNC_2("Failed to duplicate process handle\n");
        FUNC_6(FUNC_4(), 0, VAR_9);
        return VAR_1;
    }
    if(!FUNC_1(FUNC_3(), VAR_8->hThread,
                    FUNC_3(), &VAR_9->thread, 0, VAR_3, VAR_0))
    {
        FUNC_0(VAR_9->handle);

        FUNC_2("Failed to duplicate thread handle\n");
        FUNC_6(FUNC_4(), 0, VAR_9);
        return VAR_1;
    }

    VAR_9->ICorDebugProcess_iface.lpVtbl = &VAR_5;
    VAR_9->ref = 1;
    VAR_9->cordebug = VAR_6;
    VAR_9->dwProcessID = VAR_8->dwProcessId;

    if(VAR_9->cordebug)
        FUNC_7(&VAR_9->cordebug->ICorDebug_iface);

    *VAR_7 = (IUnknown*)&VAR_9->ICorDebugProcess_iface;

    return VAR_4;
}
