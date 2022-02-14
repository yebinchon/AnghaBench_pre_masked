
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int num_sent_packets; int sent_packets; TYPE_1__* opts; scalar_t__ hw_probing; int codec_timebase; TYPE_3__* avctx; scalar_t__ hwdec_failed; struct demux_packet** requeue_packets; scalar_t__ num_requeue_packets; } ;
typedef TYPE_2__ vd_ffmpeg_ctx ;
struct mp_filter {TYPE_2__* priv; } ;
struct demux_packet {int dummy; } ;
struct TYPE_8__ {scalar_t__ skip_frame; } ;
struct TYPE_6__ {int software_fallback; } ;
typedef int AVPacket ;
typedef TYPE_3__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int,struct demux_packet*) ;
 int FUNC_2 (TYPE_3__*,int *) ;
 struct demux_packet* FUNC_3 (struct demux_packet*) ;
 int FUNC_4 (struct mp_filter*) ;
 int FUNC_5 (int *,struct demux_packet*,int *) ;
 int FUNC_6 (struct mp_filter*) ;

__attribute__((used)) static int FUNC_7(struct mp_filter *VAR_3, struct demux_packet *VAR_4)
{
    vd_ffmpeg_ctx *VAR_5 = VAR_3->priv;
    AVCodecContext *VAR_6 = VAR_5->avctx;

    if (VAR_5->num_requeue_packets && VAR_5->requeue_packets[0] != VAR_4)
        return FUNC_0(VAR_2);

    if (VAR_5->hwdec_failed)
        return FUNC_0(VAR_2);

    if (!VAR_5->avctx)
        return VAR_1;

    FUNC_6(VAR_3);

    if (VAR_6->skip_frame == VAR_0)
        return 0;

    AVPacket VAR_7;
    FUNC_5(&VAR_7, VAR_4, &VAR_5->codec_timebase);

    int VAR_8 = FUNC_2(VAR_6, VAR_4 ? &VAR_7 : ((void*)0));
    if (VAR_8 == FUNC_0(VAR_2) || VAR_8 == VAR_1)
        return VAR_8;

    if (VAR_5->hw_probing && VAR_5->num_sent_packets < 32 &&
        VAR_5->opts->software_fallback <= 32)
    {
        VAR_4 = VAR_4 ? FUNC_3(VAR_4) : ((void*)0);
        FUNC_1(VAR_5, VAR_5->sent_packets, VAR_5->num_sent_packets, VAR_4);
    }

    if (VAR_8 < 0)
        FUNC_4(VAR_3);
    return VAR_8;
}
