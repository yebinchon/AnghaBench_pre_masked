
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int num_delay_queue; int delay_queue; TYPE_2__* pic; int codec_timebase; scalar_t__ hwdec_fail_count; scalar_t__ num_requeue_packets; int * avctx; } ;
typedef TYPE_1__ vd_ffmpeg_ctx ;
struct mp_image {void* pkt_duration; void* dts; void* pts; scalar_t__* planes; } ;
struct mp_filter {TYPE_1__* priv; } ;
struct TYPE_7__ {int pkt_duration; int pkt_dts; int pts; int * buf; } ;
typedef int AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ,int ,struct mp_image*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (struct mp_filter*) ;
 struct mp_image* FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 (int ,int *) ;
 int FUNC_8 (struct mp_filter*) ;
 int FUNC_9 (struct mp_filter*) ;
 int FUNC_10 (struct mp_filter*) ;

__attribute__((used)) static int FUNC_11(struct mp_filter *VAR_2)
{
    vd_ffmpeg_ctx *VAR_3 = VAR_2->priv;
    AVCodecContext *VAR_4 = VAR_3->avctx;

    if (!VAR_4)
        return VAR_0;

    FUNC_8(VAR_2);


    if (VAR_3->num_requeue_packets)
        FUNC_10(VAR_2);

    int VAR_5 = FUNC_4(VAR_4, VAR_3->pic);
    if (VAR_5 == VAR_0) {




        if (!VAR_3->num_delay_queue)
            FUNC_9(VAR_2);
        return VAR_5;
    } else if (VAR_5 < 0 && VAR_5 != FUNC_0(VAR_1)) {
        FUNC_5(VAR_2);
    }

    if (!VAR_3->pic->buf[0])
        return VAR_5;

    VAR_3->hwdec_fail_count = 0;

    struct mp_image *VAR_6 = FUNC_6(VAR_3->pic);
    if (!VAR_6) {
        FUNC_3(VAR_3->pic);
        return VAR_5;
    }
    FUNC_2(VAR_6->planes[0] || VAR_6->planes[3]);
    VAR_6->pts = FUNC_7(VAR_3->pic->pts, &VAR_3->codec_timebase);
    VAR_6->dts = FUNC_7(VAR_3->pic->pkt_dts, &VAR_3->codec_timebase);






    FUNC_3(VAR_3->pic);

    FUNC_1(VAR_3, VAR_3->delay_queue, VAR_3->num_delay_queue, VAR_6);
    return VAR_5;
}
