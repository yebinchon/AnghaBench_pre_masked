
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int script_ctx_t ;
struct TYPE_14__ {int * lpVtbl; } ;
struct TYPE_17__ {int ref; int buf_size; int prop_cnt; int * ctx; TYPE_10__* props; struct TYPE_17__* prototype; TYPE_5__ const* builtin_info; TYPE_1__ IDispatchEx_iface; } ;
typedef TYPE_4__ jsdisp_t ;
typedef int dispex_prop_t ;
struct TYPE_16__ {scalar_t__ getter; scalar_t__ invoke; } ;
struct TYPE_18__ {TYPE_3__ value_prop; } ;
typedef TYPE_5__ builtin_info_t ;
struct TYPE_15__ {TYPE_3__* p; } ;
struct TYPE_13__ {int type; TYPE_2__ u; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_4__*,TYPE_4__*) ;
 TYPE_10__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *) ;

HRESULT FUNC_4(jsdisp_t *VAR_5, script_ctx_t *VAR_6, const builtin_info_t *VAR_7, jsdisp_t *VAR_8)
{
    FUNC_0("%p (%p)\n", VAR_5, VAR_8);

    VAR_5->IDispatchEx_iface.lpVtbl = &VAR_0;
    VAR_5->ref = 1;
    VAR_5->builtin_info = VAR_7;

    VAR_5->props = FUNC_1(sizeof(dispex_prop_t)*(VAR_5->buf_size=4));
    if(!VAR_5->props)
        return VAR_1;

    VAR_5->prototype = VAR_8;
    if(VAR_8)
        FUNC_2(VAR_8);

    VAR_5->prop_cnt = 1;
    if(VAR_7->value_prop.invoke || VAR_7->value_prop.getter) {
        VAR_5->props[0].type = VAR_2;
        VAR_5->props[0].u.p = &VAR_7->value_prop;
    }else {
        VAR_5->props[0].type = VAR_3;
    }

    FUNC_3(VAR_6);
    VAR_5->ctx = VAR_6;

    return VAR_4;
}
