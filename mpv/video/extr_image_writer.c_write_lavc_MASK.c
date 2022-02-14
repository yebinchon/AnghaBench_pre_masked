
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct image_writer_ctx {TYPE_1__* opts; } ;
struct AVCodec {scalar_t__ id; } ;
struct TYPE_22__ {scalar_t__ levels; int gamma; int primaries; } ;
struct TYPE_23__ {TYPE_2__ color; } ;
struct TYPE_24__ {TYPE_3__ params; int * stride; int * planes; int imgfmt; int h; int w; } ;
typedef TYPE_4__ mp_image_t ;
struct TYPE_27__ {scalar_t__ pix_fmt; int color_range; int height; int width; int compression_level; int time_base; } ;
struct TYPE_26__ {scalar_t__ format; int color_trc; int color_primaries; int color_range; int height; int width; int * linesize; int * data; } ;
struct TYPE_25__ {int size; int data; int member_0; } ;
struct TYPE_21__ {scalar_t__ format; scalar_t__ tag_csp; int webp_quality; int webp_lossless; int webp_compression; int png_filter; int png_compression; } ;
typedef int FILE ;
typedef TYPE_5__ AVPacket ;
typedef TYPE_6__ AVFrame ;
typedef TYPE_7__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct image_writer_ctx*,char*,...) ;
 TYPE_6__* FUNC_1 () ;
 int FUNC_2 (TYPE_6__**) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_7__*,char*,int ,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 TYPE_7__* FUNC_6 (struct AVCodec*) ;
 struct AVCodec* FUNC_7 (scalar_t__) ;
 struct AVCodec* FUNC_8 (char*) ;
 int FUNC_9 (TYPE_7__**) ;
 scalar_t__ FUNC_10 (TYPE_7__*,struct AVCodec*,int *) ;
 int FUNC_11 (TYPE_7__*,TYPE_5__*) ;
 int FUNC_12 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_13 (int ,int ,int,int *) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (scalar_t__) ;

__attribute__((used)) static bool FUNC_20(struct image_writer_ctx *VAR_7, mp_image_t *VAR_8, FILE *VAR_9)
{
    bool VAR_10 = 0;
    AVFrame *VAR_11 = ((void*)0);
    AVPacket VAR_12 = {0};
    int VAR_13 = 0;

    FUNC_3(&VAR_12);

    struct AVCodec *VAR_14;
    if (VAR_7->opts->format == VAR_2) {
        VAR_14 = FUNC_8("libwebp");
    } else {
        VAR_14 = FUNC_7(VAR_7->opts->format);
    }

    AVCodecContext *VAR_15 = ((void*)0);
    if (!VAR_14)
        goto print_open_fail;
    VAR_15 = FUNC_6(VAR_14);
    if (!VAR_15)
        goto print_open_fail;

    VAR_15->time_base = VAR_5;
    VAR_15->width = VAR_8->w;
    VAR_15->height = VAR_8->h;
    VAR_15->color_range = FUNC_15(VAR_8->params.color.levels);
    VAR_15->pix_fmt = FUNC_14(VAR_8->imgfmt);
    if (VAR_14->id == VAR_0) {

        if (VAR_8->params.color.levels == VAR_6)
            VAR_15->pix_fmt = FUNC_19(VAR_15->pix_fmt);
    }
    if (VAR_15->pix_fmt == VAR_4) {
        FUNC_0(VAR_7, "Image format %s not supported by lavc.\n",
               FUNC_18(VAR_8->imgfmt));
        goto error_exit;
    }
    if (VAR_14->id == VAR_1) {
        VAR_15->compression_level = VAR_7->opts->png_compression;
        FUNC_4(VAR_15, "pred", VAR_7->opts->png_filter,
                       VAR_3);
    } else if (VAR_14->id == VAR_2) {
        VAR_15->compression_level = VAR_7->opts->webp_compression;
        FUNC_4(VAR_15, "lossless", VAR_7->opts->webp_lossless,
                       VAR_3);
        FUNC_4(VAR_15, "quality", VAR_7->opts->webp_quality,
                       VAR_3);
    }

    if (FUNC_10(VAR_15, VAR_14, ((void*)0)) < 0) {
     print_open_fail:
        FUNC_0(VAR_7, "Could not open libavcodec encoder for saving images\n");
        goto error_exit;
    }

    VAR_11 = FUNC_1();
    if (!VAR_11)
        goto error_exit;
    for (int VAR_16 = 0; VAR_16 < 4; VAR_16++) {
        VAR_11->data[VAR_16] = VAR_8->planes[VAR_16];
        VAR_11->linesize[VAR_16] = VAR_8->stride[VAR_16];
    }
    VAR_11->format = VAR_15->pix_fmt;
    VAR_11->width = VAR_15->width;
    VAR_11->height = VAR_15->height;
    VAR_11->color_range = VAR_15->color_range;
    if (VAR_7->opts->tag_csp) {
        VAR_11->color_primaries = FUNC_16(VAR_8->params.color.primaries);
        VAR_11->color_trc = FUNC_17(VAR_8->params.color.gamma);
    }

    int VAR_17 = FUNC_12(VAR_15, VAR_11);
    if (VAR_17 < 0)
        goto error_exit;
    VAR_17 = FUNC_12(VAR_15, ((void*)0));
    if (VAR_17 < 0)
        goto error_exit;
    VAR_17 = FUNC_11(VAR_15, &VAR_12);
    if (VAR_17 < 0)
        goto error_exit;
    VAR_13 = 1;

    FUNC_13(VAR_12.data, VAR_12.size, 1, VAR_9);

    VAR_10 = !!VAR_13;
error_exit:
    FUNC_9(&VAR_15);
    FUNC_2(&VAR_11);
    FUNC_5(&VAR_12);
    return VAR_10;
}
