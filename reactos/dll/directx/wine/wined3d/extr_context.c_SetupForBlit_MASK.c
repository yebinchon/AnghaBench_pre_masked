
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int (* p_glDisable ) (int ) ;int (* p_glColorMask ) (int ,int ,int ,int ) ;int (* p_glLoadIdentity ) () ;int (* p_glMatrixMode ) (int ) ;int (* p_glTexEnvf ) (int ,int ,float) ;int (* p_glTexEnvi ) (int ,int ,int ) ;} ;
struct TYPE_10__ {TYPE_3__ gl; } ;
struct TYPE_8__ {int textures; } ;
struct wined3d_gl_info {scalar_t__* supported; TYPE_4__ gl_ops; TYPE_2__ limits; } ;
struct wined3d_device {int shader_priv; TYPE_1__* shader_backend; } ;
struct wined3d_context {scalar_t__ blit_w; scalar_t__ blit_h; scalar_t__* rev_tex_unit_map; void* last_was_rhw; void* last_was_blit; struct wined3d_gl_info* gl_info; } ;
struct TYPE_11__ {scalar_t__ cx; scalar_t__ cy; } ;
struct TYPE_7__ {int (* shader_disable ) (int ,struct wined3d_context*) ;} ;
typedef TYPE_5__ SIZE ;
typedef scalar_t__ DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_5 (char*,...) ;
 void* VAR_35 ;
 size_t VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_6 (int) ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_51 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct wined3d_context*,struct wined3d_gl_info const*,int) ;
 int FUNC_10 (struct wined3d_context*,int ) ;
 int FUNC_11 (struct wined3d_context*,TYPE_5__*) ;
 int FUNC_12 (struct wined3d_context*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct wined3d_gl_info const*,scalar_t__,scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ,float) ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ,int ,int ,int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ,struct wined3d_context*) ;
 int FUNC_36 (int ) ;
 int FUNC_37 (int ) ;
 int FUNC_38 (int ,int ,int ) ;
 int FUNC_39 (int ) ;
 int FUNC_40 (int ) ;
 int FUNC_41 (int ) ;
 int FUNC_42 (int ) ;

