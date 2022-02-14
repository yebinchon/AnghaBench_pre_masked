
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct mp_aframe {int dummy; } ;
struct TYPE_8__ {scalar_t__ type; struct mp_aframe* data; } ;
struct lavfi_pad {int buffer_is_eof; int buffer; TYPE_2__ pending; int timebase; int name; } ;
struct lavfi {int draining_recover; int num_in_pads; int warned_nospeed; int in_samples; int in_pts; scalar_t__ emulate_audio_pts; struct lavfi_pad** in_pads; int initialized; } ;
struct TYPE_7__ {scalar_t__ nb_samples; int pts; } ;
typedef TYPE_1__ AVFrame ;


 int FUNC_0 (struct lavfi*,char*) ;
 int FUNC_1 (struct lavfi*,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct lavfi*,char*,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__**) ;
 int FUNC_7 (struct mp_aframe*) ;
 double FUNC_8 (struct mp_aframe*) ;
 TYPE_1__* FUNC_9 (TYPE_2__,int *) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct lavfi*,struct lavfi_pad*) ;
 int FUNC_12 (struct lavfi*) ;

__attribute__((used)) static bool FUNC_13(struct lavfi *VAR_2)
{
    bool VAR_3 = 0;
    bool VAR_4 = VAR_2->draining_recover;

    FUNC_3(VAR_2->initialized);

    for (int VAR_5 = 0; VAR_5 < VAR_2->num_in_pads; VAR_5++) {
        struct lavfi_pad *VAR_6 = VAR_2->in_pads[VAR_5];

        bool VAR_7 = 1;






        VAR_7 |= VAR_6->buffer_is_eof;

        if (VAR_7)
            FUNC_11(VAR_2, VAR_6);

        if (!VAR_6->pending.type || VAR_2->draining_recover)
            continue;

        if (VAR_6->buffer_is_eof) {
            FUNC_2(VAR_2, "eof state changed on %s\n", VAR_6->name);
            VAR_2->draining_recover = 1;
            FUNC_12(VAR_2);
            continue;
        }

        if (VAR_6->pending.type == VAR_0 && !VAR_2->warned_nospeed) {
            struct mp_aframe *VAR_8 = VAR_6->pending.data;
            if (FUNC_8(VAR_8) != 1.0) {
                FUNC_0(VAR_2, "speed changing filters before libavfilter are not "
                       "supported and can cause desyncs\n");
                VAR_2->warned_nospeed = 1;
            }
        }

        AVFrame *VAR_9 = FUNC_9(VAR_6->pending, &VAR_6->timebase);
        bool VAR_10 = VAR_6->pending.type == VAR_1;

        if (VAR_2->emulate_audio_pts && VAR_6->pending.type == VAR_0) {
            struct mp_aframe *VAR_11 = VAR_6->pending.data;
            VAR_2->in_pts = FUNC_7(VAR_11);
            VAR_9->pts = VAR_2->in_samples;
            VAR_2->in_samples += VAR_9->nb_samples;
        }

        FUNC_10(&VAR_6->pending);

        if (!VAR_9 && !VAR_10) {
            FUNC_1(VAR_2, "out of memory or unsupported format\n");
            continue;
        }

        VAR_6->buffer_is_eof = !VAR_9;

        if (FUNC_4(VAR_6->buffer, VAR_9) < 0)
            FUNC_1(VAR_2, "could not pass frame to filter\n");
        FUNC_6(&VAR_9);

        VAR_3 = 1;
    }

    if (!VAR_4 && VAR_2->draining_recover)
        VAR_3 = 1;

    return VAR_3;
}
