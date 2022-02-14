
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wined3d_shader_signature_element {unsigned int register_idx; unsigned int semantic_idx; int semantic_name; } ;
struct wined3d_shader_signature {unsigned int element_count; struct wined3d_shader_signature_element* elements; } ;
struct TYPE_6__ {int major; } ;
struct wined3d_shader_reg_maps {unsigned int input_registers; TYPE_3__ shader_version; } ;
struct TYPE_4__ {unsigned int input_reg_used; } ;
struct TYPE_5__ {TYPE_1__ ps; } ;
struct wined3d_shader {TYPE_2__ u; struct wined3d_shader_reg_maps reg_maps; struct wined3d_shader_signature input_signature; } ;
typedef unsigned int DWORD ;
typedef unsigned int BOOL ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static BOOL FUNC_1(const struct wined3d_shader *VAR_2, unsigned int VAR_3)
{
    const struct wined3d_shader_signature *VAR_4 = &VAR_2->input_signature;
    const struct wined3d_shader_reg_maps *VAR_5 = &VAR_2->reg_maps;
    DWORD VAR_6 = VAR_2->u.ps.input_reg_used;
    unsigned int VAR_7;

    if (VAR_5->shader_version.major < 3)
        return VAR_6 & (1u << VAR_3);

    for (VAR_7 = 0; VAR_7 < VAR_4->element_count; ++VAR_7)
    {
        const struct wined3d_shader_signature_element *VAR_8 = &VAR_4->elements[VAR_7];

        if (!(VAR_5->input_registers & (1u << VAR_8->register_idx)))
            continue;

        if (FUNC_0(VAR_8->semantic_name, VAR_1)
                && VAR_8->semantic_idx == VAR_3)
            return VAR_6 & (1u << VAR_8->register_idx);
    }
    return VAR_0;
}
