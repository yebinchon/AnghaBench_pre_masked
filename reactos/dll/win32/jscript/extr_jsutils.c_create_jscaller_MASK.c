
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* jscaller; } ;
typedef TYPE_2__ script_ctx_t ;
struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_8__ {int ref; TYPE_2__* ctx; TYPE_1__ IServiceProvider_iface; } ;
typedef TYPE_3__ JSCaller ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_0 (int) ;

HRESULT FUNC_1(script_ctx_t *VAR_3)
{
    JSCaller *VAR_4;

    VAR_4 = FUNC_0(sizeof(*VAR_4));
    if(!VAR_4)
        return VAR_0;

    VAR_4->IServiceProvider_iface.lpVtbl = &VAR_2;
    VAR_4->ref = 1;
    VAR_4->ctx = VAR_3;

    VAR_3->jscaller = VAR_4;
    return VAR_1;
}
