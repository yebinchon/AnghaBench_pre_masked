
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wined3d_shader_version {int major; scalar_t__ type; } ;
struct TYPE_2__ {unsigned int sampler_comparison_mode; struct wined3d_shader_version shader_version; } ;
struct wined3d_shader {TYPE_1__ reg_maps; } ;
struct ps_compile_args {unsigned int shadow; } ;
typedef unsigned int BOOL ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static BOOL FUNC_0(const struct wined3d_shader *VAR_1,
        const struct ps_compile_args *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
    const struct wined3d_shader_version *VAR_5 = &VAR_1->reg_maps.shader_version;

    if (VAR_5->major >= 4)
        return VAR_1->reg_maps.sampler_comparison_mode & (1u << VAR_4);
    else
        return VAR_5->type == VAR_0 && (VAR_2->shadow & (1u << VAR_3));
}
