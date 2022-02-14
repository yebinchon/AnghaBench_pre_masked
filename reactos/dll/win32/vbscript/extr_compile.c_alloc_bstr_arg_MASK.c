
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* code; } ;
typedef TYPE_2__ compile_ctx_t ;
typedef int WCHAR ;
struct TYPE_4__ {int bstr_pool_size; size_t bstr_cnt; int ** bstr_pool; } ;
typedef int * BSTR ;


 int * FUNC_0 (int const*) ;
 int ** FUNC_1 (int) ;
 int ** FUNC_2 (int **,int) ;

__attribute__((used)) static BSTR FUNC_3(compile_ctx_t *VAR_0, const WCHAR *VAR_1)
{
    if(!VAR_0->code->bstr_pool_size) {
        VAR_0->code->bstr_pool = FUNC_1(8 * sizeof(BSTR));
        if(!VAR_0->code->bstr_pool)
            return ((void*)0);
        VAR_0->code->bstr_pool_size = 8;
    }else if(VAR_0->code->bstr_pool_size == VAR_0->code->bstr_cnt) {
        BSTR *VAR_2;

        VAR_2 = FUNC_2(VAR_0->code->bstr_pool, VAR_0->code->bstr_pool_size*2*sizeof(BSTR));
        if(!VAR_2)
            return ((void*)0);

        VAR_0->code->bstr_pool = VAR_2;
        VAR_0->code->bstr_pool_size *= 2;
    }

    VAR_0->code->bstr_pool[VAR_0->code->bstr_cnt] = FUNC_0(VAR_1);
    if(!VAR_0->code->bstr_pool[VAR_0->code->bstr_cnt])
        return ((void*)0);

    return VAR_0->code->bstr_pool[VAR_0->code->bstr_cnt++];
}
