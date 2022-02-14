
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int jsval_t ;
typedef int jsdisp_t ;
typedef int WORD ;
struct TYPE_7__ {int ctx; } ;
struct TYPE_8__ {TYPE_2__ dispex; TYPE_1__* vtbl; } ;
struct TYPE_6__ {int (* call ) (int ,TYPE_3__*,int *,int ,unsigned int,int *,int *) ;} ;
typedef int IDispatch ;
typedef int HRESULT ;
typedef TYPE_3__ FunctionInstance ;


 int VAR_0 ;
 int FUNC_0 (char*,int *,int *) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,TYPE_3__*,int *,int ,unsigned int,int *,int *) ;

HRESULT FUNC_5(jsdisp_t *VAR_1, IDispatch *VAR_2, WORD VAR_3, unsigned VAR_4, jsval_t *VAR_5, jsval_t *VAR_6)
{
    FunctionInstance *VAR_7;

    FUNC_0("func %p this %p\n", VAR_1, VAR_2);

    FUNC_1(FUNC_3(VAR_1, VAR_0));
    VAR_7 = FUNC_2(VAR_1);

    return VAR_7->vtbl->call(VAR_7->dispex.ctx, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
