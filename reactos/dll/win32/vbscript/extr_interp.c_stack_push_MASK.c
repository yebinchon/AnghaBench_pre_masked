
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack_size; int top; int * stack; } ;
typedef TYPE_1__ exec_ctx_t ;
typedef int VARIANT ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;

__attribute__((used)) static HRESULT FUNC_2(exec_ctx_t *VAR_2, VARIANT *VAR_3)
{
    if(VAR_2->stack_size == VAR_2->top) {
        VARIANT *VAR_4;

        VAR_4 = FUNC_1(VAR_2->stack, VAR_2->stack_size*2*sizeof(*VAR_2->stack));
        if(!VAR_4) {
            FUNC_0(VAR_3);
            return VAR_0;
        }

        VAR_2->stack = VAR_4;
        VAR_2->stack_size *= 2;
    }

    VAR_2->stack[VAR_2->top++] = *VAR_3;
    return VAR_1;
}
