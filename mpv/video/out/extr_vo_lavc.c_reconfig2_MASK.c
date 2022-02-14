
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int shutdown; TYPE_5__* enc; } ;
struct TYPE_10__ {int levels; int space; } ;
struct mp_image_params {int w; int h; TYPE_1__ color; int imgfmt; int p_h; int p_w; } ;
struct mp_image {struct mp_image_params params; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_14__ {TYPE_4__* encoder; } ;
struct TYPE_12__ {int num; int den; int member_1; int member_0; } ;
struct TYPE_13__ {int width; int height; int pix_fmt; int time_base; TYPE_2__* codec; int color_range; int colorspace; TYPE_3__ sample_aspect_ratio; } ;
struct TYPE_11__ {TYPE_3__* supported_framerates; } ;
typedef TYPE_3__ AVRational ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,char*,int ) ;
 size_t FUNC_2 (TYPE_3__,TYPE_3__ const*) ;
 int FUNC_3 (TYPE_3__) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,int ,struct vo*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_10(struct vo *VAR_2, struct mp_image *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    AVCodecContext *VAR_5 = VAR_4->enc->encoder;

    struct mp_image_params *VAR_6 = &VAR_3->params;
    enum AVPixelFormat VAR_7 = FUNC_6(VAR_6->imgfmt);
    AVRational VAR_8 = {VAR_6->p_w, VAR_6->p_h};
    int VAR_9 = VAR_6->w;
    int VAR_10 = VAR_6->h;

    if (VAR_4->shutdown)
        return -1;

    if (FUNC_4(VAR_5)) {
        if (VAR_9 == VAR_5->width && VAR_10 == VAR_5->height &&
            VAR_7 == VAR_5->pix_fmt)
        {

            FUNC_0(VAR_2, "Ignoring mid-stream parameter changes!\n");
            return 0;
        }


        FUNC_0(VAR_2, "resolution changes not supported.\n");
        goto error;
    }
    if (VAR_7 == VAR_0) {
        FUNC_1(VAR_2, "Format %s not supported by lavc.\n",
                 FUNC_9(VAR_6->imgfmt));
        goto error;
    }

    VAR_5->sample_aspect_ratio = VAR_8;
    VAR_5->width = VAR_9;
    VAR_5->height = VAR_10;
    VAR_5->pix_fmt = VAR_7;
    VAR_5->colorspace = FUNC_8(VAR_6->color.space);
    VAR_5->color_range = FUNC_7(VAR_6->color.levels);

    AVRational VAR_11;
    VAR_11.num = 24000;
    VAR_11.den = 1;

    const AVRational *VAR_12 = VAR_5->codec->supported_framerates;
    if (VAR_12 && VAR_12[0].den)
        VAR_11 = VAR_12[FUNC_2(VAR_11, VAR_12)];

    VAR_5->time_base = FUNC_3(VAR_11);

    if (!FUNC_5(VAR_4->enc, VAR_1, VAR_2))
        goto error;

    return 0;

error:
    VAR_4->shutdown = 1;
    return -1;
}
