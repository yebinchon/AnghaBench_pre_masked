
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct MPContext {int num_next_frames; double video_pts; double delay; scalar_t__ video_status; double time_frame; double video_speed; TYPE_3__* demuxer; TYPE_2__* vo_chain; TYPE_1__** next_frames; } ;
struct TYPE_6__ {scalar_t__ ts_resets_possible; } ;
struct TYPE_5__ {int is_sparse; } ;
struct TYPE_4__ {double pts; } ;


 double VAR_0 ;
 int FUNC_0 (struct MPContext*,char*,double) ;
 int FUNC_1 (struct MPContext*,char*,double,double) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct MPContext*,double,double) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct MPContext *VAR_2)
{
    FUNC_3(VAR_2->num_next_frames >= 1);

    double VAR_3 = 0;
    double VAR_4 = VAR_2->next_frames[0]->pts;
    bool VAR_5 = VAR_2->vo_chain && VAR_2->vo_chain->is_sparse;

    if (VAR_2->video_pts != VAR_0) {
        VAR_3 = VAR_4 - VAR_2->video_pts;
        double VAR_6 = VAR_2->demuxer->ts_resets_possible &&
                           !VAR_5 ? 5 : 1e4;
        if (VAR_3 <= 0 || VAR_3 >= VAR_6) {

            FUNC_1(VAR_2, "Invalid video timestamp: %f -> %f\n",
                    VAR_2->video_pts, VAR_4);
            VAR_3 = 0;
        }
    }
    VAR_2->delay -= VAR_3;
    if (VAR_2->video_status >= VAR_1) {
        VAR_2->time_frame += VAR_3 / VAR_2->video_speed;
        FUNC_2(VAR_2, VAR_4, VAR_3);
    }
    FUNC_0(VAR_2, "frametime=%5.3f\n", VAR_3);
}
