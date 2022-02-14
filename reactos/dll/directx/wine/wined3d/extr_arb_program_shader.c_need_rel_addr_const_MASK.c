
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wined3d_shader_reg_maps {int usesmova; } ;
struct wined3d_gl_info {int * supported; } ;
struct arb_vshader_private {scalar_t__ rel_offset; } ;
typedef int BOOL ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static BOOL FUNC_0(const struct arb_vshader_private *VAR_3,
        const struct wined3d_shader_reg_maps *VAR_4, const struct wined3d_gl_info *VAR_5)
{
    if (VAR_3->rel_offset) return VAR_2;
    if (!VAR_4->usesmova) return VAR_0;
    return !VAR_5->supported[VAR_1];
}
