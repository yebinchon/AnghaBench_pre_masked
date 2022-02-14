
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_expr {scalar_t__* operands; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct hlsl_ir_expr const*) ;

__attribute__((used)) static void FUNC_3(const struct hlsl_ir_expr *VAR_0)
{
    unsigned int VAR_1;

    FUNC_0("%s (", FUNC_2(VAR_0));
    for (VAR_1 = 0; VAR_1 < 3 && VAR_0->operands[VAR_1]; ++VAR_1)
    {
        FUNC_1(VAR_0->operands[VAR_1]);
        FUNC_0(" ");
    }
    FUNC_0(")");
}