__attribute__((used)) static void FUNC_43(const struct wined3d_device *VAR_52, struct wined3d_context *VAR_53)
{
    const struct wined3d_gl_info *VAR_54 = VAR_53->gl_info;
    DWORD VAR_55;
    SIZE VAR_56;
    int VAR_57;

    FUNC_5("Setting up context %p for blitting\n", VAR_53);

    FUNC_11(VAR_53, &VAR_56);

    if (VAR_53->last_was_blit)
    {
        if (VAR_53->blit_w != VAR_56.cx || VAR_53->blit_h != VAR_56.cy)
        {
            FUNC_16(VAR_54, VAR_56.cx, VAR_56.cy);
            VAR_53->blit_w = VAR_56.cx;
            VAR_53->blit_h = VAR_56.cy;


        }
        FUNC_5("Context is already set up for blitting, nothing to do\n");
        return;
    }
    VAR_53->last_was_blit = VAR_35;

    if (VAR_54->supported[VAR_36])
    {






        for (VAR_57 = VAR_54->limits.textures - 1; VAR_57 > 0 ; --VAR_57)
        {
            VAR_55 = VAR_53->rev_tex_unit_map[VAR_57];
            FUNC_9(VAR_53, VAR_54, VAR_57);

            if (VAR_54->supported[VAR_3])
            {
                VAR_54->gl_ops.gl.p_glDisable(VAR_24);
                FUNC_8("glDisable GL_TEXTURE_CUBE_MAP_ARB");
            }
            VAR_54->gl_ops.gl.p_glDisable(VAR_23);
            FUNC_8("glDisable GL_TEXTURE_3D");
            if (VAR_54->supported[VAR_4])
            {
                VAR_54->gl_ops.gl.p_glDisable(VAR_29);
                FUNC_8("glDisable GL_TEXTURE_RECTANGLE_ARB");
            }
            VAR_54->gl_ops.gl.p_glDisable(VAR_22);
            FUNC_8("glDisable GL_TEXTURE_2D");

            VAR_54->gl_ops.gl.p_glTexEnvi(VAR_25, VAR_26, VAR_18);
            FUNC_8("glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);");

            if (VAR_55 != VAR_51)
            {
                if (VAR_55 < VAR_32)
                    FUNC_12(VAR_53, FUNC_3(VAR_55, VAR_48));
                FUNC_12(VAR_53, FUNC_2(VAR_55));
            }
        }

        FUNC_9(VAR_53, VAR_54, 0);
        if (VAR_54->supported[VAR_3])
        {
            VAR_54->gl_ops.gl.p_glDisable(VAR_24);
            FUNC_8("glDisable GL_TEXTURE_CUBE_MAP_ARB");
        }
        VAR_54->gl_ops.gl.p_glDisable(VAR_23);
        FUNC_8("glDisable GL_TEXTURE_3D");
        if (VAR_54->supported[VAR_4])
        {
            VAR_54->gl_ops.gl.p_glDisable(VAR_29);
            FUNC_8("glDisable GL_TEXTURE_RECTANGLE_ARB");
        }
        VAR_54->gl_ops.gl.p_glDisable(VAR_22);
        FUNC_8("glDisable GL_TEXTURE_2D");

        VAR_54->gl_ops.gl.p_glTexEnvi(VAR_25, VAR_26, VAR_18);

        VAR_54->gl_ops.gl.p_glMatrixMode(VAR_21);
        FUNC_8("glMatrixMode(GL_TEXTURE)");
        VAR_54->gl_ops.gl.p_glLoadIdentity();
        FUNC_8("glLoadIdentity()");

        if (VAR_54->supported[VAR_6])
        {
            VAR_54->gl_ops.gl.p_glTexEnvf(VAR_27,
                    VAR_28, 0.0f);
            FUNC_8("glTexEnvf GL_TEXTURE_LOD_BIAS_EXT ...");
        }


        VAR_54->gl_ops.gl.p_glMatrixMode(VAR_15);
        FUNC_8("glMatrixMode(GL_MODELVIEW)");
        VAR_54->gl_ops.gl.p_glLoadIdentity();
        FUNC_8("glLoadIdentity()");
        FUNC_12(VAR_53, FUNC_4(FUNC_7(0)));


        VAR_54->gl_ops.gl.p_glDisable(VAR_7);
        FUNC_8("glDisable(GL_ALPHA_TEST)");
        FUNC_12(VAR_53, FUNC_1(VAR_38));
        VAR_54->gl_ops.gl.p_glDisable(VAR_13);
        FUNC_8("glDisable GL_LIGHTING");
        FUNC_12(VAR_53, FUNC_1(VAR_42));
        FUNC_15(VAR_12);
        FUNC_8("glDisable GL_FOG");
        FUNC_12(VAR_53, FUNC_1(VAR_41));
    }

    if (VAR_54->supported[VAR_2])
        FUNC_0(FUNC_13(0, 0));
    FUNC_9(VAR_53, VAR_54, 0);

    VAR_55 = VAR_53->rev_tex_unit_map[0];
    if (VAR_55 != VAR_51)
    {
        if (VAR_55 < VAR_32)
        {
            FUNC_12(VAR_53, FUNC_4(VAR_50 + VAR_55));
            FUNC_12(VAR_53, FUNC_3(VAR_55, VAR_48));
        }
        FUNC_12(VAR_53, FUNC_2(VAR_55));
    }


    VAR_54->gl_ops.gl.p_glDisable(VAR_11);
    FUNC_8("glDisable GL_DEPTH_TEST");
    FUNC_12(VAR_53, FUNC_1(VAR_47));
    VAR_54->gl_ops.gl.p_glDisable(VAR_8);
    FUNC_8("glDisable GL_BLEND");
    FUNC_12(VAR_53, FUNC_1(VAR_37));
    VAR_54->gl_ops.gl.p_glDisable(VAR_10);
    FUNC_8("glDisable GL_CULL_FACE");
    FUNC_12(VAR_53, FUNC_1(VAR_40));
    VAR_54->gl_ops.gl.p_glDisable(VAR_20);
    FUNC_8("glDisable GL_STENCIL_TEST");
    FUNC_12(VAR_53, FUNC_1(VAR_46));
    VAR_54->gl_ops.gl.p_glDisable(VAR_19);
    FUNC_8("glDisable GL_SCISSOR_TEST");
    FUNC_12(VAR_53, FUNC_1(VAR_44));
    if (VAR_54->supported[VAR_1])
    {
        VAR_54->gl_ops.gl.p_glDisable(VAR_17);
        FUNC_8("glDisable GL_POINT_SPRITE_ARB");
        FUNC_12(VAR_53, FUNC_1(VAR_43));
    }
    VAR_54->gl_ops.gl.p_glColorMask(VAR_30, VAR_30,VAR_30,VAR_30);
    FUNC_8("glColorMask");
    for (VAR_57 = 0; VAR_57 < VAR_31; ++VAR_57)
        FUNC_12(VAR_53, FUNC_1(FUNC_6(VAR_57)));
    if (VAR_54->supported[VAR_5])
    {
        VAR_54->gl_ops.gl.p_glDisable(VAR_9);
        FUNC_12(VAR_53, FUNC_1(VAR_45));
        FUNC_8("glDisable(GL_COLOR_SUM_EXT)");
    }

    VAR_53->last_was_rhw = VAR_35;
    FUNC_12(VAR_53, VAR_33);

    FUNC_10(VAR_53, 0);
    FUNC_12(VAR_53, FUNC_1(VAR_39));


    if (VAR_54->supported[VAR_0])
        FUNC_0(FUNC_14(VAR_14, VAR_16));

    FUNC_16(VAR_54, VAR_56.cx, VAR_56.cy);


    VAR_52->shader_backend->shader_disable(VAR_52->shader_priv, VAR_53);

    VAR_53->blit_w = VAR_56.cx;
    VAR_53->blit_h = VAR_56.cy;
    FUNC_12(VAR_53, VAR_34);
    FUNC_12(VAR_53, FUNC_4(VAR_49));
}
