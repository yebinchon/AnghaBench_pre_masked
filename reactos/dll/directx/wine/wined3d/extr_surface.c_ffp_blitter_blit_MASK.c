
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef struct wined3d_color_key {scalar_t__ color_space_low_value; } const wined3d_color_key ;
struct TYPE_10__ {int color_key_flags; struct wined3d_color_key const src_blt_color_key; } ;
struct wined3d_resource {TYPE_2__* format; struct wined3d_device* device; } ;
struct wined3d_texture {TYPE_4__* swapchain; TYPE_3__ async; struct wined3d_resource resource; int target; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct TYPE_12__ {int (* p_glFlush ) () ;int (* p_glDisable ) (int ) ;int (* p_glAlphaFunc ) (int ,float) ;int (* p_glEnable ) (int ) ;} ;
struct TYPE_13__ {TYPE_5__ gl; } ;
struct wined3d_gl_info {TYPE_6__ gl_ops; scalar_t__* supported; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {int win_handle; struct wined3d_gl_info* gl_info; } ;
struct wined3d_blitter {TYPE_1__* ops; struct wined3d_blitter* next; } ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
typedef enum wined3d_blit_op { ____Placeholder_wined3d_blit_op } wined3d_blit_op ;
struct TYPE_14__ {scalar_t__ offscreen_rendering_mode; scalar_t__ strict_draw_ordering; } ;
struct TYPE_11__ {struct wined3d_texture* front_buffer; } ;
struct TYPE_9__ {scalar_t__ id; } ;
struct TYPE_8__ {int (* blitter_blit ) (struct wined3d_blitter*,int,struct wined3d_context*,struct wined3d_surface*,int,int const*,struct wined3d_surface*,int,int const*,struct wined3d_color_key const*,int) ;} ;
typedef int RECT ;
typedef int GLenum ;
typedef int DWORD ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (char*,struct wined3d_surface*,...) ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct wined3d_context*,struct wined3d_device*) ;
 int FUNC_3 (struct wined3d_context*,int ,struct wined3d_surface*,int *,int) ;
 int FUNC_4 (struct wined3d_context*,int ) ;
 int FUNC_5 (struct wined3d_context*,int ) ;
 int FUNC_6 (struct wined3d_context*,int ) ;
 int FUNC_7 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int const*,int const*,int) ;
 int FUNC_8 (int,struct wined3d_context*,struct wined3d_resource*,int,struct wined3d_resource*,int) ;
 int FUNC_9 (struct wined3d_blitter*,int,struct wined3d_context*,struct wined3d_surface*,int,int const*,struct wined3d_surface*,int,int const*,struct wined3d_color_key const*,int) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,float) ;
 int FUNC_14 (int ,float) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 unsigned int FUNC_19 (struct wined3d_surface*) ;
 int FUNC_20 (struct wined3d_surface*,int ,int *) ;
 TYPE_7__ VAR_16 ;
 int FUNC_21 (struct wined3d_texture*) ;
 int FUNC_22 (struct wined3d_texture*,struct wined3d_context*,int ) ;
 int FUNC_23 (struct wined3d_texture*,int,struct wined3d_color_key const*) ;

