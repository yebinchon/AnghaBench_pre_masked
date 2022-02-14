
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int layer_idx; unsigned int layer_count; int level_count; int level_idx; } ;
struct TYPE_8__ {TYPE_2__ texture; } ;
struct wined3d_view_desc {TYPE_3__ u; } ;
struct TYPE_6__ {int device; } ;
struct wined3d_texture {TYPE_1__ resource; } ;
struct wined3d_gl_view {scalar_t__ target; int name; } ;
struct TYPE_9__ {int (* p_glTexParameteri ) (scalar_t__,int ,int ) ;int (* p_glTexParameteriv ) (scalar_t__,int ,int const*) ;int (* p_glGenTextures ) (int,int *) ;} ;
struct TYPE_10__ {TYPE_4__ gl; } ;
struct wined3d_gl_info {TYPE_5__ gl_ops; int * supported; } ;
struct wined3d_format {int glInternal; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLuint ;
typedef int const GLint ;
typedef scalar_t__ GLenum ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (char*) ;
 struct wined3d_context* FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct wined3d_context*,scalar_t__,int ) ;
 int FUNC_5 (struct wined3d_context*,int ) ;
 int FUNC_6 (struct wined3d_context*,int ) ;
 int FUNC_7 (struct wined3d_context*) ;
 int FUNC_8 (int ,scalar_t__,int ,int ,int ,int ,unsigned int,unsigned int) ;
 scalar_t__ FUNC_9 (struct wined3d_format const*) ;
 int FUNC_10 (int,int *) ;
 int FUNC_11 (scalar_t__,int ,int const*) ;
 int FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_14 (struct wined3d_texture*,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_15(struct wined3d_gl_view *VAR_9, GLenum VAR_10,
        const struct wined3d_view_desc *VAR_11, struct wined3d_texture *VAR_12,
        const struct wined3d_format *VAR_13)
{
    const struct wined3d_gl_info *VAR_14;
    unsigned int VAR_15, VAR_16;
    struct wined3d_context *VAR_17;
    GLuint VAR_18;

    VAR_9->target = VAR_10;

    VAR_17 = FUNC_3(VAR_12->resource.device, ((void*)0), 0);
    VAR_14 = VAR_17->gl_info;

    if (!VAR_14->supported[VAR_1])
    {
        FUNC_7(VAR_17);
        FUNC_0("OpenGL implementation does not support texture views.\n");
        return;
    }

    FUNC_14(VAR_12, VAR_17, VAR_2);
    VAR_18 = FUNC_13(VAR_12, VAR_17, VAR_2);

    VAR_15 = VAR_11->u.texture.layer_idx;
    VAR_16 = VAR_11->u.texture.layer_count;
    if (VAR_10 == VAR_5 && (VAR_15 || VAR_16 != 1))
    {
        FUNC_0("Depth slice (%u-%u) not supported.\n", VAR_15, VAR_16);
        VAR_15 = 0;
        VAR_16 = 1;
    }

    VAR_14->gl_ops.gl.p_glGenTextures(1, &VAR_9->name);
    FUNC_1(FUNC_8(VAR_9->name, VAR_9->target, VAR_18, VAR_13->glInternal,
            VAR_11->u.texture.level_idx, VAR_11->u.texture.level_count,
            VAR_15, VAR_16));
    FUNC_2("Create texture view");

    if (FUNC_9(VAR_13))
    {
        static const GLint VAR_19[] = {128, 129, 128, 128};

        if (!VAR_14->supported[VAR_0])
        {
            FUNC_7(VAR_17);
            FUNC_0("OpenGL implementation does not support stencil texturing.\n");
            return;
        }

        FUNC_4(VAR_17, VAR_9->target, VAR_9->name);
        VAR_14->gl_ops.gl.p_glTexParameteriv(VAR_9->target, VAR_6, VAR_19);
        VAR_14->gl_ops.gl.p_glTexParameteri(VAR_9->target, VAR_3, VAR_4);
        FUNC_2("Initialize stencil view");

        FUNC_5(VAR_17, VAR_7);
        FUNC_6(VAR_17, VAR_8);
    }

    FUNC_7(VAR_17);
}
