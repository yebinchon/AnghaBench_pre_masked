
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int src_blt_color_key; } ;
struct TYPE_3__ {int format; } ;
struct wined3d_texture {TYPE_2__ async; TYPE_1__ resource; } ;
struct wined3d_state {struct wined3d_texture** textures; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_color {int r; } ;
struct glsl_ps_program {int color_key_location; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,int *,struct wined3d_color*) ;

__attribute__((used)) static void FUNC_3(const struct glsl_ps_program *VAR_0,
        const struct wined3d_gl_info *VAR_1, const struct wined3d_state *VAR_2)
{
    struct wined3d_color VAR_3[2];
    const struct wined3d_texture *VAR_4 = VAR_2->textures[0];

    FUNC_2(VAR_4->resource.format, &VAR_4->async.src_blt_color_key, VAR_3);
    FUNC_0(FUNC_1(VAR_0->color_key_location, 2, &VAR_3[0].r));
}