__attribute__((used)) static DWORD FUNC_24(struct wined3d_blitter *VAR_17, enum wined3d_blit_op VAR_18,
        struct wined3d_context *VAR_19, struct wined3d_surface *VAR_20, DWORD VAR_21,
        const RECT *VAR_22, struct wined3d_surface *VAR_23, DWORD VAR_24, const RECT *VAR_25,
        const struct wined3d_color_key *VAR_26, enum wined3d_texture_filter_type VAR_27)
{
    unsigned int VAR_28 = FUNC_19(VAR_20);
    struct wined3d_texture *VAR_29 = VAR_20->container;
    struct wined3d_texture *VAR_30 = VAR_23->container;
    const struct wined3d_gl_info *VAR_31 = VAR_19->gl_info;
    struct wined3d_resource *VAR_32, *VAR_33;
    struct wined3d_color_key VAR_34;
    struct wined3d_device *VAR_35;
    struct wined3d_blitter *VAR_36;
    DWORD VAR_37;
    RECT VAR_38;

    VAR_32 = &VAR_29->resource;
    VAR_33 = &VAR_30->resource;
    VAR_35 = VAR_33->device;

    if (!FUNC_8(VAR_18, VAR_19, VAR_32, VAR_21, VAR_33, VAR_24))
    {
        if ((VAR_36 = VAR_17->next))
            return VAR_36->ops->blitter_blit(VAR_36, VAR_18, VAR_19, VAR_20, VAR_21,
                    VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27);
    }

    FUNC_0("Blt from surface %p to rendertarget %p\n", VAR_20, VAR_23);

    VAR_34 = VAR_29->async.src_blt_color_key;
    VAR_37 = VAR_29->async.color_key_flags;
    FUNC_23(VAR_29, VAR_14, VAR_26);




    FUNC_22(VAR_29, VAR_19, VAR_2);


    FUNC_2(VAR_19, VAR_35);

    if (VAR_24 == VAR_15)
    {
        VAR_38 = *VAR_25;
        FUNC_20(VAR_23, VAR_19->win_handle, &VAR_38);
        VAR_25 = &VAR_38;
    }

    if (VAR_16.offscreen_rendering_mode == VAR_10)
    {
        GLenum VAR_39;

        if (VAR_24 == VAR_15)
        {
            FUNC_0("Destination surface %p is onscreen.\n", VAR_23);
            VAR_39 = FUNC_21(VAR_30);
        }
        else
        {
            FUNC_0("Destination surface %p is offscreen.\n", VAR_23);
            VAR_39 = VAR_4;
        }
        FUNC_3(VAR_19, VAR_5, VAR_23, ((void*)0), VAR_24);
        FUNC_6(VAR_19, VAR_39);
        FUNC_4(VAR_19, VAR_5);
        FUNC_5(VAR_19, VAR_11);
    }

    VAR_31->gl_ops.gl.p_glEnable(VAR_29->target);
    FUNC_1("glEnable(target)");

    if (VAR_18 == VAR_13 || VAR_26)
    {
        VAR_31->gl_ops.gl.p_glEnable(VAR_3);
        FUNC_1("glEnable(GL_ALPHA_TEST)");
    }

    if (VAR_26)
    {



        if (VAR_29->resource.format->id == VAR_12)
            VAR_31->gl_ops.gl.p_glAlphaFunc(VAR_6,
                    (float)VAR_29->async.src_blt_color_key.color_space_low_value / 255.0f);
        else
            VAR_31->gl_ops.gl.p_glAlphaFunc(VAR_6, 0.0f);
        FUNC_1("glAlphaFunc");
    }

    FUNC_7(VAR_29, VAR_28, VAR_19, VAR_22, VAR_25, VAR_27);

    if (VAR_18 == VAR_13 || VAR_26)
    {
        VAR_31->gl_ops.gl.p_glDisable(VAR_3);
        FUNC_1("glDisable(GL_ALPHA_TEST)");
    }


    VAR_31->gl_ops.gl.p_glDisable(VAR_7);
    FUNC_1("glDisable(GL_TEXTURE_2D)");
    if (VAR_31->supported[VAR_0])
    {
        VAR_31->gl_ops.gl.p_glDisable(VAR_8);
        FUNC_1("glDisable(GL_TEXTURE_CUBE_MAP_ARB)");
    }
    if (VAR_31->supported[VAR_1])
    {
        VAR_31->gl_ops.gl.p_glDisable(VAR_9);
        FUNC_1("glDisable(GL_TEXTURE_RECTANGLE_ARB)");
    }

    if (VAR_16.strict_draw_ordering
            || (VAR_30->swapchain && VAR_30->swapchain->front_buffer == VAR_30))
        VAR_31->gl_ops.gl.p_glFlush();


    FUNC_23(VAR_29, VAR_14,
            (VAR_37 & VAR_14) ? &VAR_34 : ((void*)0));

    return VAR_24;
}
