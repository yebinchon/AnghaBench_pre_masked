
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_if {scalar_t__ else_instrs; scalar_t__ then_instrs; int condition; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(const struct hlsl_ir_if *VAR_0)
{
    FUNC_0("if (");
    FUNC_1(VAR_0->condition);
    FUNC_0(")\n{\n");
    FUNC_2(VAR_0->then_instrs);
    FUNC_0("}\n");
    if (VAR_0->else_instrs)
    {
        FUNC_0("else\n{\n");
        FUNC_2(VAR_0->else_instrs);
        FUNC_0("}\n");
    }
}
