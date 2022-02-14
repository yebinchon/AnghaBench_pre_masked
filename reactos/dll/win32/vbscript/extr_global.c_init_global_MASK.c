
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int typeinfo; void* builtin_props; void* builtin_prop_cnt; TYPE_1__* ctx; } ;
struct TYPE_5__ {int err_obj; TYPE_3__ err_desc; int script_obj; int global_obj; TYPE_3__ global_desc; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int HRESULT ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 int FUNC_3 (TYPE_3__*,int *) ;
 void* VAR_2 ;
 int FUNC_4 (int ,int *) ;
 void* VAR_3 ;

HRESULT FUNC_5(script_ctx_t *VAR_4)
{
    HRESULT VAR_5;

    VAR_4->global_desc.ctx = VAR_4;
    VAR_4->global_desc.builtin_prop_cnt = FUNC_0(VAR_3);
    VAR_4->global_desc.builtin_props = VAR_3;

    VAR_5 = FUNC_4(VAR_1, &VAR_4->global_desc.typeinfo);
    if(FUNC_1(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_3(&VAR_4->global_desc, &VAR_4->global_obj);
    if(FUNC_1(VAR_5))
        return VAR_5;

    VAR_5 = FUNC_2(VAR_4, &VAR_4->script_obj);
    if(FUNC_1(VAR_5))
        return VAR_5;

    VAR_4->err_desc.ctx = VAR_4;
    VAR_4->err_desc.builtin_prop_cnt = FUNC_0(VAR_2);
    VAR_4->err_desc.builtin_props = VAR_2;

    VAR_5 = FUNC_4(VAR_0, &VAR_4->err_desc.typeinfo);
    if(FUNC_1(VAR_5))
        return VAR_5;

    return FUNC_3(&VAR_4->err_desc, &VAR_4->err_obj);
}
