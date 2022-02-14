
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct priv {int av_device_ctx; } ;
struct mp_stream_info {int hwdec_devs; } ;
struct mp_hwupload {int hw_imgfmt; int num_fmts; int num_upload_fmts; int* fmt_upload_index; int* fmt_upload_num; int upload_fmts; TYPE_2__* f; int fmts; } ;
struct mp_hwdec_ctx {int hw_imgfmt; int av_device_ref; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_9__ {struct priv* priv; } ;
struct TYPE_8__ {scalar_t__* valid_hw_formats; scalar_t__* valid_sw_formats; } ;
typedef TYPE_1__ AVHWFramesConstraints ;
typedef int AVBufferRef ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct priv*,int ,int,int) ;
 int FUNC_2 (struct priv*,int*,int) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (int*) ;
 TYPE_1__* FUNC_8 (int ,int *) ;
 int FUNC_9 (TYPE_1__**) ;
 scalar_t__ FUNC_10 (int *,int ,int**,int ) ;
 struct mp_hwdec_ctx* FUNC_11 (int ,int) ;
 scalar_t__ FUNC_12 (int) ;
 struct mp_stream_info* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int **,int ,int,int,int,int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (struct mp_hwdec_ctx*,int,int) ;

__attribute__((used)) static bool FUNC_18(struct mp_hwupload *VAR_2, int VAR_3)
{
    struct priv *VAR_4 = VAR_2->f->priv;

    VAR_2->hw_imgfmt = VAR_3;
    VAR_2->num_fmts = 0;
    VAR_2->num_upload_fmts = 0;

    struct mp_stream_info *VAR_5 = FUNC_13(VAR_2->f);
    if (!VAR_5 || !VAR_5->hwdec_devs) {
        FUNC_0(VAR_2->f, "no hw context\n");
        return 0;
    }

    struct mp_hwdec_ctx *VAR_6 = ((void*)0);
    AVHWFramesConstraints *VAR_7 = ((void*)0);

    for (int VAR_8 = 0; ; VAR_8++) {
        struct mp_hwdec_ctx *VAR_9 = FUNC_11(VAR_5->hwdec_devs, VAR_8);
        if (!VAR_9)
            break;
        if (!VAR_9->av_device_ref)
            continue;
        VAR_7 = FUNC_8(VAR_9->av_device_ref, ((void*)0));
        if (!VAR_7)
            continue;
        bool VAR_10 = 0;
        for (int VAR_11 = 0; VAR_7->valid_hw_formats &&
                        VAR_7->valid_hw_formats[VAR_11] != VAR_1; VAR_11++)
        {
            VAR_10 |= VAR_7->valid_hw_formats[VAR_11] == FUNC_12(VAR_3);
        }
        if (VAR_10 && (!VAR_9->hw_imgfmt || VAR_9->hw_imgfmt == VAR_3)) {
            VAR_6 = VAR_9;
            break;
        }
        FUNC_9(&VAR_7);
    }

    if (!VAR_6) {
        FUNC_0(VAR_2->f, "no support for this hw format\n");
        return 0;
    }







    for (int VAR_12 = 0; VAR_7->valid_sw_formats &&
                    VAR_7->valid_sw_formats[VAR_12] != VAR_1; VAR_12++)
    {
        int VAR_13 = FUNC_16(VAR_7->valid_sw_formats[VAR_12]);
        if (!VAR_13)
            continue;

        FUNC_3(VAR_2->f, "looking at format %s\n", FUNC_14(VAR_13));


        AVBufferRef *VAR_14 = ((void*)0);
        if (!FUNC_15(&VAR_14, VAR_6->av_device_ref,
                                        VAR_3, VAR_13, 128, 128))
        {
            FUNC_4(VAR_2->f, "failed to allocate pool\n");
            continue;
        }

        enum AVPixelFormat *VAR_15;
        if (FUNC_10(VAR_14,
                            VAR_0, &VAR_15, 0) >= 0)
        {
            int VAR_16 = VAR_2->num_fmts;
            FUNC_1(VAR_4, VAR_2->fmts, VAR_2->num_fmts, VAR_13);
            FUNC_2(VAR_4, VAR_2->fmt_upload_index, VAR_16);
            FUNC_2(VAR_4, VAR_2->fmt_upload_num, VAR_16);

            VAR_2->fmt_upload_index[VAR_16] = VAR_2->num_upload_fmts;

            for (int VAR_17 = 0; VAR_15[VAR_17] != VAR_1; VAR_17++) {
                int VAR_18 = FUNC_16(VAR_15[VAR_17]);
                if (!VAR_18)
                    continue;
                FUNC_3(VAR_2->f, "supports %s\n", FUNC_14(VAR_18));
                if (FUNC_17(VAR_6, VAR_3, VAR_18))
                    FUNC_1(VAR_4, VAR_2->upload_fmts, VAR_2->num_upload_fmts, VAR_18);
            }

            VAR_2->fmt_upload_num[VAR_16] =
                VAR_2->num_upload_fmts - VAR_2->fmt_upload_index[VAR_16];

            FUNC_7(VAR_15);
        }

        FUNC_6(&VAR_14);
    }

    VAR_4->av_device_ctx = FUNC_5(VAR_6->av_device_ref);
    if (!VAR_4->av_device_ctx)
        return 0;

    return VAR_2->num_upload_fmts > 0;
}
