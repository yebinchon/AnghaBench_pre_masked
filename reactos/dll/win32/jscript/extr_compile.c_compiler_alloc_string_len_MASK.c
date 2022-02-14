
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsstr_t ;
struct TYPE_5__ {TYPE_1__* code; } ;
typedef TYPE_2__ compiler_ctx_t ;
typedef int WCHAR ;
struct TYPE_4__ {int str_pool_size; int str_cnt; int ** str_pool; } ;


 int ** FUNC_0 (int) ;
 int ** FUNC_1 (int **,int) ;
 int * FUNC_2 (int const*,unsigned int) ;

jsstr_t *FUNC_3(compiler_ctx_t *VAR_0, const WCHAR *VAR_1, unsigned VAR_2)
{
    jsstr_t *VAR_3;

    if(!VAR_0->code->str_pool_size) {
        VAR_0->code->str_pool = FUNC_0(8 * sizeof(jsstr_t*));
        if(!VAR_0->code->str_pool)
            return ((void*)0);
        VAR_0->code->str_pool_size = 8;
    }else if(VAR_0->code->str_pool_size == VAR_0->code->str_cnt) {
        jsstr_t **VAR_4;

        VAR_4 = FUNC_1(VAR_0->code->str_pool, VAR_0->code->str_pool_size*2*sizeof(jsstr_t*));
        if(!VAR_4)
            return ((void*)0);

        VAR_0->code->str_pool = VAR_4;
        VAR_0->code->str_pool_size *= 2;
    }

    VAR_3 = FUNC_2(VAR_1, VAR_2);
    if(!VAR_3)
        return ((void*)0);

    VAR_0->code->str_pool[VAR_0->code->str_cnt++] = VAR_3;
    return VAR_3;
}
