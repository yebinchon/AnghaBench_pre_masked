
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_string_buffer {int dummy; } ;
struct wined3d_shader_signature_element {unsigned int register_idx; scalar_t__ sysval_semantic; int component_type; } ;
struct wined3d_gl_info {int dummy; } ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int FUNC_1 (struct wined3d_gl_info const*) ;
 int FUNC_2 (struct wined3d_string_buffer*,char*,unsigned int,...) ;
 int FUNC_3 (struct wined3d_string_buffer*,struct wined3d_gl_info const*,char*,char*,unsigned int) ;
 scalar_t__ FUNC_4 (struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_5(struct wined3d_string_buffer *VAR_3,
        const struct wined3d_gl_info *VAR_4, const struct wined3d_shader_signature_element *VAR_5)
{
    unsigned int VAR_6 = VAR_5->register_idx;

    if (VAR_5->sysval_semantic == VAR_2)
    {
        FUNC_2(VAR_3, "vec4 vs_in%u = vec4(intBitsToFloat(gl_VertexID), 0.0, 0.0, 0.0);\n",
                VAR_6);
        return;
    }
    if (VAR_5->sysval_semantic == VAR_0)
    {
        FUNC_2(VAR_3, "vec4 vs_in%u = vec4(intBitsToFloat(gl_InstanceID), 0.0, 0.0, 0.0);\n",
                VAR_6);
        return;
    }
    if (VAR_5->sysval_semantic && VAR_5->sysval_semantic != VAR_1)
        FUNC_0("Unhandled sysval semantic %#x.\n", VAR_5->sysval_semantic);

    if (FUNC_4(VAR_4))
        FUNC_2(VAR_3, "layout(location = %u) ", VAR_6);

    switch (VAR_5->component_type)
    {
        case 129:
            FUNC_3(VAR_3, VAR_4, "uvec", "uint", VAR_6);
            break;
        case 130:
            FUNC_3(VAR_3, VAR_4, "ivec", "int", VAR_6);
            break;

        default:
            FUNC_0("Unhandled type %#x.\n", VAR_5->component_type);

        case 128:
        case 131:
            FUNC_2(VAR_3, "%s vec4 vs_in%u;\n", FUNC_1(VAR_4), VAR_6);
            break;
    }
}
