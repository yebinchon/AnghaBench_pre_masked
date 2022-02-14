
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mp_chmap {int dummy; } ;
struct MPOpts {double audio_delay; int initial_audio_sync; } ;
struct MPContext {scalar_t__ audio_status; int audio_speed; scalar_t__ video_status; double video_pts; double hrseek_pts; double playback_pts; scalar_t__ hrseek_active; TYPE_2__* vo_chain; TYPE_1__* ao_chain; int ao; struct MPOpts* opts; } ;
struct TYPE_4__ {int is_coverart; } ;
struct TYPE_3__ {int ao_buffer; } ;


 double FUNC_0 (double,int,int) ;
 double VAR_0 ;
 int FUNC_1 (struct MPContext*,char*) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int*,int*,struct mp_chmap*) ;
 int FUNC_4 (int ) ;
 double FUNC_5 (struct MPContext*) ;

__attribute__((used)) static bool FUNC_6(struct MPContext *VAR_5, int *VAR_6)
{
    struct MPOpts *VAR_7 = VAR_5->opts;
    *VAR_6 = 0;

    if (VAR_5->audio_status != VAR_4)
        return 1;

    int VAR_8;
    int VAR_9;
    struct mp_chmap VAR_10;
    FUNC_3(VAR_5->ao, &VAR_8, &VAR_9, &VAR_10);

    double VAR_11 = VAR_8 / VAR_5->audio_speed;

    if (!VAR_7->initial_audio_sync) {
        VAR_5->audio_status = VAR_2;
        return 1;
    }

    double VAR_12 = FUNC_5(VAR_5);
    if (VAR_12 == VAR_0 &&
        !FUNC_4(VAR_5->ao_chain->ao_buffer))
        return 0;

    bool VAR_13 = VAR_5->vo_chain && !VAR_5->vo_chain->is_coverart &&
                         VAR_5->video_status != VAR_1;

    double VAR_14 = VAR_0;
    if (VAR_13) {
        if (VAR_5->video_status < VAR_3)
            return 0;
        if (VAR_5->video_pts != VAR_0)
            VAR_14 = VAR_5->video_pts - VAR_7->audio_delay;
    } else if (VAR_5->hrseek_active) {
        VAR_14 = VAR_5->hrseek_pts;
    } else {

        VAR_14 = VAR_5->playback_pts;
    }
    if (VAR_14 == VAR_0) {
        VAR_5->audio_status = VAR_2;
        return 1;
    }

    double VAR_15 = VAR_12 - VAR_14;


    if (VAR_12 == VAR_0) {
        FUNC_1(VAR_5, "Failed audio resync.\n");
        VAR_5->audio_status = VAR_2;
        return 1;
    }
    VAR_15 = FUNC_0(VAR_15, -3600, 3600);

    int VAR_16 = FUNC_2(VAR_9);
    *VAR_6 = (int)(-VAR_15 * VAR_11) / VAR_16 * VAR_16;
    return 1;
}
