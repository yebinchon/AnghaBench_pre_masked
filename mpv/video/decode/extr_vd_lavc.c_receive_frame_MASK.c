
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int method_name; scalar_t__ copying; } ;
struct TYPE_4__ {int num_sent_packets; int num_requeue_packets; scalar_t__ num_delay_queue; scalar_t__ max_delay_queue; int hwdec_notified; int hw_probing; struct demux_packet** sent_packets; TYPE_1__ hwdec; scalar_t__ use_hwdec; scalar_t__ hwdec_requested; scalar_t__ hwdec_fail_count; int hwdec_swpool; struct mp_image** delay_queue; struct demux_packet** requeue_packets; scalar_t__ hwdec_failed; } ;
typedef TYPE_2__ vd_ffmpeg_ctx ;
struct mp_image {scalar_t__ hwctx; } ;
struct mp_frame {int dummy; } ;
struct mp_filter {TYPE_2__* priv; } ;
struct demux_packet {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mp_frame FUNC_1 (int ,struct mp_image*) ;
 int FUNC_2 (struct mp_filter*,char*) ;
 int VAR_4 ;
 int FUNC_3 (struct mp_filter*,char*,int ) ;
 int FUNC_4 (struct mp_image**,scalar_t__,int ) ;
 int FUNC_5 (struct mp_filter*,char*) ;
 int FUNC_6 (struct mp_filter*) ;
 int FUNC_7 (struct mp_filter*) ;
 int FUNC_8 (struct mp_filter*) ;
 struct mp_image* FUNC_9 (struct mp_image*,int ) ;
 int FUNC_10 (struct mp_image**) ;
 struct mp_image* FUNC_11 (struct mp_image*) ;
 int FUNC_12 (struct demux_packet*) ;

__attribute__((used)) static int FUNC_13(struct mp_filter *VAR_5, struct mp_frame *VAR_6)
{
    vd_ffmpeg_ctx *VAR_7 = VAR_5->priv;

    int VAR_8 = FUNC_6(VAR_5);

    if (VAR_7->hwdec_failed) {

        struct demux_packet **VAR_9 = VAR_7->sent_packets;
        int VAR_10 = VAR_7->num_sent_packets;
        VAR_7->sent_packets = ((void*)0);
        VAR_7->num_sent_packets = 0;

        FUNC_7(VAR_5);

        VAR_7->requeue_packets = VAR_9;
        VAR_7->num_requeue_packets = VAR_10;

        return 0;
    }

    if (VAR_8 == FUNC_0(VAR_2) && VAR_7->num_requeue_packets)
        return 0;

    if (!VAR_7->num_delay_queue)
        return VAR_8;

    if (VAR_7->num_delay_queue <= VAR_7->max_delay_queue && VAR_8 != VAR_0)
        return FUNC_0(VAR_2);

    struct mp_image *VAR_11 = VAR_7->delay_queue[0];
    FUNC_4(VAR_7->delay_queue, VAR_7->num_delay_queue, 0);

    VAR_11 = VAR_11 ? FUNC_11(VAR_11) : ((void*)0);
    if (!VAR_11)
        return VAR_1;

    if (VAR_7->use_hwdec && VAR_7->hwdec.copying && VAR_11->hwctx) {
        struct mp_image *VAR_12 = FUNC_9(VAR_11, VAR_7->hwdec_swpool);
        FUNC_10(&VAR_11);
        VAR_11 = VAR_12;
        if (!VAR_11) {
            FUNC_2(VAR_5, "Could not copy back hardware decoded frame.\n");
            VAR_7->hwdec_fail_count = VAR_3 - 1;
            FUNC_8(VAR_5);
            return VAR_1;
        }
    }

    if (!VAR_7->hwdec_notified && VAR_7->hwdec_requested) {
        if (VAR_7->use_hwdec) {
            FUNC_3(VAR_5, "Using hardware decoding (%s).\n",
                    VAR_7->hwdec.method_name);
        } else {
            FUNC_5(VAR_5, "Using software decoding.\n");
        }
        VAR_7->hwdec_notified = 1;
    }

    if (VAR_7->hw_probing) {
        for (int VAR_13 = 0; VAR_13 < VAR_7->num_sent_packets; VAR_13++)
            FUNC_12(VAR_7->sent_packets[VAR_13]);
        VAR_7->num_sent_packets = 0;
        VAR_7->hw_probing = 0;
    }

    *VAR_6 = FUNC_1(VAR_4, VAR_11);
    return 0;
}
