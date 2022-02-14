
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* call_ctx; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsval_t ;
typedef int jsdisp_t ;
struct TYPE_7__ {int scope; } ;
typedef int HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int *,int *,int **) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *,int const,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static HRESULT FUNC_10(script_ctx_t *VAR_0)
{
    const BSTR VAR_1 = FUNC_3(VAR_0, 0);
    jsdisp_t *VAR_2;
    jsval_t VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_2(VAR_0, ((void*)0), ((void*)0), &VAR_2);
    if(FUNC_0(VAR_4))
        return VAR_4;

    VAR_3 = FUNC_8(VAR_0);
    VAR_4 = FUNC_4(VAR_2, VAR_1, VAR_3);
    FUNC_6(VAR_3);
    if(FUNC_1(VAR_4))
        VAR_4 = FUNC_7(VAR_0->call_ctx->scope, VAR_2, FUNC_9(VAR_2), &VAR_0->call_ctx->scope);
    FUNC_5(VAR_2);
    return VAR_4;
}
