
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wined3d_texture {int target; } ;
struct TYPE_3__ {int (* p_glDisable ) (int const) ;int (* p_glEnable ) (int const) ;} ;
struct TYPE_4__ {TYPE_1__ gl; } ;
struct wined3d_gl_info {TYPE_2__ gl_ops; scalar_t__* supported; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;





 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const) ;
 int FUNC_4 (int const) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int const) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int const) ;
 int FUNC_10 (int const) ;
 int FUNC_11 (int const) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int const) ;
 int FUNC_14 (int const) ;
 int FUNC_15 (int const) ;
 int FUNC_16 (int const) ;
 int FUNC_17 (int const) ;
 int FUNC_18 (int const) ;
 int FUNC_19 (int const) ;
 int FUNC_20 (int const) ;
 int FUNC_21 (int const) ;
 int FUNC_22 (int const) ;
 int FUNC_23 (int) ;
 int FUNC_24 (int const) ;
 int FUNC_25 (int) ;
 int FUNC_26 (int const) ;
 int FUNC_27 (int const) ;
 int FUNC_28 (int) ;
 int FUNC_29 (int) ;
 int FUNC_30 (int) ;

void FUNC_31(const struct wined3d_texture *VAR_2, const struct wined3d_gl_info *VAR_3)
{
    if (VAR_2)
    {
        switch (VAR_2->target)
        {
            case 132:
                VAR_3->gl_ops.gl.p_glDisable(131);
                FUNC_0("glDisable(GL_TEXTURE_2D)");
                VAR_3->gl_ops.gl.p_glDisable(130);
                FUNC_0("glDisable(GL_TEXTURE_3D)");
                if (VAR_3->supported[VAR_0])
                {
                    VAR_3->gl_ops.gl.p_glDisable(129);
                    FUNC_0("glDisable(GL_TEXTURE_CUBE_MAP_ARB)");
                }
                if (VAR_3->supported[VAR_1])
                {
                    VAR_3->gl_ops.gl.p_glDisable(128);
                    FUNC_0("glDisable(GL_TEXTURE_RECTANGLE_ARB)");
                }
                VAR_3->gl_ops.gl.p_glEnable(132);
                FUNC_0("glEnable(GL_TEXTURE_1D)");
                break;
            case 131:
                VAR_3->gl_ops.gl.p_glDisable(132);
                FUNC_0("glDisable(GL_TEXTURE_1D)");
                VAR_3->gl_ops.gl.p_glDisable(130);
                FUNC_0("glDisable(GL_TEXTURE_3D)");
                if (VAR_3->supported[VAR_0])
                {
                    VAR_3->gl_ops.gl.p_glDisable(129);
                    FUNC_0("glDisable(GL_TEXTURE_CUBE_MAP_ARB)");
                }
                if (VAR_3->supported[VAR_1])
                {
                    VAR_3->gl_ops.gl.p_glDisable(128);
                    FUNC_0("glDisable(GL_TEXTURE_RECTANGLE_ARB)");
                }
                VAR_3->gl_ops.gl.p_glEnable(131);
                FUNC_0("glEnable(GL_TEXTURE_2D)");
                break;
            case 128:
                VAR_3->gl_ops.gl.p_glDisable(132);
                FUNC_0("glDisable(GL_TEXTURE_1D)");
                VAR_3->gl_ops.gl.p_glDisable(131);
                FUNC_0("glDisable(GL_TEXTURE_2D)");
                VAR_3->gl_ops.gl.p_glDisable(130);
                FUNC_0("glDisable(GL_TEXTURE_3D)");
                if (VAR_3->supported[VAR_0])
                {
                    VAR_3->gl_ops.gl.p_glDisable(129);
                    FUNC_0("glDisable(GL_TEXTURE_CUBE_MAP_ARB)");
                }
                VAR_3->gl_ops.gl.p_glEnable(128);
                FUNC_0("glEnable(GL_TEXTURE_RECTANGLE_ARB)");
                break;
            case 130:
                if (VAR_3->supported[VAR_0])
                {
                    VAR_3->gl_ops.gl.p_glDisable(129);
                    FUNC_0("glDisable(GL_TEXTURE_CUBE_MAP_ARB)");
                }
                if (VAR_3->supported[VAR_1])
                {
                    VAR_3->gl_ops.gl.p_glDisable(128);
                    FUNC_0("glDisable(GL_TEXTURE_RECTANGLE_ARB)");
                }
                VAR_3->gl_ops.gl.p_glDisable(132);
                FUNC_0("glDisable(GL_TEXTURE_1D)");
                VAR_3->gl_ops.gl.p_glDisable(131);
                FUNC_0("glDisable(GL_TEXTURE_2D)");
                VAR_3->gl_ops.gl.p_glEnable(130);
                FUNC_0("glEnable(GL_TEXTURE_3D)");
                break;
            case 129:
                VAR_3->gl_ops.gl.p_glDisable(132);
                FUNC_0("glDisable(GL_TEXTURE_1D)");
                VAR_3->gl_ops.gl.p_glDisable(131);
                FUNC_0("glDisable(GL_TEXTURE_2D)");
                VAR_3->gl_ops.gl.p_glDisable(130);
                FUNC_0("glDisable(GL_TEXTURE_3D)");
                if (VAR_3->supported[VAR_1])
                {
                    VAR_3->gl_ops.gl.p_glDisable(128);
                    FUNC_0("glDisable(GL_TEXTURE_RECTANGLE_ARB)");
                }
                VAR_3->gl_ops.gl.p_glEnable(129);
                FUNC_0("glEnable(GL_TEXTURE_CUBE_MAP_ARB)");
              break;
        }
    }
    else
    {
        VAR_3->gl_ops.gl.p_glDisable(132);
        FUNC_0("glDisable(GL_TEXTURE_1D)");
        VAR_3->gl_ops.gl.p_glEnable(131);
        FUNC_0("glEnable(GL_TEXTURE_2D)");
        VAR_3->gl_ops.gl.p_glDisable(130);
        FUNC_0("glDisable(GL_TEXTURE_3D)");
        if (VAR_3->supported[VAR_0])
        {
            VAR_3->gl_ops.gl.p_glDisable(129);
            FUNC_0("glDisable(GL_TEXTURE_CUBE_MAP_ARB)");
        }
        if (VAR_3->supported[VAR_1])
        {
            VAR_3->gl_ops.gl.p_glDisable(128);
            FUNC_0("glDisable(GL_TEXTURE_RECTANGLE_ARB)");
        }

    }
}
