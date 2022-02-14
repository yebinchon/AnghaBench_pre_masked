
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {TYPE_1__* format; } ;
struct wined3d_texture {unsigned int level_count; TYPE_4__* swapchain; TYPE_2__ resource; } ;
struct wined3d_surface {struct wined3d_texture* container; } ;
struct TYPE_18__ {int (* p_glFlush ) () ;int (* p_glDisable ) (int ) ;int (* p_glColorMask ) (int ,int ,int ,int ) ;int (* p_glReadBuffer ) (int ) ;} ;
struct TYPE_19__ {TYPE_5__ gl; } ;
struct TYPE_16__ {int (* glBlitFramebuffer ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;} ;
struct wined3d_gl_info {TYPE_6__ gl_ops; TYPE_3__ fbo_ops; } ;
struct wined3d_device {int dummy; } ;
struct wined3d_context {int win_handle; struct wined3d_gl_info* gl_info; int valid; } ;
typedef enum wined3d_texture_filter_type { ____Placeholder_wined3d_texture_filter_type } wined3d_texture_filter_type ;
struct TYPE_21__ {scalar_t__ strict_draw_ordering; } ;
struct TYPE_20__ {scalar_t__ bottom; scalar_t__ right; scalar_t__ top; scalar_t__ left; } ;
struct TYPE_17__ {struct wined3d_texture* front_buffer; } ;
struct TYPE_14__ {scalar_t__ id; } ;
typedef TYPE_7__ RECT ;
typedef int GLenum ;
typedef int DWORD ;


