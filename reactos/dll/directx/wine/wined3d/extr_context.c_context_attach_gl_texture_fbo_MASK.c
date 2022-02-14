
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* glFramebufferTexture2D ) (int ,int ,int ,int ,int ) ;int (* glFramebufferTexture1D ) (int ,int ,int ,int ,int ) ;int (* glFramebufferTextureLayer ) (int ,int ,int ,int ,int ) ;int (* glFramebufferTexture ) (int ,int ,int ,int ) ;} ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
struct wined3d_fbo_resource {int level; int object; int target; int layer; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLenum ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct wined3d_context *VAR_6,
        GLenum VAR_7, GLenum VAR_8, const struct wined3d_fbo_resource *VAR_9)
{
    const struct wined3d_gl_info *VAR_10 = VAR_6->gl_info;

    if (!VAR_9)
    {
        VAR_10->fbo_ops.glFramebufferTexture2D(VAR_7, VAR_8, VAR_2, 0, 0);
    }
    else if (VAR_9->layer == VAR_5)
    {
        if (!VAR_10->fbo_ops.glFramebufferTexture)
        {
            FUNC_0("OpenGL implementation doesn't support glFramebufferTexture().\n");
            return;
        }

        VAR_10->fbo_ops.glFramebufferTexture(VAR_7, VAR_8,
                VAR_9->object, VAR_9->level);
    }
    else if (VAR_9->target == VAR_1 || VAR_9->target == VAR_3 ||
            VAR_9->target == VAR_4)
    {
        if (!VAR_10->fbo_ops.glFramebufferTextureLayer)
        {
            FUNC_0("OpenGL implementation doesn't support glFramebufferTextureLayer().\n");
            return;
        }

        VAR_10->fbo_ops.glFramebufferTextureLayer(VAR_7, VAR_8,
                VAR_9->object, VAR_9->level, VAR_9->layer);
    }
    else if (VAR_9->target == VAR_0)
    {
        VAR_10->fbo_ops.glFramebufferTexture1D(VAR_7, VAR_8,
                VAR_9->target, VAR_9->object, VAR_9->level);
        FUNC_1("glFramebufferTexture1D()");
    }
    else
    {
        VAR_10->fbo_ops.glFramebufferTexture2D(VAR_7, VAR_8,
                VAR_9->target, VAR_9->object, VAR_9->level);
    }
    FUNC_1("attach texture to fbo");
}
