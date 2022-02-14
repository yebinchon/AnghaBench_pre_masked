
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct mp_frame {scalar_t__ type; int data; } ;
struct mp_chmap {int dummy; } ;
struct mp_audio_buffer {int dummy; } ;
struct ao_chain {int out_eof; int output_frame; int last_out_pts; TYPE_3__* filter; int ao; struct mp_audio_buffer* ao_buffer; } ;
struct MPContext {int audio_speed; TYPE_1__* opts; } ;
struct TYPE_6__ {TYPE_2__* f; } ;
struct TYPE_5__ {int * pins; } ;
struct TYPE_4__ {double audio_delay; } ;


 int VAR_0 ;
 int FUNC_0 (double,int ,int) ;
 int FUNC_1 (struct MPContext*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 double VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*,int*,struct mp_chmap*) ;
 int FUNC_4 (int ) ;
 int ** FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct mp_audio_buffer*,void**,int) ;
 int FUNC_9 (struct mp_audio_buffer*) ;
 int FUNC_10 (struct mp_frame*) ;
 struct mp_frame FUNC_11 (int ) ;
 double FUNC_12 (struct MPContext*) ;

__attribute__((used)) static bool FUNC_13(struct MPContext *VAR_4, struct ao_chain *VAR_5,
                        int VAR_6, double VAR_7, bool *VAR_8)
{
    struct mp_audio_buffer *VAR_9 = VAR_5->ao_buffer;

    int VAR_10;
    int VAR_11;
    struct mp_chmap VAR_12;
    FUNC_3(VAR_5->ao, &VAR_10, &VAR_11, &VAR_12);

    while (FUNC_9(VAR_9) < VAR_6) {
        int VAR_13 = FUNC_9(VAR_9);
        int VAR_14 = VAR_0;
        if (VAR_7 != VAR_3) {
            double VAR_15 = VAR_10 / VAR_4->audio_speed;
            double VAR_16 = FUNC_12(VAR_4);
            if (VAR_16 != VAR_3) {
                double VAR_17 =
                    (VAR_7 - VAR_16 - VAR_4->opts->audio_delay) * VAR_15;
                VAR_14 = FUNC_0(VAR_17, 0, VAR_0);
            }
        }

        if (!VAR_5->output_frame || !FUNC_6(VAR_5->output_frame)) {
            FUNC_2(&VAR_5->output_frame);

            struct mp_frame VAR_18 = FUNC_11(VAR_5->filter->f->pins[1]);
            if (VAR_18.type == VAR_1) {
                VAR_5->output_frame = VAR_18.data;
                VAR_5->out_eof = 0;
                VAR_5->last_out_pts = FUNC_4(VAR_5->output_frame);
            } else if (VAR_18.type == VAR_2) {
                VAR_5->out_eof = 1;
            } else if (VAR_18.type) {
                FUNC_1(VAR_4, "unknown frame type\n");
                FUNC_10(&VAR_18);
            }
        }


        if (!VAR_5->output_frame) {
            if (VAR_5->out_eof) {
                *VAR_8 = 1;
                return 1;
            }
            return 0;
        }

        if (VAR_13 + FUNC_6(VAR_5->output_frame) > VAR_14) {
            if (VAR_13 < VAR_14) {
                uint8_t **VAR_19 = FUNC_5(VAR_5->output_frame);
                FUNC_8(VAR_9, (void **)VAR_19,
                                       VAR_14 - VAR_13);
                FUNC_7(VAR_5->output_frame,
                                       VAR_14 - VAR_13);
            }
            *VAR_8 = 1;
            return 1;
        }

        uint8_t **VAR_20 = FUNC_5(VAR_5->output_frame);
        FUNC_8(VAR_9, (void **)VAR_20,
                               FUNC_6(VAR_5->output_frame));
        FUNC_2(&VAR_5->output_frame);
    }
    return 1;
}
