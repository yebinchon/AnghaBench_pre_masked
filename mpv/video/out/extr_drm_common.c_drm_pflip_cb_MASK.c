
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint64_t ;
struct vo_vsync_info {unsigned int vsync_duration; unsigned int skipped_vsyncs; unsigned int last_queue_display_time; } ;
struct timespec {long long tv_sec; int tv_nsec; } ;
struct drm_vsync_tuple {unsigned int msc; scalar_t__ ust; unsigned int sbc; } ;
struct drm_pflip_cb_closure {int* waiting_for_flip; struct vo_vsync_info* vsync_info; struct drm_vsync_tuple* frame_vsync; struct drm_vsync_tuple* vsync; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 unsigned int const FUNC_1 () ;
 int FUNC_2 (struct drm_pflip_cb_closure*) ;

void FUNC_3(int VAR_1, unsigned int VAR_2, unsigned int VAR_3,
                  unsigned int VAR_4, void *VAR_5)
{
    struct drm_pflip_cb_closure *VAR_6 = VAR_5;

    struct drm_vsync_tuple *VAR_7 = VAR_6->vsync;



    struct drm_vsync_tuple *VAR_8 = VAR_6->frame_vsync;
    struct vo_vsync_info *VAR_9 = VAR_6->vsync_info;

    const bool VAR_10 =
        (VAR_7->msc != 0) &&
        (VAR_8->ust != 0) && (VAR_8->msc != 0);

    const uint64_t VAR_11 = (VAR_3 * 1000000LL) + VAR_4;

    const unsigned int VAR_12 = VAR_2 - VAR_7->msc;

    VAR_7->ust = VAR_11;
    VAR_7->msc = VAR_2;

    if (VAR_10) {

        struct timespec VAR_13;
        if (FUNC_0(VAR_0, &VAR_13))
            goto fail;
        const uint64_t VAR_14 = VAR_13.tv_sec * 1000000LL + VAR_13.tv_nsec / 1000;
        const uint64_t VAR_15 = FUNC_1() - (VAR_14 - VAR_7->ust);

        const uint64_t VAR_16 = VAR_7->ust - VAR_8->ust;
        const unsigned int VAR_17 = VAR_7->msc - VAR_8->msc;
        const unsigned int VAR_18 = VAR_7->sbc - VAR_8->sbc;

        VAR_9->vsync_duration = VAR_16 / VAR_17;
        VAR_9->skipped_vsyncs = VAR_12 - 1;
        VAR_9->last_queue_display_time = VAR_15 + (VAR_18 * VAR_9->vsync_duration);
    }

fail:
    *VAR_6->waiting_for_flip = 0;
    FUNC_2(VAR_6);
}
