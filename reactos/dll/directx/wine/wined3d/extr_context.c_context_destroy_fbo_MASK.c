
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* glDeleteFramebuffers ) (int,int *) ;} ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
typedef int GLuint ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct wined3d_context*,int ,int ) ;
 int FUNC_2 (struct wined3d_gl_info const*,int ) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct wined3d_context *VAR_1, GLuint VAR_2)
{
    const struct wined3d_gl_info *VAR_3 = VAR_1->gl_info;

    FUNC_1(VAR_1, VAR_0, VAR_2);
    FUNC_2(VAR_3, VAR_0);
    FUNC_1(VAR_1, VAR_0, 0);

    VAR_3->fbo_ops.glDeleteFramebuffers(1, &VAR_2);
    FUNC_0("glDeleteFramebuffers()");
}
