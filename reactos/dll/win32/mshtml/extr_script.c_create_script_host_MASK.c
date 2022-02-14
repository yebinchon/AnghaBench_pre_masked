
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {int script_hosts; } ;
struct TYPE_19__ {int * lpVtbl; } ;
struct TYPE_18__ {int * lpVtbl; } ;
struct TYPE_17__ {int * lpVtbl; } ;
struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_15__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_20__ {int ref; int script; int guid; int entry; int script_state; TYPE_8__* window; TYPE_6__ IServiceProvider_iface; TYPE_5__ IActiveScriptSiteDebug_iface; TYPE_4__ IActiveScriptSiteUIControl_iface; TYPE_3__ IActiveScriptSiteWindow_iface; TYPE_2__ IActiveScriptSiteInterruptPoll_iface; TYPE_1__ IActiveScriptSite_iface; } ;
typedef TYPE_7__ ScriptHost ;
typedef TYPE_8__ HTMLInnerWindow ;
typedef int HRESULT ;
typedef int GUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int *,int,int *,void**) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*,int ) ;
 TYPE_7__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_7__*) ;

__attribute__((used)) static ScriptHost *FUNC_7(HTMLInnerWindow *VAR_10, const GUID *VAR_11)
{
    ScriptHost *VAR_12;
    HRESULT VAR_13;

    VAR_12 = FUNC_3(sizeof(*VAR_12));
    if(!VAR_12)
        return ((void*)0);

    VAR_12->IActiveScriptSite_iface.lpVtbl = &VAR_4;
    VAR_12->IActiveScriptSiteInterruptPoll_iface.lpVtbl = &VAR_2;
    VAR_12->IActiveScriptSiteWindow_iface.lpVtbl = &VAR_5;
    VAR_12->IActiveScriptSiteUIControl_iface.lpVtbl = &VAR_3;
    VAR_12->IActiveScriptSiteDebug_iface.lpVtbl = &VAR_1;
    VAR_12->IServiceProvider_iface.lpVtbl = &VAR_0;
    VAR_12->ref = 1;
    VAR_12->window = VAR_10;
    VAR_12->script_state = VAR_9;

    VAR_12->guid = *VAR_11;
    FUNC_5(&VAR_10->script_hosts, &VAR_12->entry);

    VAR_13 = FUNC_0(&VAR_12->guid, ((void*)0), VAR_7|VAR_6,
            &VAR_8, (void**)&VAR_12->script);
    if(FUNC_1(VAR_13))
        FUNC_2("Could not load script engine: %08x\n", VAR_13);
    else if(!FUNC_4(VAR_12))
        FUNC_6(VAR_12);

    return VAR_12;
}
