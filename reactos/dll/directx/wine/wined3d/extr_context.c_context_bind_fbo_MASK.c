
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* glBindFramebuffer ) (int ,void*) ;} ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
struct wined3d_context {void* fbo_read_binding; void* fbo_draw_binding; struct wined3d_gl_info* gl_info; } ;
typedef void* GLuint ;
typedef int GLenum ;


 int FUNC_0 (char*,int ) ;



 int FUNC_1 (char*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void FUNC_3(struct wined3d_context *VAR_0, GLenum VAR_1, GLuint VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_0->gl_info;

    switch (VAR_1)
    {
        case 128:
            if (VAR_0->fbo_read_binding == VAR_2) return;
            VAR_0->fbo_read_binding = VAR_2;
            break;

        case 130:
            if (VAR_0->fbo_draw_binding == VAR_2) return;
            VAR_0->fbo_draw_binding = VAR_2;
            break;

        case 129:
            if (VAR_0->fbo_read_binding == VAR_2
                    && VAR_0->fbo_draw_binding == VAR_2) return;
            VAR_0->fbo_read_binding = VAR_2;
            VAR_0->fbo_draw_binding = VAR_2;
            break;

        default:
            FUNC_0("Unhandled target %#x.\n", VAR_1);
            break;
    }

    VAR_3->fbo_ops.glBindFramebuffer(VAR_1, VAR_2);
    FUNC_1("glBindFramebuffer()");
}
