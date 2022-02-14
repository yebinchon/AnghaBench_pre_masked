
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* glFramebufferRenderbuffer ) (int ,int ,int ,int ) ;} ;
struct wined3d_gl_info {TYPE_1__ fbo_ops; } ;
typedef int GLuint ;
typedef int GLenum ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_gl_info *VAR_5,
        GLenum VAR_6, DWORD VAR_7, GLuint VAR_8)
{
    if (VAR_7 & VAR_3)
    {
        VAR_5->fbo_ops.glFramebufferRenderbuffer(VAR_6, VAR_0, VAR_1, VAR_8);
        FUNC_0("glFramebufferRenderbuffer()");
    }

    if (VAR_7 & VAR_4)
    {
        VAR_5->fbo_ops.glFramebufferRenderbuffer(VAR_6, VAR_2, VAR_1, VAR_8);
        FUNC_0("glFramebufferRenderbuffer()");
    }
}
