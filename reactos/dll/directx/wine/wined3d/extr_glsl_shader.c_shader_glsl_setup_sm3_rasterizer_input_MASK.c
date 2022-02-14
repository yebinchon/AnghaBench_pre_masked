
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {unsigned int register_idx; char* semantic_name; unsigned int semantic_idx; scalar_t__ sysval_semantic; int mask; scalar_t__ stream_idx; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct TYPE_2__ {int major; } ;
struct wined3d_shader_reg_maps {unsigned int output_registers; TYPE_1__ shader_version; int cull_distance_mask; int clip_distance_mask; } ;
struct wined3d_gl_info {int dummy; } ;
struct shader_glsl_priv {struct wined3d_string_buffer shader_buffer; } ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct wined3d_string_buffer*,char*,...) ;
 int FUNC_2 (struct wined3d_string_buffer*,struct wined3d_shader_signature_element const*,int ) ;
 int FUNC_3 (struct shader_glsl_priv*,unsigned int,struct wined3d_shader_signature const*,struct wined3d_shader_reg_maps const*,char*,int ) ;
 int FUNC_4 (struct shader_glsl_priv*,struct wined3d_gl_info const*,int const*,struct wined3d_shader_signature const*,struct wined3d_shader_reg_maps const*,struct wined3d_shader_signature const*,struct wined3d_shader_reg_maps const*) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (char const*,int ) ;

__attribute__((used)) static void FUNC_7(struct shader_glsl_priv *VAR_6,
        const struct wined3d_gl_info *VAR_7, const DWORD *VAR_8,
        const struct wined3d_shader_signature *VAR_9,
        const struct wined3d_shader_reg_maps *VAR_10, unsigned int VAR_11,
        const struct wined3d_shader_signature *VAR_12,
        const struct wined3d_shader_reg_maps *VAR_13, BOOL VAR_14)
{
    struct wined3d_string_buffer *VAR_15 = &VAR_6->shader_buffer;
    const char *VAR_16;
    unsigned int VAR_17;
    char VAR_18[6];
    unsigned int VAR_19;


    for (VAR_19 = 0; VAR_19 < VAR_12->element_count; ++VAR_19)
    {
        const struct wined3d_shader_signature_element *VAR_20 = &VAR_12->elements[VAR_19];

        if (!(VAR_13->output_registers & (1u << VAR_20->register_idx)))
            continue;

        if (VAR_20->stream_idx)
            continue;

        VAR_16 = VAR_20->semantic_name;
        VAR_17 = VAR_20->semantic_idx;
        FUNC_5(VAR_20->mask, VAR_18);

        if (VAR_20->sysval_semantic == VAR_4 && !VAR_17)
        {
            FUNC_1(VAR_15, "gl_Position%s = outputs[%u]%s;\n",
                    VAR_18, VAR_20->register_idx, VAR_18);
        }
        else if (FUNC_6(VAR_16, VAR_1) && VAR_14)
        {
            FUNC_1(VAR_15, "gl_PointSize = clamp(outputs[%u].%c, "
                    "ffp_point.size_min, ffp_point.size_max);\n", VAR_20->register_idx, VAR_18[1]);
        }
        else if (VAR_20->sysval_semantic == VAR_5 && !VAR_17)
        {
            FUNC_1(VAR_15, "gl_Layer = floatBitsToInt(outputs[%u])%s;\n",
                    VAR_20->register_idx, VAR_18);
        }
        else if (VAR_20->sysval_semantic == VAR_2)
        {
            FUNC_2(VAR_15, VAR_20, VAR_13->clip_distance_mask);
        }
        else if (VAR_20->sysval_semantic == VAR_3)
        {
            FUNC_2(VAR_15, VAR_20, VAR_13->cull_distance_mask);
        }
        else if (VAR_20->sysval_semantic)
        {
            FUNC_0("Unhandled sysval semantic %#x.\n", VAR_20->sysval_semantic);
        }
    }


    if (VAR_13->shader_version.major < 4)
        FUNC_4(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
                VAR_12, VAR_13);
    else
        FUNC_3(VAR_6, VAR_11, VAR_12, VAR_13, "shader_out", VAR_0);
}
