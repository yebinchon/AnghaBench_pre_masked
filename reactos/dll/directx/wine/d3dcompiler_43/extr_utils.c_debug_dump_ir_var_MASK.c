
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hlsl_ir_var {scalar_t__ semantic; int name; int data_type; scalar_t__ modifiers; } ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(const struct hlsl_ir_var *VAR_0)
{
    if (VAR_0->modifiers)
        FUNC_0("%s ", FUNC_2(VAR_0->modifiers));
    FUNC_0("%s %s", FUNC_1(VAR_0->data_type), VAR_0->name);
    if (VAR_0->semantic)
        FUNC_0(" : %s", FUNC_3(VAR_0->semantic));
}
