
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vdisp_t ;
typedef int script_ctx_t ;
typedef int jsval_t ;
typedef int jsstr_t ;
typedef int WORD ;
struct TYPE_6__ {TYPE_1__* vtbl; } ;
struct TYPE_5__ {int (* toString ) (TYPE_2__*,int **) ;} ;
typedef int HRESULT ;
typedef TYPE_2__ FunctionInstance ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int **) ;
 int FUNC_6 (int *,int ,int *) ;

__attribute__((used)) static HRESULT FUNC_7(script_ctx_t *VAR_2, vdisp_t *VAR_3, WORD VAR_4, unsigned VAR_5, jsval_t *VAR_6,
        jsval_t *VAR_7)
{
    FunctionInstance *VAR_8;
    jsstr_t *VAR_9;
    HRESULT VAR_10;

    FUNC_1("\n");

    if(!(VAR_8 = FUNC_2(VAR_3)))
        return FUNC_6(VAR_2, VAR_0, ((void*)0));

    VAR_10 = VAR_8->vtbl->toString(VAR_8, &VAR_9);
    if(FUNC_0(VAR_10))
        return VAR_10;

    if(VAR_7)
        *VAR_7 = FUNC_4(VAR_9);
    else
        FUNC_3(VAR_9);
    return VAR_1;
}
