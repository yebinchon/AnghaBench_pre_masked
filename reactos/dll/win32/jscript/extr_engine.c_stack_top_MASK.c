
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int stack_top; int * stack; TYPE_1__* call_ctx; } ;
typedef TYPE_2__ script_ctx_t ;
typedef int jsval_t ;
struct TYPE_4__ {int stack_base; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline jsval_t FUNC_1(script_ctx_t *VAR_0)
{
    FUNC_0(VAR_0->stack_top > VAR_0->call_ctx->stack_base);
    return VAR_0->stack[VAR_0->stack_top-1];
}
