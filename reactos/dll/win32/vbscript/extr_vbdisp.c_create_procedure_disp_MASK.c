
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int main_code; } ;
typedef TYPE_1__ vbscode_t ;
struct TYPE_12__ {int IDispatchEx_iface; } ;
typedef TYPE_2__ vbdisp_t ;
struct TYPE_13__ {TYPE_4__* procs; } ;
typedef TYPE_3__ script_ctx_t ;
struct TYPE_14__ {struct TYPE_14__* next; int * value_func; int builtin_props; int builtin_prop_cnt; TYPE_3__* ctx; } ;
typedef TYPE_4__ class_desc_t ;
typedef int IDispatch ;
typedef int HRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_4__*,TYPE_2__**) ;
 TYPE_4__* FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;

HRESULT FUNC_5(script_ctx_t *VAR_3, vbscode_t *VAR_4, IDispatch **VAR_5)
{
    class_desc_t *VAR_6;
    vbdisp_t *VAR_7;
    HRESULT VAR_8;

    VAR_6 = FUNC_3(sizeof(*VAR_6));
    if(!VAR_6)
        return VAR_0;

    VAR_6->ctx = VAR_3;
    VAR_6->builtin_prop_cnt = FUNC_0(VAR_2);
    VAR_6->builtin_props = VAR_2;
    VAR_6->value_func = &VAR_4->main_code;

    VAR_8 = FUNC_2(VAR_6, &VAR_7);
    if(FUNC_1(VAR_8)) {
        FUNC_4(VAR_6);
        return VAR_8;
    }

    VAR_6->next = VAR_3->procs;
    VAR_3->procs = VAR_6;

    *VAR_5 = (IDispatch*)&VAR_7->IDispatchEx_iface;
    return VAR_1;
}
