
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* code; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int WCHAR ;
struct TYPE_5__ {size_t bstr_cnt; int ** bstr_pool; } ;
typedef int * BSTR ;


 int * FUNC_0 (int const*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static BSTR FUNC_2(compiler_ctx_t *VAR_0, const WCHAR *VAR_1, size_t VAR_2)
{
    if(!FUNC_1(VAR_0))
        return ((void*)0);

    VAR_0->code->bstr_pool[VAR_0->code->bstr_cnt] = FUNC_0(VAR_1, VAR_2);
    if(!VAR_0->code->bstr_pool[VAR_0->code->bstr_cnt])
        return ((void*)0);

    return VAR_0->code->bstr_pool[VAR_0->code->bstr_cnt++];
}
