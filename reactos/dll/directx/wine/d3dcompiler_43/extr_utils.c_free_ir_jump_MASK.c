
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_jump {scalar_t__ type; int return_value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hlsl_ir_jump*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hlsl_ir_jump *VAR_1)
{
    if (VAR_1->type == VAR_0)
        FUNC_1(VAR_1->return_value);
    FUNC_0(VAR_1);
}
