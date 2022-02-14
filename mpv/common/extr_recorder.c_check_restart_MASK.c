
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_recorder_sink {double max_out_pts; int num_packets; TYPE_2__** packets; TYPE_1__* sh; int proper_eof; } ;
struct mp_recorder {int muxing; int num_streams; double rebase_ts; double base_ts; int muxing_from_start; struct mp_recorder_sink** streams; } ;
struct TYPE_4__ {int pts; } ;
struct TYPE_3__ {scalar_t__ type; } ;


 double VAR_0 ;
 double FUNC_0 (double,double) ;
 double FUNC_1 (double,int ) ;
 int FUNC_2 (struct mp_recorder*,char*,double) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct mp_recorder *VAR_4)
{
    if (VAR_4->muxing)
        return;

    double VAR_5 = VAR_0;
    double VAR_6 = 0;
    for (int VAR_7 = 0; VAR_7 < VAR_4->num_streams; VAR_7++) {
        struct mp_recorder_sink *VAR_8 = VAR_4->streams[VAR_7];
        int VAR_9 = VAR_8->sh->type == VAR_3 ? VAR_1 : 1;

        VAR_6 = FUNC_0(VAR_6, VAR_8->max_out_pts);

        if (VAR_8->num_packets < VAR_9) {
            if (!VAR_8->proper_eof && VAR_8->sh->type != VAR_2)
                return;
            continue;
        }

        for (int VAR_10 = 0; VAR_10 < VAR_9; VAR_10++)
            VAR_5 = FUNC_1(VAR_5, VAR_8->packets[VAR_10]->pts);
    }


    if (VAR_5 == VAR_0)
        return;

    VAR_4->rebase_ts = VAR_6;
    VAR_4->base_ts = VAR_5;

    for (int VAR_11 = 0; VAR_11 < VAR_4->num_streams; VAR_11++) {
        struct mp_recorder_sink *VAR_12 = VAR_4->streams[VAR_11];
        VAR_12->max_out_pts = VAR_5;
    }

    VAR_4->muxing = 1;

    if (!VAR_4->muxing_from_start)
        FUNC_2(VAR_4, "Discontinuity at timestamp %f.\n", VAR_4->rebase_ts);
}
