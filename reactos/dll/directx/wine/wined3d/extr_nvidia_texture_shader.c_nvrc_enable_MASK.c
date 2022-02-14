
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* p_glDisable ) (int ) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; } ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(const struct wined3d_gl_info *VAR_1, BOOL VAR_2)
{
    if (VAR_2)
    {
        VAR_1->gl_ops.gl.p_glEnable(VAR_0);
        FUNC_0("glEnable(GL_REGISTER_COMBINERS_NV)");
    }
    else
    {
        VAR_1->gl_ops.gl.p_glDisable(VAR_0);
        FUNC_0("glDisable(GL_REGISTER_COMBINERS_NV)");
    }
}
