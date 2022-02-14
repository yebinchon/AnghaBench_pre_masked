
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* p_glDrawBuffer ) (scalar_t__) ;} ;
struct TYPE_5__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; scalar_t__* supported; } ;
struct wined3d_context {struct wined3d_gl_info* gl_info; } ;
struct TYPE_6__ {scalar_t__ offscreen_rendering_mode; } ;
typedef scalar_t__ GLenum ;
typedef int DWORD ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (unsigned int,scalar_t__*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void FUNC_9(struct wined3d_context *VAR_6, DWORD VAR_7)
{
    const struct wined3d_gl_info *VAR_8 = VAR_6->gl_info;
    GLenum VAR_9[VAR_3];

    if (!VAR_7)
    {
        VAR_8->gl_ops.gl.p_glDrawBuffer(VAR_2);
    }
    else if (FUNC_5(VAR_7))
    {
        VAR_8->gl_ops.gl.p_glDrawBuffer(FUNC_3(VAR_7));
    }
    else
    {
        if (VAR_5.offscreen_rendering_mode == VAR_4)
        {
            unsigned int VAR_10 = 0;

            while (VAR_7)
            {
                if (VAR_7 & 1)
                    VAR_9[VAR_10] = VAR_1 + VAR_10;
                else
                    VAR_9[VAR_10] = VAR_2;

                VAR_7 >>= 1;
                ++VAR_10;
            }

            if (VAR_8->supported[VAR_0])
            {
                FUNC_1(FUNC_4(VAR_10, VAR_9));
            }
            else
            {
                VAR_8->gl_ops.gl.p_glDrawBuffer(VAR_9[0]);
            }
        }
        else
        {
            FUNC_0("Unexpected draw buffers mask with backbuffer ORM.\n");
        }
    }

    FUNC_2("apply draw buffers");
}
