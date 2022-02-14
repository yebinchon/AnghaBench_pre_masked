
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_if {int else_instrs; int then_instrs; int condition; } ;


 int FUNC_0 (struct hlsl_ir_if*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct hlsl_ir_if *VAR_0)
{
    FUNC_1(VAR_0->condition);
    FUNC_2(VAR_0->then_instrs);
    FUNC_2(VAR_0->else_instrs);
    FUNC_0(VAR_0);
}
