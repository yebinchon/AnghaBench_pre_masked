
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_reg_maps {int dummy; } ;
struct wined3d_gl_info {int dummy; } ;
struct arb_vshader_private {int dummy; } ;


 scalar_t__ FUNC_0 (struct arb_vshader_private const*,struct wined3d_shader_reg_maps const*,struct wined3d_gl_info const*) ;
 scalar_t__ FUNC_1 (struct arb_vshader_private const*,struct wined3d_shader_reg_maps const*,struct wined3d_gl_info const*) ;

__attribute__((used)) static unsigned int FUNC_2(const struct arb_vshader_private *VAR_0,
        const struct wined3d_shader_reg_maps *VAR_1, const struct wined3d_gl_info *VAR_2)
{
    unsigned int VAR_3 = 1;


    if (FUNC_0(VAR_0, VAR_1, VAR_2)) ++VAR_3;
    if (FUNC_1(VAR_0, VAR_1, VAR_2)) ++VAR_3;
    return VAR_3;
}
