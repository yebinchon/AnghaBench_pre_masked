
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int jsdisp_t ;
struct TYPE_6__ {TYPE_1__* vtbl; } ;
struct TYPE_5__ {int (* toString ) (TYPE_2__*,int **) ;} ;
typedef int HRESULT ;
typedef TYPE_2__ FunctionInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int **) ;

HRESULT FUNC_5(script_ctx_t *VAR_1, jsdisp_t *VAR_2, jsval_t *VAR_3)
{
    FunctionInstance *VAR_4 = FUNC_2(VAR_2);
    jsstr_t *VAR_5;
    HRESULT VAR_6;

    FUNC_1("\n");

    VAR_6 = VAR_4->vtbl->toString(VAR_4, &VAR_5);
    if(FUNC_0(VAR_6))
        return VAR_6;

    *VAR_3 = FUNC_3(VAR_5);
    return VAR_0;
}
