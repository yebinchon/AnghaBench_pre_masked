
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd_times {double start; double end; } ;
struct sd_ass_priv {scalar_t__ duration_unknown; TYPE_1__* ass_track; } ;
struct sd {struct sd_ass_priv* priv; } ;
struct TYPE_4__ {long long Start; long long Duration; } ;
struct TYPE_3__ {int n_events; TYPE_2__* events; } ;
typedef TYPE_1__ ASS_Track ;
typedef TYPE_2__ ASS_Event ;


 double VAR_0 ;
 long long VAR_1 ;
 long long FUNC_0 (struct sd*,double) ;

__attribute__((used)) static struct sd_times FUNC_1(struct sd *VAR_2, double VAR_3)
{
    struct sd_ass_priv *VAR_4 = VAR_2->priv;
    ASS_Track *VAR_5 = VAR_4->ass_track;
    struct sd_times VAR_6 = { .start = VAR_0, .end = VAR_0 };

    if (VAR_3 == VAR_0 || VAR_4->duration_unknown)
        return VAR_6;

    long long VAR_7 = FUNC_0(VAR_2, VAR_3);

    for (int VAR_8 = 0; VAR_8 < VAR_5->n_events; ++VAR_8) {
        ASS_Event *VAR_9 = VAR_5->events + VAR_8;
        if (VAR_7 >= VAR_9->Start && VAR_7 < VAR_9->Start + VAR_9->Duration) {
            double VAR_10 = VAR_9->Start / 1000.0;
            double VAR_11 = VAR_9->Duration == VAR_1 ?
                VAR_0 : (VAR_9->Start + VAR_9->Duration) / 1000.0;

            if (VAR_6.start == VAR_0 || VAR_6.start > VAR_10)
                VAR_6.start = VAR_10;

            if (VAR_6.end == VAR_0 || VAR_6.end < VAR_11)
                VAR_6.end = VAR_11;
        }
    }

    return VAR_6;
}
