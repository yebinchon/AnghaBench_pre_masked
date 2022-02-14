
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* glFramebufferTexture2D ) (int ,scalar_t__,int ,int ,int ) ;} ;
struct TYPE_3__ {unsigned int buffers; } ;
struct wined3d_gl_info {TYPE_2__ fbo_ops; TYPE_1__ limits; } ;
typedef int GLenum ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_gl_info *VAR_4, GLenum VAR_5)
{
    unsigned int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_4->limits.buffers; ++VAR_6)
    {
        VAR_4->fbo_ops.glFramebufferTexture2D(VAR_5, VAR_0 + VAR_6, VAR_3, 0, 0);
        FUNC_0("glFramebufferTexture2D()");
    }
    VAR_4->fbo_ops.glFramebufferTexture2D(VAR_5, VAR_1, VAR_3, 0, 0);
    FUNC_0("glFramebufferTexture2D()");

    VAR_4->fbo_ops.glFramebufferTexture2D(VAR_5, VAR_2, VAR_3, 0, 0);
    FUNC_0("glFramebufferTexture2D()");
}
