
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* call_ctx; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_6__ {int scope; } ;
typedef int IDispatch ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ,int **) ;

__attribute__((used)) static HRESULT FUNC_8(script_ctx_t *VAR_0)
{
    IDispatch *VAR_1;
    jsval_t VAR_2;
    HRESULT VAR_3;

    FUNC_2("\n");

    VAR_2 = FUNC_5(VAR_0);
    VAR_3 = FUNC_7(VAR_0, VAR_2, &VAR_1);
    FUNC_3(VAR_2);
    if(FUNC_0(VAR_3))
        return VAR_3;

    VAR_3 = FUNC_4(VAR_0->call_ctx->scope, FUNC_6(VAR_1), VAR_1, &VAR_0->call_ctx->scope);
    FUNC_1(VAR_1);
    return VAR_3;
}
