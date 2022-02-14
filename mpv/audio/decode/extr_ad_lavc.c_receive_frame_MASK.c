
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_13__ {scalar_t__ num; } ;
struct priv {double next_pts; scalar_t__ skip_samples; scalar_t__ trim_samples; int preroll_done; TYPE_4__* avframe; TYPE_3__ force_channel_map; int codec_timebase; TYPE_2__* avctx; } ;
struct mp_frame {int dummy; } ;
struct mp_filter {struct priv* priv; } ;
struct mp_aframe {int dummy; } ;
struct TYPE_14__ {int flags; int pts; int * buf; } ;
struct TYPE_12__ {scalar_t__ delay; } ;
struct TYPE_11__ {int size; char* data; } ;
typedef TYPE_1__ AVFrameSideData ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;
 struct mp_frame FUNC_2 (int ,struct mp_aframe*) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct mp_filter*,char*) ;
 int VAR_4 ;
 double VAR_5 ;
 TYPE_1__* FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_4__*) ;
 double FUNC_9 (struct mp_aframe*) ;
 struct mp_aframe* FUNC_10 (TYPE_4__*) ;
 scalar_t__ FUNC_11 (struct mp_aframe*) ;
 int FUNC_12 (struct mp_aframe*,TYPE_3__*) ;
 int FUNC_13 (struct mp_aframe*,double) ;
 int FUNC_14 (struct mp_aframe*,scalar_t__) ;
 int FUNC_15 (struct mp_aframe*,scalar_t__) ;
 double FUNC_16 (int ,int *) ;
 int FUNC_17 (struct mp_aframe*) ;

__attribute__((used)) static int FUNC_18(struct mp_filter *VAR_6, struct mp_frame *VAR_7)
{
    struct priv *VAR_8 = VAR_6->priv;
    AVCodecContext *VAR_9 = VAR_8->avctx;

    int VAR_10 = FUNC_8(VAR_9, VAR_8->avframe);

    if (VAR_10 == VAR_0) {



        FUNC_7(VAR_8->avctx);
        return VAR_10;
    } else if (VAR_10 < 0 && VAR_10 != FUNC_0(VAR_3)) {
        FUNC_4(VAR_6, "Error decoding audio.\n");
    }






    if (!VAR_8->avframe->buf[0])
        return VAR_10;

    double VAR_11 = FUNC_16(VAR_8->avframe->pts, &VAR_8->codec_timebase);

    struct mp_aframe *VAR_12 = FUNC_10(VAR_8->avframe);
    if (!VAR_12) {
        FUNC_4(VAR_6, "Converting libavcodec frame to mpv frame failed.\n");
        return VAR_10;
    }

    if (VAR_8->force_channel_map.num)
        FUNC_12(VAR_12, &VAR_8->force_channel_map);

    if (VAR_11 == VAR_5)
        VAR_11 = VAR_8->next_pts;
    FUNC_13(VAR_12, VAR_11);

    VAR_8->next_pts = FUNC_9(VAR_12);
    if (!VAR_8->preroll_done) {

        if (!VAR_8->skip_samples)
            VAR_8->skip_samples = VAR_9->delay;
        VAR_8->preroll_done = 1;
    }

    uint32_t VAR_13 = FUNC_3(VAR_8->skip_samples, FUNC_11(VAR_12));
    if (VAR_13) {
        FUNC_15(VAR_12, VAR_13);
        VAR_8->skip_samples -= VAR_13;
    }
    uint32_t VAR_14 = FUNC_3(VAR_8->trim_samples, FUNC_11(VAR_12));
    if (VAR_14) {
        FUNC_14(VAR_12, FUNC_11(VAR_12) - VAR_14);
        VAR_8->trim_samples -= VAR_14;
    }

    if (FUNC_11(VAR_12) > 0) {
        *VAR_7 = FUNC_2(VAR_4, VAR_12);
    } else {
        FUNC_17(VAR_12);
    }

    FUNC_6(VAR_8->avframe);

    return VAR_10;
}
