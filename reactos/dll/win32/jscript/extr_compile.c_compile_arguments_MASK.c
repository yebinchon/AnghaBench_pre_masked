
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* code; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int WCHAR ;
struct TYPE_6__ {int param_cnt; int * params; } ;
struct TYPE_8__ {TYPE_1__ global_code; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (TYPE_2__*,int const*,int *,int*) ;

__attribute__((used)) static HRESULT FUNC_3(compiler_ctx_t *VAR_1, const WCHAR *VAR_2)
{
    HRESULT VAR_3;

    VAR_3 = FUNC_2(VAR_1, VAR_2, ((void*)0), &VAR_1->code->global_code.param_cnt);
    if(FUNC_0(VAR_3))
        return VAR_3;

    VAR_1->code->global_code.params = FUNC_1(VAR_1->code,
            VAR_1->code->global_code.param_cnt * sizeof(*VAR_1->code->global_code.params));
    if(!VAR_1->code->global_code.params)
        return VAR_0;

    return FUNC_2(VAR_1, VAR_2, VAR_1->code->global_code.params, ((void*)0));
}
