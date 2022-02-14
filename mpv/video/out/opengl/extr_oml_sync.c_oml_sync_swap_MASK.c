
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct timespec {long long tv_sec; int tv_nsec; } ;
struct oml_sync {int state_ok; scalar_t__ user_sbc; scalar_t__ last_ust; scalar_t__ last_msc; scalar_t__ last_sbc; scalar_t__ vsync_duration; scalar_t__ last_sbc_mp_time; scalar_t__ last_queue_display_time; scalar_t__ last_skipped_vsyncs; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct oml_sync*) ;

void FUNC_3(struct oml_sync *VAR_1, int64_t VAR_2, int64_t VAR_3, int64_t VAR_4)
{
    if (!VAR_1->state_ok)
        FUNC_2(VAR_1);

    VAR_1->last_skipped_vsyncs = 0;
    VAR_1->user_sbc += 1;

    if (VAR_4 < 0)
        return;

    VAR_1->state_ok = 1;

    int64_t VAR_5 = VAR_1->last_ust ? VAR_2 - VAR_1->last_ust : 0;
    VAR_1->last_ust = VAR_2;

    int64_t VAR_6 = VAR_1->last_msc ? VAR_3 - VAR_1->last_msc : 0;
    VAR_1->last_msc = VAR_3;

    int64_t VAR_7 = VAR_4 - VAR_1->last_sbc;
    VAR_1->last_sbc = VAR_4;


    if (VAR_6 && VAR_5)
        VAR_1->vsync_duration = VAR_5 / VAR_6;






    if (VAR_7) {
        struct timespec VAR_8;
        if (FUNC_0(VAR_0, &VAR_8))
            return;
        uint64_t VAR_9 = VAR_8.tv_sec * 1000000LL + VAR_8.tv_nsec / 1000;
        uint64_t VAR_10 = FUNC_1() - (VAR_9 - VAR_2);



        VAR_1->last_sbc_mp_time = VAR_10;
    }



    if (!VAR_4)
        return;






    VAR_1->last_queue_display_time =
        VAR_1->last_sbc_mp_time + (VAR_1->user_sbc - VAR_4) * VAR_1->vsync_duration;
}
