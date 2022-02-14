
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ code; int labels; int parser; } ;
typedef TYPE_1__ compile_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(compile_ctx_t *VAR_0)
{
    FUNC_1(&VAR_0->parser);
    FUNC_0(VAR_0->labels);
    if(VAR_0->code)
        FUNC_2(VAR_0->code);
}
