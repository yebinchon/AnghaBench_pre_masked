
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* p_glViewport ) (int ,int ,double,double) ;int (* p_glLoadMatrixd ) (double const*) ;int (* p_glMatrixMode ) (int ) ;} ;
struct TYPE_3__ {TYPE_2__ gl; } ;
struct wined3d_gl_info {TYPE_1__ gl_ops; scalar_t__* supported; } ;
typedef double UINT ;
typedef double GLdouble ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (double const*) ;
 int FUNC_3 (int ,int ,double,double) ;

__attribute__((used)) static void FUNC_4(const struct wined3d_gl_info *VAR_2, UINT VAR_3, UINT VAR_4)
{
    const GLdouble VAR_5[] =
    {
        2.0 / VAR_3, 0.0, 0.0, 0.0,
                0.0, 2.0 / VAR_4, 0.0, 0.0,
                0.0, 0.0, 2.0, 0.0,
               -1.0, -1.0, -1.0, 1.0,
    };

    if (VAR_2->supported[VAR_1])
    {
        VAR_2->gl_ops.gl.p_glMatrixMode(VAR_0);
        FUNC_0("glMatrixMode(GL_PROJECTION)");
        VAR_2->gl_ops.gl.p_glLoadMatrixd(VAR_5);
        FUNC_0("glLoadMatrixd");
    }
    VAR_2->gl_ops.gl.p_glViewport(0, 0, VAR_3, VAR_4);
    FUNC_0("glViewport");
}
