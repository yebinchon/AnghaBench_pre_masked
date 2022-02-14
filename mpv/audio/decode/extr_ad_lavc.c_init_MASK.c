
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct priv {int next_pts; int codec_timebase; int avframe; TYPE_2__* avctx; int force_channel_map; } ;
struct mp_filter {int log; int global; struct priv* priv; } ;
struct mp_codec_params {int channels; scalar_t__ force_channels; } ;
struct ad_lavc_params {int threads; int avopts; int ac3drc; scalar_t__ downmix; } ;
struct TYPE_14__ {int num_chmaps; int * chmaps; } ;
struct MPOpts {TYPE_1__ audio_output_channels; } ;
struct TYPE_16__ {int id; } ;
struct TYPE_15__ {int request_channel_layout; int pkt_timebase; int codec_id; int codec_type; } ;
typedef TYPE_2__ AVCodecContext ;
typedef TYPE_3__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (struct mp_filter*,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,char*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ) ;
 TYPE_2__* FUNC_4 (TYPE_3__*) ;
 TYPE_3__* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_3__*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mp_codec_params*) ;
 void* FUNC_9 (struct priv*,int ,int *) ;
 int FUNC_10 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_11 (TYPE_2__*,struct mp_codec_params*) ;
 int FUNC_12 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static bool FUNC_13(struct mp_filter *VAR_5, struct mp_codec_params *VAR_6,
                 const char *VAR_7)
{
    struct priv *VAR_8 = VAR_5->priv;
    struct MPOpts *VAR_9 = FUNC_9(VAR_8, VAR_5->global, VAR_2);
    struct ad_lavc_params *VAR_10 =
        FUNC_9(VAR_8, VAR_5->global, &VAR_4);
    AVCodecContext *VAR_11;
    AVCodec *VAR_12;

    VAR_8->codec_timebase = FUNC_8(VAR_6);

    if (VAR_6->force_channels)
        VAR_8->force_channel_map = VAR_6->channels;

    VAR_12 = FUNC_5(VAR_7);
    if (!VAR_12) {
        FUNC_0(VAR_5, "Cannot find codec '%s' in libavcodec...\n", VAR_7);
        return 0;
    }

    VAR_11 = FUNC_4(VAR_12);
    VAR_8->avctx = VAR_11;
    VAR_8->avframe = FUNC_1();
    VAR_11->codec_type = VAR_0;
    VAR_11->codec_id = VAR_12->id;





    if (VAR_10->downmix && VAR_9->audio_output_channels.num_chmaps == 1) {
        VAR_11->request_channel_layout =
            FUNC_7(&VAR_9->audio_output_channels.chmaps[0]);
    }


    FUNC_3(VAR_11, "drc_scale", VAR_10->ac3drc,
                      VAR_1);






    FUNC_12(VAR_5->log, VAR_11, VAR_10->avopts);

    if (FUNC_11(VAR_11, VAR_6) < 0) {
        FUNC_0(VAR_5, "Could not set decoder parameters.\n");
        return 0;
    }

    FUNC_10(VAR_5->log, VAR_11, VAR_10->threads);


    if (FUNC_6(VAR_11, VAR_12, ((void*)0)) < 0) {
        FUNC_0(VAR_5, "Could not open codec.\n");
        return 0;
    }

    VAR_8->next_pts = VAR_3;

    return 1;
}
