
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_type; } ;
struct hlsl_ir_constructor {unsigned int args_count; int * args; TYPE_1__ node; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct hlsl_ir_constructor *VAR_0)
{
    unsigned int VAR_1;

    FUNC_0("%s (", FUNC_2(VAR_0->node.data_type));
    for (VAR_1 = 0; VAR_1 < VAR_0->args_count; ++VAR_1)
    {
        FUNC_1(VAR_0->args[VAR_1]);
        FUNC_0(" ");
    }
    FUNC_0(")");
}
