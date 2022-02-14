
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_reader_state {int underrun; int ts_duration; scalar_t__ eof; int idle; } ;
struct MPOpts {int cache_pause_wait; scalar_t__ cache_pause_initial; scalar_t__ cache_pause; } ;
struct MPContext {int demux_underrun; scalar_t__ play_dir; scalar_t__ video_status; scalar_t__ audio_status; int paused_for_cache; double cache_stop_time; double next_cache_update; int cache_buffer; TYPE_2__* vo_chain; TYPE_1__* ao_chain; scalar_t__ ao; scalar_t__ restart_complete; int demuxer; struct MPOpts* opts; } ;
struct TYPE_4__ {int underrun; } ;
struct TYPE_3__ {scalar_t__ underrun; } ;


 int FUNC_0 (int,int ,double) ;
 int VAR_0 ;
 int FUNC_1 (struct MPContext*,char*,int,int,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct MPContext*) ;
 int FUNC_4 (int ,struct demux_reader_state*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct MPContext*,int ,int *) ;
 int FUNC_7 (struct MPContext*,double) ;
 double FUNC_8 () ;
 int FUNC_9 (struct MPContext*) ;
 int FUNC_10 (struct MPContext*) ;

__attribute__((used)) static void FUNC_11(struct MPContext *VAR_2)
{
    bool VAR_3 = 0;
    struct MPOpts *VAR_4 = VAR_2->opts;

    if (!VAR_2->demuxer) {
        FUNC_3(VAR_2);
        return;
    }

    double VAR_5 = FUNC_8();

    struct demux_reader_state VAR_6;
    FUNC_4(VAR_2->demuxer, &VAR_6);

    VAR_2->demux_underrun |= VAR_6.underrun;

    int VAR_7 = 100;
    bool VAR_8 = FUNC_5(VAR_2->demuxer) &&
                                  VAR_4->cache_pause && VAR_2->play_dir > 0;

    if (!VAR_2->restart_complete) {



        VAR_8 &= VAR_4->cache_pause_initial &&
                                    (VAR_2->video_status == VAR_1 ||
                                     VAR_2->audio_status == VAR_1);
    }

    bool VAR_9 = VAR_8 && !VAR_6.idle &&
                  VAR_6.ts_duration < VAR_4->cache_pause_wait;



    bool VAR_10 = VAR_9;
    if (VAR_9 && !VAR_2->paused_for_cache && VAR_2->restart_complete) {


        bool VAR_11 = 0;

        if (VAR_2->ao_chain) {
            VAR_11 |=
                !(VAR_2->ao && FUNC_2(VAR_2->ao)) ||
                VAR_2->ao_chain->underrun;
        }
        if (VAR_2->vo_chain)
            VAR_11 |= VAR_2->vo_chain->underrun;





        VAR_10 = VAR_2->demux_underrun && VAR_11;
    }



    if (!VAR_9)
        VAR_2->demux_underrun = 0;

    if (VAR_2->paused_for_cache != VAR_10) {
        VAR_2->paused_for_cache = VAR_10;
        FUNC_10(VAR_2);
        VAR_3 = 1;
        if (VAR_2->paused_for_cache)
            VAR_2->cache_stop_time = VAR_5;
    }

    if (!VAR_2->paused_for_cache)
        FUNC_3(VAR_2);

    if (VAR_2->paused_for_cache) {
        VAR_7 =
            100 * FUNC_0(VAR_6.ts_duration / VAR_4->cache_pause_wait, 0, 0.99);
        FUNC_7(VAR_2, 0.2);
    }


    bool VAR_12 = !VAR_6.idle;
    if (VAR_12 || VAR_2->next_cache_update > 0) {
        if (VAR_2->next_cache_update <= VAR_5) {
            VAR_2->next_cache_update = VAR_12 ? VAR_5 + 0.25 : 0;
            VAR_3 = 1;
        }
        if (VAR_2->next_cache_update > 0)
            FUNC_7(VAR_2, VAR_2->next_cache_update - VAR_5);
    }

    if (VAR_2->cache_buffer != VAR_7) {
        if ((VAR_2->cache_buffer == 100) != (VAR_7 == 100)) {
            if (VAR_7 < 100) {
                FUNC_1(VAR_2, "Enter buffering (buffer went from %d%% -> %d%%) [%fs].\n",
                           VAR_2->cache_buffer, VAR_7, VAR_6.ts_duration);
            } else {
                double VAR_13 = VAR_5 - VAR_2->cache_stop_time;
                FUNC_1(VAR_2, "End buffering (waited %f secs) [%fs].\n",
                           VAR_13, VAR_6.ts_duration);
            }
        } else {
            FUNC_1(VAR_2, "Still buffering (buffer went from %d%% -> %d%%) [%fs].\n",
                       VAR_2->cache_buffer, VAR_7, VAR_6.ts_duration);
        }
        VAR_2->cache_buffer = VAR_7;
        VAR_3 = 1;
    }

    if (VAR_6.eof && !VAR_12)
        FUNC_9(VAR_2);

    if (VAR_3)
        FUNC_6(VAR_2, VAR_0, ((void*)0));
}
