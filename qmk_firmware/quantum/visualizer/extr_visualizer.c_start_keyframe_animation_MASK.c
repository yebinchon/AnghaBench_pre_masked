
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int current_frame; int need_update; scalar_t__ time_left_in_frame; } ;
typedef TYPE_1__ keyframe_animation_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;

void FUNC_0(keyframe_animation_t* VAR_2) {
    VAR_2->current_frame = -1;
    VAR_2->time_left_in_frame = 0;
    VAR_2->need_update = 1;
    int VAR_3 = -1;
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_1[VAR_4] == VAR_2) {
            return;
        }
        if (VAR_3 == -1 && VAR_1[VAR_4] == ((void*)0)) {
            VAR_3 = VAR_4;
        }
    }
    if (VAR_3 != -1) {
        VAR_1[VAR_3] = VAR_2;
    }
}
