
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* glFramebufferRenderbuffer ) (int ,scalar_t__,int ,scalar_t__) ;} ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
struct wined3d_fbo_resource {scalar_t__ object; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLenum ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context*,int ,scalar_t__,struct wined3d_fbo_resource const*) ;
 int FUNC_3 (int ,scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_2,
        GLenum VAR_3, DWORD VAR_4, const struct wined3d_fbo_resource *VAR_5, BOOL VAR_6)
{
    const struct wined3d_gl_info *VAR_7 = VAR_2->gl_info;

    FUNC_0("Attach GL object %u to %u.\n", VAR_5->object, VAR_4);

    if (VAR_5->object)
    {
        if (VAR_6)
        {
            VAR_7->fbo_ops.glFramebufferRenderbuffer(VAR_3, VAR_0 + VAR_4,
                    VAR_1, VAR_5->object);
            FUNC_1("glFramebufferRenderbuffer()");
        }
        else
        {
            FUNC_2(VAR_2, VAR_3, VAR_0 + VAR_4, VAR_5);
        }
    }
    else
    {
        FUNC_2(VAR_2, VAR_3, VAR_0 + VAR_4, ((void*)0));
    }
}
