
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct priv {int sample_size; int pcmhack; int aframesize; int framecount; int shutdown; void* lastpts; void* savepts; TYPE_4__* enc; } ;
struct mp_chmap_sel {int member_0; } ;
struct TYPE_17__ {scalar_t__ num; } ;
struct ao {int samplerate; int untimed; int period_size; TYPE_10__* encode_lavc_ctx; TYPE_6__ channels; int format; int log; struct priv* priv; } ;
struct TYPE_16__ {TYPE_2__* encoder; } ;
struct TYPE_15__ {int supported_samplerates; } ;
struct TYPE_13__ {int num; int den; } ;
struct TYPE_14__ {int sample_rate; scalar_t__ channels; int bits_per_raw_sample; int frame_size; int codec_id; int sample_fmt; int channel_layout; TYPE_1__ time_base; TYPE_3__* codec; } ;
struct TYPE_12__ {int lock; } ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ AVCodec ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ao*,struct mp_chmap_sel*,TYPE_6__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (double) ;
 TYPE_4__* FUNC_7 (TYPE_10__*,int ,int ) ;
 int FUNC_8 (TYPE_4__*,int ,struct ao*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (struct mp_chmap_sel*) ;
 int FUNC_11 (TYPE_6__*) ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct ao*,TYPE_3__ const*) ;
 int FUNC_14 (struct priv*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_15(struct ao *VAR_5)
{
    struct priv *VAR_6 = VAR_5->priv;

    VAR_6->enc = FUNC_7(VAR_5->encode_lavc_ctx, VAR_3, VAR_5->log);
    if (!VAR_6->enc)
        return -1;
    FUNC_14(VAR_6, VAR_6->enc);

    AVCodecContext *VAR_7 = VAR_6->enc->encoder;
    const AVCodec *VAR_8 = VAR_7->codec;

    int VAR_9 = FUNC_2(VAR_5->samplerate,
                                               VAR_8->supported_samplerates);
    if (VAR_9 > 0)
        VAR_5->samplerate = VAR_9;

    VAR_7->time_base.num = 1;
    VAR_7->time_base.den = VAR_5->samplerate;

    VAR_7->sample_rate = VAR_5->samplerate;

    struct mp_chmap_sel VAR_10 = {0};
    FUNC_10(&VAR_10);
    if (!FUNC_4(VAR_5, &VAR_10, &VAR_5->channels, 0))
        goto fail;
    FUNC_9(&VAR_5->channels);
    VAR_7->channels = VAR_5->channels.num;
    VAR_7->channel_layout = FUNC_11(&VAR_5->channels);

    VAR_7->sample_fmt = VAR_2;

    FUNC_13(VAR_5, VAR_8);

    VAR_6->sample_size = FUNC_1(VAR_5->format);
    VAR_7->sample_fmt = FUNC_3(VAR_5->format);
    VAR_7->bits_per_raw_sample = VAR_6->sample_size * 8;

    if (!FUNC_8(VAR_6->enc, VAR_4, VAR_5))
        goto fail;

    VAR_6->pcmhack = 0;
    if (VAR_7->frame_size <= 1)
        VAR_6->pcmhack = FUNC_5(VAR_7->codec_id) / 8;

    if (VAR_6->pcmhack) {
        VAR_6->aframesize = 16384;
    } else {
        VAR_6->aframesize = VAR_7->frame_size;
    }


    VAR_6->framecount = FUNC_6(VAR_5->samplerate * 0.25 / VAR_6->aframesize);

    VAR_6->framecount = FUNC_0(VAR_6->framecount, 1);

    VAR_6->savepts = VAR_0;
    VAR_6->lastpts = VAR_0;

    VAR_5->untimed = 1;

    VAR_5->period_size = VAR_6->aframesize * VAR_6->framecount;

    if (VAR_5->channels.num > VAR_1)
        goto fail;

    return 0;

fail:
    FUNC_12(&VAR_5->encode_lavc_ctx->lock);
    VAR_6->shutdown = 1;
    return -1;
}
