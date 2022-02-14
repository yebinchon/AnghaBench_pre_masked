
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* code; } ;
typedef TYPE_2__ compiler_ctx_t ;
struct TYPE_4__ {int bstr_pool_size; int bstr_cnt; int * bstr_pool; } ;
typedef int BSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static BOOL FUNC_2(compiler_ctx_t *VAR_2)
{
    if(!VAR_2->code->bstr_pool_size) {
        VAR_2->code->bstr_pool = FUNC_0(8 * sizeof(BSTR));
        if(!VAR_2->code->bstr_pool)
            return VAR_0;
        VAR_2->code->bstr_pool_size = 8;
    }else if(VAR_2->code->bstr_pool_size == VAR_2->code->bstr_cnt) {
        BSTR *VAR_3;

        VAR_3 = FUNC_1(VAR_2->code->bstr_pool, VAR_2->code->bstr_pool_size*2*sizeof(BSTR));
        if(!VAR_3)
            return VAR_0;

        VAR_2->code->bstr_pool = VAR_3;
        VAR_2->code->bstr_pool_size *= 2;
    }

    return VAR_1;
}
