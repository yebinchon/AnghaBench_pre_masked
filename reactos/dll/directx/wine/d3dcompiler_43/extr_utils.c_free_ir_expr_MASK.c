
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_expr {int subexpressions; int * operands; } ;


 int FUNC_0 (struct hlsl_ir_expr*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hlsl_ir_expr *VAR_0)
{
    unsigned int VAR_1;

    for (VAR_1 = 0; VAR_1 < 3; ++VAR_1)
    {
        if (!VAR_0->operands[VAR_1])
            break;
        FUNC_1(VAR_0->operands[VAR_1]);
    }
    FUNC_2(VAR_0->subexpressions);
    FUNC_0(VAR_0);
}
