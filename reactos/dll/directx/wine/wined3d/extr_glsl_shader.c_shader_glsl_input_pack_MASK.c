
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {unsigned int register_idx; char* semantic_name; unsigned int semantic_idx; scalar_t__ sysval_semantic; int mask; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct wined3d_shader_reg_maps {unsigned int input_registers; } ;
struct TYPE_3__ {int * input_reg_map; } ;
struct TYPE_4__ {TYPE_1__ ps; } ;
struct wined3d_shader {TYPE_2__ u; } ;
struct wined3d_gl_info {scalar_t__* supported; } ;
struct ps_compile_args {scalar_t__ vp_mode; unsigned int texcoords_initialized; scalar_t__ pointsprite; } ;
typedef unsigned int UINT ;
typedef scalar_t__ BOOL ;


 size_t VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct wined3d_gl_info const*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,size_t,...) ;
 int FUNC_3 (struct wined3d_gl_info const*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_6(const struct wined3d_shader *VAR_8, struct wined3d_string_buffer *VAR_9,
        const struct wined3d_shader_signature *VAR_10,
        const struct wined3d_shader_reg_maps *VAR_11,
        const struct ps_compile_args *VAR_12, const struct wined3d_gl_info *VAR_13, BOOL VAR_14)
{
    unsigned int VAR_15;

    for (VAR_15 = 0; VAR_15 < VAR_10->element_count; ++VAR_15)
    {
        const struct wined3d_shader_signature_element *VAR_16 = &VAR_10->elements[VAR_15];
        const char *VAR_17;
        UINT VAR_18;
        char VAR_19[6];


        if (!(VAR_11->input_registers & (1u << VAR_16->register_idx)))
            continue;

        VAR_17 = VAR_16->semantic_name;
        VAR_18 = VAR_16->semantic_idx;
        FUNC_4(VAR_16->mask, VAR_19);

        if (VAR_12->vp_mode == VAR_7)
        {
            if (VAR_16->sysval_semantic == VAR_4 && !VAR_18)
            {
                FUNC_2(VAR_9, "ps_in[%u]%s = vpos%s;\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19, VAR_19);
            }
            else if (VAR_12->pointsprite && FUNC_5(VAR_17, VAR_2))
            {
                FUNC_2(VAR_9, "ps_in[%u] = vec4(gl_PointCoord.xy, 0.0, 0.0);\n", VAR_16->register_idx);
            }
            else if (VAR_16->sysval_semantic == VAR_3)
            {
                FUNC_2(VAR_9, "ps_in[%u]%s = uintBitsToFloat(gl_FrontFacing ? 0xffffffffu : 0u);\n",
                        VAR_16->register_idx, VAR_19);
            }
            else if (VAR_16->sysval_semantic == VAR_5 && !VAR_18)
            {
                if (VAR_13->supported[VAR_0])
                    FUNC_2(VAR_9, "ps_in[%u]%s = intBitsToFloat(gl_Layer);\n",
                            VAR_16->register_idx, VAR_19);
                else
                    FUNC_0("ARB_fragment_layer_viewport is not supported.\n");
            }
            else
            {
                if (VAR_16->sysval_semantic)
                    FUNC_0("Unhandled sysval semantic %#x.\n", VAR_16->sysval_semantic);
                FUNC_2(VAR_9, VAR_14 ? "ps_in[%u]%s = %s%u%s;\n" : "ps_in[%u]%s = %s[%u]%s;\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19,
                        FUNC_3(VAR_13),
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19);
            }
        }
        else if (FUNC_5(VAR_17, VAR_2))
        {
            if (VAR_12->pointsprite)
                FUNC_2(VAR_9, "ps_in[%u] = vec4(gl_PointCoord.xy, 0.0, 0.0);\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx]);
            else if (VAR_12->vp_mode == VAR_6 && VAR_12->texcoords_initialized & (1u << VAR_18))
                FUNC_2(VAR_9, "ps_in[%u]%s = %s[%u]%s;\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19,
                        FUNC_1(VAR_13)
                        ? "gl_TexCoord" : "ffp_varying_texcoord", VAR_18, VAR_19);
            else
                FUNC_2(VAR_9, "ps_in[%u]%s = vec4(0.0, 0.0, 0.0, 0.0)%s;\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19, VAR_19);
        }
        else if (FUNC_5(VAR_17, VAR_1))
        {
            if (!VAR_18)
                FUNC_2(VAR_9, "ps_in[%u]%s = vec4(ffp_varying_diffuse)%s;\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19, VAR_19);
            else if (VAR_18 == 1)
                FUNC_2(VAR_9, "ps_in[%u]%s = vec4(ffp_varying_specular)%s;\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19, VAR_19);
            else
                FUNC_2(VAR_9, "ps_in[%u]%s = vec4(0.0, 0.0, 0.0, 0.0)%s;\n",
                        VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19, VAR_19);
        }
        else
        {
            FUNC_2(VAR_9, "ps_in[%u]%s = vec4(0.0, 0.0, 0.0, 0.0)%s;\n",
                    VAR_8->u.ps.input_reg_map[VAR_16->register_idx], VAR_19, VAR_19);
        }
    }
}
