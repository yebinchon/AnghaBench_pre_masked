
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3dcompiler_shader_reflection {int instruction_count; int temp_register_count; int dcl_count; int float_instruction_count; int int_instruction_count; int uint_instruction_count; int static_flow_control_count; int dynamic_flow_control_count; int temp_array_count; int array_instruction_count; int cut_instruction_count; int emit_instruction_count; int texture_normal_instructions; int texture_load_instructions; int texture_comp_instructions; int texture_bias_instructions; int texture_gradient_instructions; int mov_instruction_count; int conversion_instruction_count; int input_primitive; int gs_output_topology; int gs_max_output_vertex_count; int c_control_points; int hs_output_primitive; int hs_prtitioning; int tessellator_domain; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char const**,int*) ;
 int FUNC_3 (char const**,int) ;

__attribute__((used)) static HRESULT FUNC_4(struct d3dcompiler_shader_reflection *VAR_2, const char *VAR_3, DWORD VAR_4)
{
    const char *VAR_5 = VAR_3;
    DWORD VAR_6 = VAR_4 >> 2;

    FUNC_1("Size %u\n", VAR_6);

    FUNC_2(&VAR_5, &VAR_2->instruction_count);
    FUNC_1("InstructionCount: %u\n", VAR_2->instruction_count);

    FUNC_2(&VAR_5, &VAR_2->temp_register_count);
    FUNC_1("TempRegisterCount: %u\n", VAR_2->temp_register_count);

    FUNC_3(&VAR_5, 1);

    FUNC_2(&VAR_5, &VAR_2->dcl_count);
    FUNC_1("DclCount: %u\n", VAR_2->dcl_count);

    FUNC_2(&VAR_5, &VAR_2->float_instruction_count);
    FUNC_1("FloatInstructionCount: %u\n", VAR_2->float_instruction_count);

    FUNC_2(&VAR_5, &VAR_2->int_instruction_count);
    FUNC_1("IntInstructionCount: %u\n", VAR_2->int_instruction_count);

    FUNC_2(&VAR_5, &VAR_2->uint_instruction_count);
    FUNC_1("UintInstructionCount: %u\n", VAR_2->uint_instruction_count);

    FUNC_2(&VAR_5, &VAR_2->static_flow_control_count);
    FUNC_1("StaticFlowControlCount: %u\n", VAR_2->static_flow_control_count);

    FUNC_2(&VAR_5, &VAR_2->dynamic_flow_control_count);
    FUNC_1("DynamicFlowControlCount: %u\n", VAR_2->dynamic_flow_control_count);

    FUNC_3(&VAR_5, 1);

    FUNC_2(&VAR_5, &VAR_2->temp_array_count);
    FUNC_1("TempArrayCount: %u\n", VAR_2->temp_array_count);

    FUNC_2(&VAR_5, &VAR_2->array_instruction_count);
    FUNC_1("ArrayInstructionCount: %u\n", VAR_2->array_instruction_count);

    FUNC_2(&VAR_5, &VAR_2->cut_instruction_count);
    FUNC_1("CutInstructionCount: %u\n", VAR_2->cut_instruction_count);

    FUNC_2(&VAR_5, &VAR_2->emit_instruction_count);
    FUNC_1("EmitInstructionCount: %u\n", VAR_2->emit_instruction_count);

    FUNC_2(&VAR_5, &VAR_2->texture_normal_instructions);
    FUNC_1("TextureNormalInstructions: %u\n", VAR_2->texture_normal_instructions);

    FUNC_2(&VAR_5, &VAR_2->texture_load_instructions);
    FUNC_1("TextureLoadInstructions: %u\n", VAR_2->texture_load_instructions);

    FUNC_2(&VAR_5, &VAR_2->texture_comp_instructions);
    FUNC_1("TextureCompInstructions: %u\n", VAR_2->texture_comp_instructions);

    FUNC_2(&VAR_5, &VAR_2->texture_bias_instructions);
    FUNC_1("TextureBiasInstructions: %u\n", VAR_2->texture_bias_instructions);

    FUNC_2(&VAR_5, &VAR_2->texture_gradient_instructions);
    FUNC_1("TextureGradientInstructions: %u\n", VAR_2->texture_gradient_instructions);

    FUNC_2(&VAR_5, &VAR_2->mov_instruction_count);
    FUNC_1("MovInstructionCount: %u\n", VAR_2->mov_instruction_count);

    FUNC_3(&VAR_5, 1);

    FUNC_2(&VAR_5, &VAR_2->conversion_instruction_count);
    FUNC_1("ConversionInstructionCount: %u\n", VAR_2->conversion_instruction_count);

    FUNC_3(&VAR_5, 1);




    FUNC_2(&VAR_5, &VAR_2->input_primitive);

    FUNC_1("InputPrimitive: %x\n", VAR_2->input_primitive);




    FUNC_2(&VAR_5, &VAR_2->gs_output_topology);

    FUNC_1("GSOutputTopology: %x\n", VAR_2->gs_output_topology);

    FUNC_2(&VAR_5, &VAR_2->gs_max_output_vertex_count);
    FUNC_1("GSMaxOutputVertexCount: %u\n", VAR_2->gs_max_output_vertex_count);

    FUNC_3(&VAR_5, 2);


    if (VAR_6 == 28) return VAR_1;

    FUNC_3(&VAR_5, 1);


    if (VAR_6 == 29) return VAR_1;

    FUNC_3(&VAR_5, 1);

    FUNC_2(&VAR_5, &VAR_2->c_control_points);
    FUNC_1("cControlPoints: %u\n", VAR_2->c_control_points);




    FUNC_2(&VAR_5, &VAR_2->hs_output_primitive);

    FUNC_1("HSOutputPrimitive: %x\n", VAR_2->hs_output_primitive);




    FUNC_2(&VAR_5, &VAR_2->hs_prtitioning);

    FUNC_1("HSPartitioning: %x\n", VAR_2->hs_prtitioning);




    FUNC_2(&VAR_5, &VAR_2->tessellator_domain);

    FUNC_1("TessellatorDomain: %x\n", VAR_2->tessellator_domain);

    FUNC_3(&VAR_5, 3);


    if (VAR_6 == 37) return VAR_1;

    FUNC_0("Unhandled size %u\n", VAR_6);

    return VAR_0;
}
