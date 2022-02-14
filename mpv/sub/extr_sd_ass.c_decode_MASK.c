
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sd_ass_priv {int duration_unknown; scalar_t__ converter; TYPE_3__* ass_track; } ;
struct sd {TYPE_2__* opts; struct sd_ass_priv* priv; } ;
struct demux_packet {scalar_t__ pos; int duration; char* buffer; int len; int pts; } ;
struct TYPE_7__ {int n_events; int event_format; TYPE_1__* events; } ;
struct TYPE_6__ {scalar_t__ sub_filter_SDH; int sub_clear_on_seek; } ;
struct TYPE_5__ {int Duration; int Start; } ;
typedef TYPE_3__ ASS_Track ;


 int FUNC_0 (struct sd*,char*) ;
 double VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,char*,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct sd*,scalar_t__) ;
 char* FUNC_3 (struct sd*,int ,int,char*,int) ;
 char** FUNC_4 (scalar_t__,struct demux_packet*,double*,double*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(struct sd *VAR_2, struct demux_packet *VAR_3)
{
    struct sd_ass_priv *VAR_4 = VAR_2->priv;
    ASS_Track *VAR_5 = VAR_4->ass_track;
    if (VAR_4->converter) {
        if (!VAR_2->opts->sub_clear_on_seek && VAR_3->pos >= 0 &&
            FUNC_2(VAR_2, VAR_3->pos))
            return;

        double VAR_6 = 0;
        double VAR_7 = 0;
        char **VAR_8 = FUNC_4(VAR_4->converter, VAR_3, &VAR_6,
                                    &VAR_7);
        if (VAR_3->duration < 0 || VAR_7 == VAR_0) {
            if (!VAR_4->duration_unknown) {
                FUNC_0(VAR_2, "Subtitle with unknown duration.\n");
                VAR_4->duration_unknown = 1;
            }
            VAR_7 = VAR_1;
        }

        for (int VAR_9 = 0; VAR_8 && VAR_8[VAR_9]; VAR_9++) {
            char *VAR_10 = VAR_8[VAR_9];
            if (VAR_2->opts->sub_filter_SDH)
                VAR_10 = FUNC_3(VAR_2, VAR_5->event_format, 0, VAR_10, 0);
            if (VAR_10)
                FUNC_1(VAR_5, VAR_10, FUNC_6(VAR_10),
                                  FUNC_5(VAR_6 * 1000),
                                  FUNC_5(VAR_7 * 1000));
            if (VAR_2->opts->sub_filter_SDH)
                FUNC_7(VAR_10);
        }
        if (VAR_4->duration_unknown) {
            for (int VAR_11 = 0; VAR_11 < VAR_5->n_events - 1; VAR_11++) {
                if (VAR_5->events[VAR_11].Duration == VAR_1 * 1000) {
                    VAR_5->events[VAR_11].Duration = VAR_5->events[VAR_11 + 1].Start -
                                                VAR_5->events[VAR_11].Start;
                }
            }
        }
    } else {


        char *VAR_12 = VAR_3->buffer;
        int VAR_13 = VAR_3->len;
        if (VAR_2->opts->sub_filter_SDH) {
            VAR_12 = FUNC_3(VAR_2, VAR_5->event_format, 1, VAR_12, VAR_13);
            VAR_13 = VAR_12 ? FUNC_6(VAR_12) : 0;
        }
        if (VAR_12)
            FUNC_1(VAR_5, VAR_12, VAR_13,
                              FUNC_5(VAR_3->pts * 1000),
                              FUNC_5(VAR_3->duration * 1000));
        if (VAR_2->opts->sub_filter_SDH)
            FUNC_7(VAR_12);
    }
}
