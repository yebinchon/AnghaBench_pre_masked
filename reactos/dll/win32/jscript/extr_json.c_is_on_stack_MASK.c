
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t stack_top; int ** stack; } ;
typedef TYPE_1__ stringify_ctx_t ;
typedef int jsdisp_t ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(stringify_ctx_t *VAR_2, jsdisp_t *VAR_3)
{
    size_t VAR_4 = VAR_2->stack_top;
    while(VAR_4--) {
        if(VAR_2->stack[VAR_4] == VAR_3)
            return VAR_1;
    }
    return VAR_0;
}
