
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_tex_params {int dimensions; int d; int render_src; int src_linear; int format; int h; int w; } ;
struct TYPE_6__ {scalar_t__ hw_subfmt; int imgfmt; int h; int w; } ;
struct ra_hwdec_mapper {TYPE_2__ dst_params; TYPE_2__ src_params; int * tex; int ra; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {scalar_t__ alpha; int egl_config; int egl_display; int device9ex; } ;
struct priv {scalar_t__ egl_surface; int gl_texture; int egl_display; int surface9; int texture9; int device9ex; int query9; } ;
struct TYPE_7__ {int (* BindTexture ) (int ,int ) ;int (* TexParameteri ) (int ,int ,int ) ;int (* GenTextures ) (int,int *) ;} ;
struct TYPE_5__ {struct priv_owner* priv; } ;
typedef int HRESULT ;
typedef int * HANDLE ;
typedef TYPE_3__ GL ;
typedef int EGLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_1 (int ,int ,int ,int,int ,int ,int ,int *,int **) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_23 ;
 int FUNC_5 (struct ra_hwdec_mapper*,char*,...) ;
 int FUNC_6 (struct ra_hwdec_mapper*,char*,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,struct ra_tex_params*,int ) ;
 int FUNC_10 (int ,int,int) ;
 TYPE_3__* FUNC_11 (int ) ;
 int FUNC_12 (int,int *) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,int ,int ) ;
 int FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static int FUNC_19(struct ra_hwdec_mapper *VAR_24)
{
    struct priv_owner *VAR_25 = VAR_24->owner->priv;
    struct priv *VAR_26 = VAR_24->priv;
    GL *VAR_27 = FUNC_11(VAR_24->ra);
    HRESULT VAR_28;

    VAR_26->device9ex = VAR_25->device9ex;
    VAR_26->egl_display = VAR_25->egl_display;

    VAR_28 = FUNC_2(VAR_26->device9ex, VAR_4,
                                      &VAR_26->query9);
    if (FUNC_0(VAR_28)) {
        FUNC_6(VAR_24, "Failed to create Direct3D query interface: %s\n",
                 FUNC_8(VAR_28));
        goto fail;
    }


    VAR_28 = FUNC_3(VAR_26->query9, VAR_2);
    if (FUNC_0(VAR_28)) {
        FUNC_6(VAR_24, "Failed to issue Direct3D END test query: %s\n",
                 FUNC_8(VAR_28));
        goto fail;
    }

    HANDLE VAR_29 = ((void*)0);
    VAR_28 = FUNC_1(VAR_26->device9ex,
                                          VAR_24->src_params.w,
                                          VAR_24->src_params.h,
                                          1, VAR_5,
                                          VAR_25->alpha ?
                                            VAR_0 : VAR_1,
                                          VAR_3,
                                          &VAR_26->texture9,
                                          &VAR_29);
    if (FUNC_0(VAR_28)) {
        FUNC_5(VAR_24, "Failed to create Direct3D9 texture: %s\n",
               FUNC_8(VAR_28));
        goto fail;
    }

    VAR_28 = FUNC_4(VAR_26->texture9, 0, &VAR_26->surface9);
    if (FUNC_0(VAR_28)) {
        FUNC_5(VAR_24, "Failed to get Direct3D9 surface from texture: %s\n",
               FUNC_8(VAR_28));
        goto fail;
    }

    EGLint VAR_30[] = {
        VAR_15, VAR_24->src_params.w,
        VAR_7, VAR_24->src_params.h,
        VAR_11, VAR_25->alpha ? VAR_13 : VAR_12,
        VAR_14, VAR_10,
        VAR_8
    };
    VAR_26->egl_surface = FUNC_7(
        VAR_26->egl_display, VAR_6,
        VAR_29, VAR_25->egl_config, VAR_30);
    if (VAR_26->egl_surface == VAR_9) {
        FUNC_5(VAR_24, "Failed to create EGL surface\n");
        goto fail;
    }

    VAR_27->GenTextures(1, &VAR_26->gl_texture);
    VAR_27->BindTexture(VAR_18, VAR_26->gl_texture);
    VAR_27->TexParameteri(VAR_18, VAR_20, VAR_17);
    VAR_27->TexParameteri(VAR_18, VAR_19, VAR_17);
    VAR_27->TexParameteri(VAR_18, VAR_21, VAR_16);
    VAR_27->TexParameteri(VAR_18, VAR_22, VAR_16);
    VAR_27->BindTexture(VAR_18, 0);

    struct ra_tex_params VAR_31 = {
        .dimensions = 2,
        .w = VAR_24->src_params.w,
        .h = VAR_24->src_params.h,
        .d = 1,
        .format = FUNC_10(VAR_24->ra, 1, VAR_25->alpha ? 4 : 3),
        .render_src = 1,
        .src_linear = 1,
    };
    if (!VAR_31.format)
        goto fail;

    VAR_24->tex[0] = FUNC_9(VAR_24->ra, &VAR_31, VAR_26->gl_texture);
    if (!VAR_24->tex[0])
        goto fail;

    VAR_24->dst_params = VAR_24->src_params;
    VAR_24->dst_params.imgfmt = VAR_23;
    VAR_24->dst_params.hw_subfmt = 0;
    return 0;
fail:
    return -1;
}
