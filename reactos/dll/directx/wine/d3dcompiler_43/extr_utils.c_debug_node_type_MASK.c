
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum hlsl_ir_node_type { ____Placeholder_hlsl_ir_node_type } hlsl_ir_node_type ;


 int FUNC_0 (char const* const*) ;

__attribute__((used)) static const char *FUNC_1(enum hlsl_ir_node_type VAR_0)
{
    static const char * const VAR_1[] =
    {
        "HLSL_IR_ASSIGNMENT",
        "HLSL_IR_CONSTANT",
        "HLSL_IR_CONSTRUCTOR",
        "HLSL_IR_DEREF",
        "HLSL_IR_EXPR",
        "HLSL_IR_IF",
        "HLSL_IR_JUMP",
        "HLSL_IR_SWIZZLE",
    };

    if (VAR_0 >= FUNC_0(VAR_1))
        return "Unexpected node type";
    return VAR_1[VAR_0];
}
