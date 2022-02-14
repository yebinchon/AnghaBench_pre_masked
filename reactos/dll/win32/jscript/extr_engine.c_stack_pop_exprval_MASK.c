
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stack_top; } ;
typedef TYPE_1__ script_ctx_t ;
typedef int exprval_t ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int ,int *) ;

__attribute__((used)) static inline BOOL FUNC_1(script_ctx_t *VAR_0, exprval_t *VAR_1)
{
    BOOL VAR_2 = FUNC_0(VAR_0, 0, VAR_1);
    VAR_0->stack_top -= 2;
    return VAR_2;
}
