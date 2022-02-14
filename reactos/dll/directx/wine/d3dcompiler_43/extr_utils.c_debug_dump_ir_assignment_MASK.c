
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_assignment {scalar_t__ writemask; int rhs; int lhs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(const struct hlsl_ir_assignment *VAR_1)
{
    FUNC_0("= (");
    FUNC_1(VAR_1->lhs);
    if (VAR_1->writemask != VAR_0)
        FUNC_0("%s", FUNC_2(VAR_1->writemask));
    FUNC_0(" ");
    FUNC_1(VAR_1->rhs);
    FUNC_0(")");
}
