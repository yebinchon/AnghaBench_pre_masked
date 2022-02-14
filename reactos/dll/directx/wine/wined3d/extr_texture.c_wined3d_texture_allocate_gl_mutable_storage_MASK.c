
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int format_flags; } ;
struct wined3d_texture {unsigned int level_count; scalar_t__ target; int layer_count; TYPE_1__ resource; } ;
struct TYPE_7__ {int (* p_glTexImage2D ) (int ,unsigned int,int ,int ,int ,int ,int ,int ,int *) ;} ;
struct TYPE_8__ {TYPE_3__ gl; } ;
struct wined3d_gl_info {TYPE_4__ gl_ops; } ;
struct TYPE_6__ {int denominator; int numerator; } ;
struct wined3d_format {int glType; int glFormat; TYPE_2__ height_scale; } ;
typedef int GLsizei ;
typedef int GLenum ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,struct wined3d_texture*,unsigned int,unsigned int,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,unsigned int,int ,int ,int ,int,int ,int ,int ,int *) ;
 int FUNC_4 (int ,unsigned int,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_5 (struct wined3d_texture*,unsigned int) ;
 int FUNC_6 (struct wined3d_texture*,unsigned int) ;
 int FUNC_7 (struct wined3d_texture*,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct wined3d_texture *VAR_2,
        GLenum VAR_3, const struct wined3d_format *VAR_4,
        const struct wined3d_gl_info *VAR_5)
{
    unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
    GLsizei VAR_10, VAR_11;
    GLenum VAR_12;

    VAR_7 = VAR_2->level_count;
    VAR_9 = VAR_2->target == VAR_0 ? 1 : VAR_2->layer_count;

    for (VAR_8 = 0; VAR_8 < VAR_9; ++VAR_8)
    {
        VAR_12 = FUNC_7(VAR_2, VAR_8 * VAR_7);

        for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6)
        {
            VAR_10 = FUNC_6(VAR_2, VAR_6);
            VAR_11 = FUNC_5(VAR_2, VAR_6);
            if (VAR_2->resource.format_flags & VAR_1)
            {
                VAR_11 *= VAR_4->height_scale.numerator;
                VAR_11 /= VAR_4->height_scale.denominator;
            }

            FUNC_1("texture %p, layer %u, level %u, target %#x, width %u, height %u.\n",
                    VAR_2, VAR_8, VAR_6, VAR_12, VAR_10, VAR_11);

            if (VAR_2->target == VAR_0)
            {
                FUNC_0(FUNC_3(VAR_12, VAR_6, VAR_3, VAR_10, VAR_11,
                        VAR_2->layer_count, 0, VAR_4->glFormat, VAR_4->glType, ((void*)0)));
                FUNC_2("glTexImage3D");
            }
            else
            {
                VAR_5->gl_ops.gl.p_glTexImage2D(VAR_12, VAR_6, VAR_3,
                        VAR_10, VAR_11, 0, VAR_4->glFormat, VAR_4->glType, ((void*)0));
                FUNC_2("glTexImage2D");
            }
        }
    }
}
