
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int dropped_frames; scalar_t__ play_dir; void* attempt_framedrops; } ;
struct mp_frame {scalar_t__ type; int member_0; } ;
struct priv {int coverart_returned; int reverse_queue_complete; int num_reverse_queue; int preroll_discard; scalar_t__ codec; TYPE_4__* f; int packet; scalar_t__ reverse_queue_byte_size; int end; int start; TYPE_6__ public; struct demux_packet* new_segment; scalar_t__ packets_without_output; struct mp_frame decoded_coverart; TYPE_3__* header; TYPE_2__* decoder; struct mp_frame* reverse_queue; } ;
struct mp_pin {int dummy; } ;
struct demux_packet {scalar_t__ codec; int end; int start; scalar_t__ segmented; } ;
struct TYPE_10__ {struct mp_pin** ppins; } ;
struct TYPE_9__ {scalar_t__ attached_picture; } ;
struct TYPE_8__ {TYPE_1__* f; } ;
struct TYPE_7__ {int * pins; } ;


 int FUNC_0 (int ,struct demux_packet*) ;
 void* FUNC_1 (int ,scalar_t__) ;
 struct mp_frame VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 struct mp_frame VAR_5 ;
 int FUNC_2 (struct priv*,struct mp_frame) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*) ;
 double FUNC_6 (struct mp_frame) ;
 struct mp_frame FUNC_7 (struct mp_frame) ;
 int FUNC_8 (struct mp_frame*) ;
 int FUNC_9 (struct mp_pin*) ;
 int FUNC_10 (struct mp_pin*,struct mp_frame) ;
 struct mp_frame FUNC_11 (int ) ;
 int FUNC_12 (struct priv*,struct mp_frame*) ;
 int FUNC_13 (struct priv*,struct mp_frame) ;
 int FUNC_14 (struct priv*) ;

__attribute__((used)) static void FUNC_15(struct priv *VAR_6)
{
    struct mp_pin *VAR_7 = VAR_6->f->ppins[0];
    struct mp_frame VAR_8 = {0};

    if (!VAR_6->decoder || !FUNC_9(VAR_7))
        return;

    if (VAR_6->decoded_coverart.type) {
        if (VAR_6->coverart_returned == 0) {
            FUNC_10(VAR_7, FUNC_7(VAR_6->decoded_coverart));
            VAR_6->coverart_returned = 1;
        } else if (VAR_6->coverart_returned == 1) {
            FUNC_10(VAR_7, VAR_0);
            VAR_6->coverart_returned = 2;
        }
        return;
    }

    if (VAR_6->reverse_queue_complete && VAR_6->num_reverse_queue) {
        VAR_8 = VAR_6->reverse_queue[VAR_6->num_reverse_queue - 1];
        VAR_6->num_reverse_queue -= 1;
        goto output_frame;
    }
    VAR_6->reverse_queue_complete = 0;

    VAR_8 = FUNC_11(VAR_6->decoder->f->pins[1]);
    if (!VAR_8.type)
        return;

    if (VAR_6->header->attached_picture && VAR_8.type == VAR_3) {
        VAR_6->decoded_coverart = VAR_8;
        FUNC_5(VAR_6->f);
        return;
    }

    if (VAR_6->public.attempt_framedrops) {
        int VAR_9 = FUNC_1(0, VAR_6->packets_without_output - 1);
        VAR_6->public.attempt_framedrops =
            FUNC_1(0, VAR_6->public.attempt_framedrops - VAR_9);
        VAR_6->public.dropped_frames += VAR_9;
    }
    VAR_6->packets_without_output = 0;

    if (VAR_6->preroll_discard && VAR_8.type != VAR_1) {
        double VAR_10 = FUNC_6(VAR_8);
        if (VAR_10 == VAR_4) {
            FUNC_8(&VAR_8);
            FUNC_5(VAR_6->f);
            return;
        }
        VAR_6->preroll_discard = 0;
    }

    bool VAR_11 = FUNC_12(VAR_6, &VAR_8);

    if (VAR_6->public.play_dir < 0 && VAR_8.type) {
        FUNC_2(VAR_6, VAR_8);
        VAR_8 = VAR_5;
    }


    if (VAR_11 && VAR_6->new_segment) {
        struct demux_packet *VAR_12 = VAR_6->new_segment;
        VAR_6->new_segment = ((void*)0);

        FUNC_14(VAR_6);

        if (VAR_12->segmented) {
            if (VAR_6->codec != VAR_12->codec) {
                VAR_6->codec = VAR_12->codec;
                if (!FUNC_3(&VAR_6->public))
                    FUNC_4(VAR_6->f);
            }

            VAR_6->start = VAR_12->start;
            VAR_6->end = VAR_12->end;
        }

        VAR_6->reverse_queue_byte_size = 0;
        VAR_6->reverse_queue_complete = VAR_6->num_reverse_queue > 0;

        VAR_6->packet = FUNC_0(VAR_2, VAR_12);
        FUNC_5(VAR_6->f);
    }

    if (!VAR_8.type) {
        FUNC_5(VAR_6->f);
        return;
    }

output_frame:
    FUNC_13(VAR_6, VAR_8);
    FUNC_10(VAR_7, VAR_8);
}