 int FUNC_0 (char*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,struct wined3d_surface*,...) ;
 int FUNC_3 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int) ;
 int VAR_12 ;



 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*) ;
 struct wined3d_context* FUNC_7 (struct wined3d_device const*,struct wined3d_texture*,unsigned int) ;
 int FUNC_8 (struct wined3d_context*,int ,struct wined3d_surface*,int *,int ) ;
 int FUNC_9 (struct wined3d_context*,int ) ;
 struct wined3d_surface* FUNC_10 (struct wined3d_context*) ;
 int FUNC_11 (struct wined3d_context*,int ) ;
 int FUNC_12 (struct wined3d_context*) ;
 int FUNC_13 (struct wined3d_context*,struct wined3d_surface*) ;
 int FUNC_14 (struct wined3d_context*,int ) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (struct wined3d_texture*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int ,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_21 () ;
 unsigned int FUNC_22 (struct wined3d_surface*) ;
 int FUNC_23 (struct wined3d_surface*,int ,TYPE_7__*) ;
 int FUNC_24 (struct wined3d_texture*,unsigned int,TYPE_7__*) ;
 int FUNC_25 (TYPE_7__ const*) ;
 int FUNC_26 (int ) ;
 TYPE_8__ VAR_13 ;
 int FUNC_27 (struct wined3d_texture*) ;
 int FUNC_28 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;
 int FUNC_29 (struct wined3d_texture*,unsigned int,struct wined3d_context*,int ) ;

__attribute__((used)) static void FUNC_30(const struct wined3d_device *VAR_14,
        struct wined3d_context *VAR_15, enum wined3d_texture_filter_type VAR_16,
        struct wined3d_surface *VAR_17, DWORD VAR_18, const RECT *VAR_19,
        struct wined3d_surface *VAR_20, DWORD VAR_21, const RECT *VAR_22)
{
    unsigned int VAR_23 = FUNC_22(VAR_20);
    unsigned int VAR_24 = FUNC_22(VAR_17);
    struct wined3d_texture *VAR_25 = VAR_20->container;
    struct wined3d_texture *VAR_26 = VAR_17->container;
    const struct wined3d_gl_info *VAR_27;
    struct wined3d_context *VAR_28 = VAR_15;
    struct wined3d_surface *VAR_29, *VAR_30 = ((void*)0);
    RECT VAR_31, VAR_32;
    GLenum VAR_33;
    GLenum VAR_34;
    int VAR_35;

    FUNC_2("device %p, filter %s,\n", VAR_14, FUNC_15(VAR_16));
    FUNC_2("src_surface %p, src_location %s, src_rect %s,\n",
            VAR_17, FUNC_26(VAR_18), FUNC_25(VAR_19));
    FUNC_2("dst_surface %p, dst_location %s, dst_rect %s.\n",
            VAR_20, FUNC_26(VAR_21), FUNC_25(VAR_22));

    VAR_31 = *VAR_19;
    VAR_32 = *VAR_22;

    switch (VAR_16)
    {
        case 130:
            VAR_33 = VAR_3;
            break;

        default:
            FUNC_0("Unsupported filter mode %s (%#x).\n", FUNC_15(VAR_16), VAR_16);
        case 129:
        case 128:
            VAR_33 = VAR_4;
            break;
    }


    if (FUNC_16(VAR_26, VAR_18)
            && (VAR_26->resource.format->id != VAR_25->resource.format->id
                || FUNC_5(VAR_31.bottom - VAR_31.top) != FUNC_5(VAR_32.bottom - VAR_32.top)
                || FUNC_5(VAR_31.right - VAR_31.left) != FUNC_5(VAR_32.right - VAR_32.left)))
        VAR_18 = VAR_11;





    FUNC_28(VAR_26, VAR_24, VAR_15, VAR_18);
    if (!FUNC_24(VAR_25, VAR_23 % VAR_25->level_count, &VAR_32))
        FUNC_28(VAR_25, VAR_23, VAR_15, VAR_21);
    else
        FUNC_29(VAR_25, VAR_23, VAR_15, VAR_21);


    if (VAR_18 == VAR_10) VAR_29 = VAR_17;
    else if (VAR_21 == VAR_10) VAR_29 = VAR_20;
    else VAR_29 = ((void*)0);

    VAR_30 = FUNC_10(VAR_15);
    if (VAR_30 != VAR_29)
        VAR_28 = FUNC_7(VAR_14, VAR_29 ? VAR_29->container : ((void*)0),
                VAR_29 ? FUNC_22(VAR_29) : 0);
    else
        VAR_30 = ((void*)0);

    if (!VAR_28->valid)
    {
        FUNC_12(VAR_28);
        FUNC_3("Invalid context, skipping blit.\n");
        return;
    }

    VAR_27 = VAR_28->gl_info;

    if (VAR_18 == VAR_10)
    {
        FUNC_2("Source surface %p is onscreen.\n", VAR_17);
        VAR_34 = FUNC_27(VAR_26);
        FUNC_23(VAR_17, VAR_28->win_handle, &VAR_31);
    }
    else
    {
        FUNC_2("Source surface %p is offscreen.\n", VAR_17);
        VAR_34 = VAR_0;
    }

    FUNC_8(VAR_28, VAR_5, VAR_17, ((void*)0), VAR_18);
    VAR_27->gl_ops.gl.p_glReadBuffer(VAR_34);
    FUNC_6("glReadBuffer()");
    FUNC_9(VAR_28, VAR_5);

    if (VAR_21 == VAR_10)
    {
        FUNC_2("Destination surface %p is onscreen.\n", VAR_20);
        VAR_34 = FUNC_27(VAR_25);
        FUNC_23(VAR_20, VAR_28->win_handle, &VAR_32);
    }
    else
    {
        FUNC_2("Destination surface %p is offscreen.\n", VAR_20);
        VAR_34 = VAR_0;
    }

    FUNC_8(VAR_28, VAR_2, VAR_20, ((void*)0), VAR_21);
    FUNC_14(VAR_28, VAR_34);
    FUNC_9(VAR_28, VAR_2);
    FUNC_11(VAR_28, VAR_9);

    VAR_27->gl_ops.gl.p_glColorMask(VAR_7, VAR_7, VAR_7, VAR_7);
    for (VAR_35 = 0; VAR_35 < VAR_8; ++VAR_35)
        FUNC_11(VAR_28, FUNC_1(FUNC_4(VAR_35)));

    VAR_27->gl_ops.gl.p_glDisable(VAR_6);
    FUNC_11(VAR_28, FUNC_1(VAR_12));

    VAR_27->fbo_ops.glBlitFramebuffer(VAR_31.left, VAR_31.top, VAR_31.right, VAR_31.bottom,
            VAR_32.left, VAR_32.top, VAR_32.right, VAR_32.bottom, VAR_1, VAR_33);
    FUNC_6("glBlitFramebuffer()");

    if (VAR_13.strict_draw_ordering || (VAR_21 == VAR_10
            && VAR_25->swapchain->front_buffer == VAR_25))
        VAR_27->gl_ops.gl.p_glFlush();

    if (VAR_30)
        FUNC_13(VAR_28, VAR_30);
}
