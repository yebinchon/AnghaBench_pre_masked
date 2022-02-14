
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct wp_presentation_feedback {int dummy; } ;
struct vo_wayland_state {TYPE_1__* sync; int user_sbc; } ;
typedef long long int64_t ;
struct TYPE_2__ {long long ust; int msc; int refresh_usec; int filled; int sbc; } ;


 int FUNC_0 (struct vo_wayland_state*) ;
 int FUNC_1 (struct vo_wayland_state*) ;
 int FUNC_2 (struct vo_wayland_state*) ;
 int FUNC_3 (struct wp_presentation_feedback*) ;

__attribute__((used)) static void FUNC_4(void *VAR_0, struct wp_presentation_feedback *VAR_1,
                              uint32_t VAR_2, uint32_t VAR_3,
                              uint32_t VAR_4, uint32_t VAR_5,
                              uint32_t VAR_6, uint32_t VAR_7,
                              uint32_t VAR_8)
{
    struct vo_wayland_state *VAR_9 = VAR_0;
    FUNC_3(VAR_1);
    FUNC_2(VAR_9);
    int VAR_10 = FUNC_0(VAR_9);
    if (VAR_10 < 0) {
        FUNC_1(VAR_9);
        VAR_10 = 0;
    }
    int64_t VAR_11 = (uint64_t) VAR_3 + ((uint64_t) VAR_2 << 32);
    VAR_9->sync[VAR_10].sbc = VAR_9->user_sbc;
    VAR_9->sync[VAR_10].ust = VAR_11 * 1000000LL + (uint64_t) VAR_4 / 1000;
    VAR_9->sync[VAR_10].msc = (uint64_t) VAR_7 + ((uint64_t) VAR_6 << 32);
    VAR_9->sync[VAR_10].refresh_usec = (uint64_t)VAR_5/1000;
    VAR_9->sync[VAR_10].filled = 1;
}
