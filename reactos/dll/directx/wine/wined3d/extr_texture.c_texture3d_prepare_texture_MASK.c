
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct wined3d_format* format; } ;
struct wined3d_texture {unsigned int level_count; unsigned int layer_count; TYPE_1__ resource; } ;
struct wined3d_gl_info {int dummy; } ;
struct wined3d_format {int glType; int glFormat; int glInternal; int glGammaInternal; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLenum ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,unsigned int,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_3 (int ,unsigned int,int ,int ,int ,int ) ;
 int FUNC_4 (struct wined3d_texture*,struct wined3d_context*,scalar_t__) ;
 int FUNC_5 (struct wined3d_texture*,unsigned int) ;
 int FUNC_6 (struct wined3d_texture*,unsigned int) ;
 int FUNC_7 (struct wined3d_texture*,unsigned int) ;
 scalar_t__ FUNC_8 (struct wined3d_texture*,struct wined3d_gl_info const*) ;

__attribute__((used)) static void FUNC_9(struct wined3d_texture *VAR_1, struct wined3d_context *VAR_2, BOOL VAR_3)
{
    const struct wined3d_format *VAR_4 = VAR_1->resource.format;
    GLenum VAR_5 = VAR_3 ? VAR_4->glGammaInternal : VAR_4->glInternal;
    unsigned int VAR_6 = VAR_1->level_count * VAR_1->layer_count;
    const struct wined3d_gl_info *VAR_7 = VAR_2->gl_info;
    unsigned int VAR_8;

    FUNC_4(VAR_1, VAR_2, VAR_3);

    if (FUNC_8(VAR_1, VAR_7))
    {
        FUNC_0(FUNC_3(VAR_0, VAR_1->level_count, VAR_5,
                FUNC_7(VAR_1, 0),
                FUNC_6(VAR_1, 0),
                FUNC_5(VAR_1, 0)));
        FUNC_1("glTexStorage3D");
    }
    else
    {
        for (VAR_8 = 0; VAR_8 < VAR_6; ++VAR_8)
        {
            FUNC_0(FUNC_2(VAR_0, VAR_8, VAR_5,
                    FUNC_7(VAR_1, VAR_8),
                    FUNC_6(VAR_1, VAR_8),
                    FUNC_5(VAR_1, VAR_8),
                    0, VAR_4->glFormat, VAR_4->glType, ((void*)0)));
            FUNC_1("glTexImage3D");
        }
    }
}
