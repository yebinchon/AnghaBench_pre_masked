
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int jsdisp; } ;
struct TYPE_11__ {TYPE_1__ u; } ;
typedef TYPE_3__ vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int WORD ;
struct TYPE_12__ {TYPE_2__* vtbl; } ;
struct TYPE_10__ {int (* call ) (int *,TYPE_4__*,int *,int ,unsigned int,int *,int *) ;} ;
typedef int HRESULT ;
typedef TYPE_4__ FunctionInstance ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (int *,TYPE_4__*,int *,int ,unsigned int,int *,int *) ;

HRESULT FUNC_5(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    FunctionInstance *VAR_8;

    FUNC_1("\n");

    if(!FUNC_3(VAR_3, VAR_1)) {
        FUNC_0("dispex is not a function\n");
        return VAR_0;
    }

    VAR_8 = FUNC_2(VAR_3->u.jsdisp);
    return VAR_8->vtbl->call(VAR_2, VAR_8, ((void*)0), VAR_4, VAR_5, VAR_6, VAR_7);
}
