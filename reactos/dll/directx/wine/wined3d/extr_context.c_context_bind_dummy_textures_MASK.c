
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* p_glBindTexture ) (int ,int ) ;} ;
struct TYPE_8__ {TYPE_3__ gl; } ;
struct TYPE_6__ {unsigned int combined_samplers; } ;
struct wined3d_gl_info {TYPE_4__ gl_ops; scalar_t__* supported; TYPE_2__ limits; } ;
struct wined3d_dummy_textures {int tex_2d_ms_array; int tex_2d_ms; int tex_buffer; int tex_2d_array; int tex_1d_array; int tex_cube_array; int tex_cube; int tex_3d; int tex_rect; int tex_2d; int tex_1d; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; TYPE_1__* device; } ;
struct TYPE_5__ {struct wined3d_dummy_textures dummy_textures; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ,int ) ;

void FUNC_14(const struct wined3d_device *VAR_19, const struct wined3d_context *VAR_20)
{
    const struct wined3d_dummy_textures *VAR_21 = &VAR_20->device->dummy_textures;
    const struct wined3d_gl_info *VAR_22 = VAR_20->gl_info;
    unsigned int VAR_23;

    for (VAR_23 = 0; VAR_23 < VAR_22->limits.combined_samplers; ++VAR_23)
    {
        FUNC_0(FUNC_2(VAR_7 + VAR_23));

        VAR_22->gl_ops.gl.p_glBindTexture(VAR_8, VAR_21->tex_1d);
        VAR_22->gl_ops.gl.p_glBindTexture(VAR_10, VAR_21->tex_2d);

        if (VAR_22->supported[VAR_4])
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_18, VAR_21->tex_rect);

        if (VAR_22->supported[VAR_5])
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_14, VAR_21->tex_3d);

        if (VAR_22->supported[VAR_1])
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_16, VAR_21->tex_cube);

        if (VAR_22->supported[VAR_2])
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_17, VAR_21->tex_cube_array);

        if (VAR_22->supported[VAR_6])
        {
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_9, VAR_21->tex_1d_array);
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_11, VAR_21->tex_2d_array);
        }
        if (VAR_22->supported[VAR_0])
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_15, VAR_21->tex_buffer);

        if (VAR_22->supported[VAR_3])
        {
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_12, VAR_21->tex_2d_ms);
            VAR_22->gl_ops.gl.p_glBindTexture(VAR_13, VAR_21->tex_2d_ms_array);
        }
    }

    FUNC_1("bind dummy textures");
}
