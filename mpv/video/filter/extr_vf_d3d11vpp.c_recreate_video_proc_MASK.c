
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int levels; int space; } ;
struct TYPE_17__ {TYPE_2__ color; int h; int w; } ;
struct priv {int video_proc; int video_ctx; TYPE_3__ params; int vp_enum; int video_dev; TYPE_1__* opts; int c_h; int c_w; int d3d_frame_format; } ;
struct mp_filter {struct priv* priv; } ;
struct TYPE_22__ {int RateConversionCapsCount; } ;
struct TYPE_21__ {int YCbCr_Matrix; int Nominal_Range; } ;
struct TYPE_20__ {int OutputHeight; int OutputWidth; int InputHeight; int InputWidth; int InputFrameFormat; } ;
struct TYPE_19__ {int ProcessorCaps; } ;
struct TYPE_18__ {int bottom; int right; } ;
struct TYPE_15__ {int mode; } ;
typedef TYPE_4__ RECT ;
typedef int HRESULT ;
typedef TYPE_5__ D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS ;
typedef TYPE_6__ D3D11_VIDEO_PROCESSOR_CONTENT_DESC ;
typedef TYPE_7__ D3D11_VIDEO_PROCESSOR_COLOR_SPACE ;
typedef TYPE_8__ D3D11_VIDEO_PROCESSOR_CAPS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,TYPE_7__*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,TYPE_7__*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ,TYPE_4__*) ;
 int FUNC_6 (int ,int ,int,int *) ;
 int FUNC_7 (int ,TYPE_6__*,int *) ;
 int FUNC_8 (int ,TYPE_8__*) ;
 int FUNC_9 (int ,int,TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (struct mp_filter*,char*) ;
 int FUNC_11 (struct mp_filter*,char*,...) ;
 int FUNC_12 (struct mp_filter*,char*) ;
 int VAR_4 ;
 int FUNC_13 (struct mp_filter*) ;

__attribute__((used)) static int FUNC_14(struct mp_filter *VAR_5)
{
    struct priv *VAR_6 = VAR_5->priv;
    HRESULT VAR_7;

    FUNC_13(VAR_5);

    D3D11_VIDEO_PROCESSOR_CONTENT_DESC VAR_8 = {
        .InputFrameFormat = VAR_6->d3d_frame_format,
        .InputWidth = VAR_6->c_w,
        .InputHeight = VAR_6->c_h,
        .OutputWidth = VAR_6->params.w,
        .OutputHeight = VAR_6->params.h,
    };
    VAR_7 = FUNC_7(VAR_6->video_dev, &VAR_8,
                                                          &VAR_6->vp_enum);
    if (FUNC_0(VAR_7))
        goto fail;

    D3D11_VIDEO_PROCESSOR_CAPS VAR_9;
    VAR_7 = FUNC_8(VAR_6->vp_enum, &VAR_9);
    if (FUNC_0(VAR_7))
        goto fail;

    FUNC_11(VAR_5, "Found %d rate conversion caps. Looking for caps=0x%x.\n",
               (int)VAR_9.RateConversionCapsCount, VAR_6->opts->mode);

    int VAR_10 = -1;
    for (int VAR_11 = 0; VAR_11 < VAR_9.RateConversionCapsCount; VAR_11++) {
        D3D11_VIDEO_PROCESSOR_RATE_CONVERSION_CAPS VAR_12;
        VAR_7 = FUNC_9
                (VAR_6->vp_enum, VAR_11, &VAR_12);
        if (FUNC_0(VAR_7))
            goto fail;
        FUNC_11(VAR_5, "  - %d: 0x%08x\n", VAR_11, (unsigned)VAR_12.ProcessorCaps);
        if (VAR_12.ProcessorCaps & VAR_6->opts->mode) {
            FUNC_11(VAR_5, "       (matching)\n");
            if (VAR_10 < 0)
                VAR_10 = VAR_11;
        }
    }

    if (VAR_10 < 0) {
        FUNC_12(VAR_5, "No fitting video processor found, picking #0.\n");
        VAR_10 = 0;
    }



    VAR_7 = FUNC_6(VAR_6->video_dev, VAR_6->vp_enum, VAR_10,
                                                &VAR_6->video_proc);
    if (FUNC_0(VAR_7)) {
        FUNC_10(VAR_5, "Failed to create D3D11 video processor.\n");
        goto fail;
    }


    RECT VAR_13 = {
        .right = VAR_6->params.w,
        .bottom = VAR_6->params.h,
    };
    FUNC_5(VAR_6->video_ctx,
                                                         VAR_6->video_proc,
                                                         0, VAR_4, &VAR_13);


    FUNC_2(VAR_6->video_ctx,
                                                                 VAR_6->video_proc,
                                                                 0, VAR_1);

    FUNC_4(VAR_6->video_ctx,
                                                         VAR_6->video_proc,
                                                         0,
                                                         VAR_0,
                                                         VAR_1, 0);

    D3D11_VIDEO_PROCESSOR_COLOR_SPACE VAR_14 = {
        .YCbCr_Matrix = VAR_6->params.color.space != VAR_2,
        .Nominal_Range = VAR_6->params.color.levels == VAR_3 ? 1 : 2,
    };
    FUNC_3(VAR_6->video_ctx,
                                                         VAR_6->video_proc,
                                                         0, &VAR_14);
    FUNC_1(VAR_6->video_ctx,
                                                         VAR_6->video_proc,
                                                         &VAR_14);

    return 0;
fail:
    FUNC_13(VAR_5);
    return -1;
}
