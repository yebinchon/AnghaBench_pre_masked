
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct spdifContext {int out_buffer_len; int sstride; int out_buffer; int pool; int fmt; TYPE_4__* lavf_ctx; } ;
struct mp_frame {scalar_t__ type; struct demux_packet* data; } ;
struct mp_filter {int * ppins; struct spdifContext* priv; } ;
struct mp_aframe {int dummy; } ;
struct demux_packet {double pts; } ;
struct TYPE_7__ {int pb; } ;
struct TYPE_6__ {scalar_t__ dts; scalar_t__ pts; } ;
typedef TYPE_1__ AVPacket ;


 int FUNC_0 (int) ;
 struct mp_frame FUNC_1 (int ,struct mp_aframe*) ;
 int FUNC_2 (struct mp_filter*,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct mp_aframe**) ;
 int FUNC_4 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct mp_filter*,TYPE_1__*) ;
 int FUNC_7 (int *,int ,int) ;
 int ** FUNC_8 (struct mp_aframe*) ;
 struct mp_aframe* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,struct mp_aframe*,int) ;
 int FUNC_11 (struct mp_aframe*,double) ;
 int FUNC_12 (struct mp_filter*) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ,struct mp_frame) ;
 struct mp_frame FUNC_15 (int ) ;
 int FUNC_16 (TYPE_1__*,struct demux_packet*,int *) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct demux_packet*) ;

__attribute__((used)) static void FUNC_19(struct mp_filter *VAR_3)
{
    struct spdifContext *VAR_4 = VAR_3->priv;

    if (!FUNC_13(VAR_3->ppins[1], VAR_3->ppins[0]))
        return;

    struct mp_frame VAR_5 = FUNC_15(VAR_3->ppins[0]);
    if (VAR_5.type == VAR_1) {
        FUNC_14(VAR_3->ppins[1], VAR_5);
        return;
    } else if (VAR_5.type != VAR_2) {
        if (VAR_5.type) {
            FUNC_2(VAR_3, "unknown frame type\n");
            FUNC_12(VAR_3);
        }
        return;
    }

    struct demux_packet *VAR_6 = VAR_5.data;
    struct mp_aframe *VAR_7 = ((void*)0);
    double VAR_8 = VAR_6->pts;

    AVPacket VAR_9;
    FUNC_16(&VAR_9, VAR_6, ((void*)0));
    VAR_9.pts = VAR_9.dts = 0;
    if (!VAR_4->lavf_ctx) {
        if (FUNC_6(VAR_3, &VAR_9) < 0)
            goto done;
    }
    VAR_4->out_buffer_len = 0;
    int VAR_10 = FUNC_4(VAR_4->lavf_ctx, &VAR_9);
    FUNC_5(VAR_4->lavf_ctx->pb);
    if (VAR_10 < 0) {
        FUNC_2(VAR_3, "spdif mux error: '%s'\n", FUNC_17(FUNC_0(VAR_10)));
        goto done;
    }

    VAR_7 = FUNC_9(VAR_4->fmt);
    int VAR_11 = VAR_4->out_buffer_len / VAR_4->sstride;
    if (FUNC_10(VAR_4->pool, VAR_7, VAR_11) < 0) {
        FUNC_3(&VAR_7);
        goto done;
    }

    uint8_t **VAR_12 = FUNC_8(VAR_7);
    if (!VAR_12) {
        FUNC_3(&VAR_7);
        goto done;
    }

    FUNC_7(VAR_12[0], VAR_4->out_buffer, VAR_4->out_buffer_len);
    FUNC_11(VAR_7, VAR_8);

done:
    FUNC_18(VAR_6);
    if (VAR_7) {
        FUNC_14(VAR_3->ppins[1], FUNC_1(VAR_0, VAR_7));
    } else {
        FUNC_12(VAR_3);
    }
}
