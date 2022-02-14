
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef long long uint64_t ;
struct vo_wayland_state {int sync_size; scalar_t__ last_ust; int last_msc; int last_sbc; int vsync_duration; long long last_sbc_mp_time; long long last_queue_display_time; TYPE_1__* sync; scalar_t__ last_skipped_vsyncs; } ;
struct timespec {long long tv_sec; int tv_nsec; } ;
typedef int int64_t ;
struct TYPE_2__ {scalar_t__ ust; scalar_t__ refresh_usec; int msc; int sbc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 long long FUNC_1 () ;

void FUNC_2(struct vo_wayland_state *VAR_1)
{
    int VAR_2 = VAR_1->sync_size - 1;

    VAR_1->last_skipped_vsyncs = 0;



    if (VAR_1->sync[VAR_2].ust == VAR_1->last_ust && VAR_1->last_ust) {
        VAR_1->sync[VAR_2].ust += VAR_1->sync[VAR_2].refresh_usec;
        VAR_1->sync[VAR_2].msc += 1;
        VAR_1->sync[VAR_2].sbc += 1;
    }

    int64_t VAR_3 = VAR_1->sync[VAR_2].ust ? VAR_1->sync[VAR_2].ust - VAR_1->last_ust: 0;
    VAR_1->last_ust = VAR_1->sync[VAR_2].ust;
    int64_t VAR_4 = VAR_1->sync[VAR_2].msc ? VAR_1->sync[VAR_2].msc - VAR_1->last_msc: 0;
    VAR_1->last_msc = VAR_1->sync[VAR_2].msc;
    int64_t VAR_5 = VAR_1->sync[VAR_2].sbc ? VAR_1->sync[VAR_2].sbc - VAR_1->last_sbc: 0;
    VAR_1->last_sbc = VAR_1->sync[VAR_2].sbc;

    if (VAR_4 && VAR_3)
        VAR_1->vsync_duration = VAR_3 / VAR_4;

    if (VAR_5) {
        struct timespec VAR_6;
        if (FUNC_0(VAR_0, &VAR_6)) {
            return;
        }

        uint64_t VAR_7 = VAR_6.tv_sec * 1000000LL + VAR_6.tv_nsec / 1000;
        uint64_t VAR_8 = FUNC_1() - (VAR_7 - VAR_1->sync[VAR_2].ust);
        VAR_1->last_sbc_mp_time = VAR_8;
    }

    if (!VAR_1->sync[VAR_2].sbc)
        return;

    VAR_1->last_queue_display_time = VAR_1->last_sbc_mp_time + VAR_5*VAR_1->vsync_duration;
}
