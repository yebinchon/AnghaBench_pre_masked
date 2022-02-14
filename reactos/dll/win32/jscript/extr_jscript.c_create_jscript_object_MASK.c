
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int * lpVtbl; } ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_13__ {int * lpVtbl; } ;
struct TYPE_12__ {int * lpVtbl; } ;
struct TYPE_11__ {int * lpVtbl; } ;
struct TYPE_10__ {int * lpVtbl; } ;
struct TYPE_15__ {int ref; TYPE_8__ IActiveScript_iface; int is_encode; int safeopt; TYPE_5__ IVariantChangeType_iface; TYPE_4__ IObjectSafety_iface; TYPE_3__ IActiveScriptProperty_iface; TYPE_2__ IActiveScriptParseProcedure2_iface; TYPE_1__ IActiveScriptParse_iface; } ;
typedef int REFIID ;
typedef TYPE_6__ JScript ;
typedef int HRESULT ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_8__*,int ,void**) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* FUNC_2 (int) ;
 int FUNC_3 () ;

HRESULT FUNC_4(BOOL VAR_8, REFIID VAR_9, void **VAR_10)
{
    JScript *VAR_11;
    HRESULT VAR_12;

    VAR_11 = FUNC_2(sizeof(*VAR_11));
    if(!VAR_11)
        return VAR_0;

    FUNC_3();

    VAR_11->IActiveScript_iface.lpVtbl = &VAR_6;
    VAR_11->IActiveScriptParse_iface.lpVtbl = &VAR_3;
    VAR_11->IActiveScriptParseProcedure2_iface.lpVtbl = &VAR_2;
    VAR_11->IActiveScriptProperty_iface.lpVtbl = &VAR_4;
    VAR_11->IObjectSafety_iface.lpVtbl = &VAR_5;
    VAR_11->IVariantChangeType_iface.lpVtbl = &VAR_7;
    VAR_11->ref = 1;
    VAR_11->safeopt = VAR_1;
    VAR_11->is_encode = VAR_8;

    VAR_12 = FUNC_0(&VAR_11->IActiveScript_iface, VAR_9, VAR_10);
    FUNC_1(&VAR_11->IActiveScript_iface);
    return VAR_12;
}
