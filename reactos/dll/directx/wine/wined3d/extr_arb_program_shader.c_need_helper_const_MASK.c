
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_reg_maps {scalar_t__ fog; scalar_t__ usespow; scalar_t__ usesnrm; } ;
struct wined3d_gl_info {int quirks; int * supported; } ;
struct arb_vshader_private {int dummy; } ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct arb_vshader_private const*,struct wined3d_shader_reg_maps const*,struct wined3d_gl_info const*) ;
 int FUNC_1 (struct wined3d_gl_info const*) ;

__attribute__((used)) static BOOL FUNC_2(const struct arb_vshader_private *VAR_5,
        const struct wined3d_shader_reg_maps *VAR_6, const struct wined3d_gl_info *VAR_7)
{
    if (FUNC_0(VAR_5, VAR_6, VAR_7)) return VAR_2;
    if (!VAR_7->supported[VAR_1]) return VAR_2;
    if (VAR_7->quirks & VAR_3) return VAR_2;
    if (VAR_7->quirks & VAR_4) return VAR_2;
    if (!FUNC_1(VAR_7)) return VAR_2;
    if (VAR_6->usesnrm) return VAR_2;
    if (VAR_6->usespow) return VAR_2;
    if (VAR_6->fog) return VAR_2;
    return VAR_0;
}
