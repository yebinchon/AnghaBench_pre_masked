
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct mp_filter {struct lavc_ctx* priv; } ;
struct TYPE_12__ {int use_hw_frames; } ;
struct lavc_ctx {TYPE_5__* cached_hw_frames_ctx; TYPE_7__* avctx; TYPE_2__* opts; int hwdec_dev; TYPE_1__ hwdec; } ;
struct hwcontext_fns {int (* refine_hwframes ) (TYPE_5__*) ;} ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_17__ {int hw_frames_ctx; } ;
struct TYPE_16__ {scalar_t__ data; } ;
struct TYPE_15__ {scalar_t__ sw_format; int initial_pool_size; scalar_t__ format; scalar_t__ width; scalar_t__ height; TYPE_3__* device_ctx; } ;
struct TYPE_14__ {int type; } ;
struct TYPE_13__ {int hwdec_extra_frames; scalar_t__ hwdec_image_format; } ;
typedef TYPE_4__ AVHWFramesContext ;
typedef TYPE_5__ AVBufferRef ;


 int FUNC_0 (struct lavc_ctx*,char*) ;
 int FUNC_1 (struct lavc_ctx*,char*) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_5__**) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ,int,TYPE_5__**) ;
 struct hwcontext_fns* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_9(struct mp_filter *VAR_0, enum AVPixelFormat VAR_1)
{
    struct lavc_ctx *VAR_2 = VAR_0->priv;
    AVBufferRef *VAR_3 = ((void*)0);

    if (!VAR_2->hwdec.use_hw_frames)
        return 0;

    if (!VAR_2->hwdec_dev) {
        FUNC_0(VAR_2, "Missing device context.\n");
        goto error;
    }

    if (FUNC_5(VAR_2->avctx,
                                VAR_2->hwdec_dev, VAR_1, &VAR_3) < 0)
    {
        FUNC_1(VAR_2, "Hardware decoding of this stream is unsupported?\n");
        goto error;
    }

    AVHWFramesContext *VAR_4 = (void *)VAR_3->data;

    if (VAR_2->opts->hwdec_image_format)
        VAR_4->sw_format = FUNC_7(VAR_2->opts->hwdec_image_format);



    if (VAR_4->initial_pool_size)
        VAR_4->initial_pool_size += VAR_2->opts->hwdec_extra_frames - 1;

    const struct hwcontext_fns *VAR_5 =
        FUNC_6(VAR_4->device_ctx->type);

    if (VAR_5 && VAR_5->refine_hwframes)
        VAR_5->refine_hwframes(VAR_3);


    if (VAR_2->cached_hw_frames_ctx) {
        AVHWFramesContext *VAR_6 = (void *)VAR_2->cached_hw_frames_ctx->data;

        if (VAR_4->format != VAR_6->format ||
            VAR_4->sw_format != VAR_6->sw_format ||
            VAR_4->width != VAR_6->width ||
            VAR_4->height != VAR_6->height ||
            VAR_4->initial_pool_size != VAR_6->initial_pool_size)
            FUNC_3(&VAR_2->cached_hw_frames_ctx);
    }

    if (!VAR_2->cached_hw_frames_ctx) {
        if (FUNC_4(VAR_3) < 0) {
            FUNC_0(VAR_2, "Failed to allocate hw frames.\n");
            goto error;
        }

        VAR_2->cached_hw_frames_ctx = VAR_3;
        VAR_3 = ((void*)0);
    }

    VAR_2->avctx->hw_frames_ctx = FUNC_2(VAR_2->cached_hw_frames_ctx);
    if (!VAR_2->avctx->hw_frames_ctx)
        goto error;

    FUNC_3(&VAR_3);
    return 0;

error:
    FUNC_3(&VAR_3);
    FUNC_3(&VAR_2->cached_hw_frames_ctx);
    return -1;
}
