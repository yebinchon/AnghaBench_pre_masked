
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack_size; int stack_top; int * stack; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int jsval_t ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static HRESULT FUNC_3(script_ctx_t *VAR_2, jsval_t VAR_3)
{
    if(!VAR_2->stack_size) {
        VAR_2->stack = FUNC_0(16*sizeof(*VAR_2->stack));
        if(!VAR_2->stack)
            return VAR_0;
        VAR_2->stack_size = 16;
    }else if(VAR_2->stack_size == VAR_2->stack_top) {
        jsval_t *VAR_4;

        VAR_4 = FUNC_1(VAR_2->stack, VAR_2->stack_size*2*sizeof(*VAR_4));
        if(!VAR_4) {
            FUNC_2(VAR_3);
            return VAR_0;
        }

        VAR_2->stack = VAR_4;
        VAR_2->stack_size *= 2;
    }

    VAR_2->stack[VAR_2->stack_top++] = VAR_3;
    return VAR_1;
}
