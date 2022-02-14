
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
struct TYPE_5__ {int * lpVtbl; } ;
struct TYPE_6__ {int ref; int * ctx; TYPE_1__ IDispatchEx_iface; } ;
typedef TYPE_2__ ScriptDisp ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int) ;

HRESULT FUNC_1(script_ctx_t *VAR_3, ScriptDisp **VAR_4)
{
    ScriptDisp *VAR_5;

    VAR_5 = FUNC_0(sizeof(*VAR_5));
    if(!VAR_5)
        return VAR_0;

    VAR_5->IDispatchEx_iface.lpVtbl = &VAR_2;
    VAR_5->ref = 1;
    VAR_5->ctx = VAR_3;

    *VAR_4 = VAR_5;
    return VAR_1;
}
