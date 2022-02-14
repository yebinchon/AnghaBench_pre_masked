
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int need_update; int first_update_of_frame; int last_update_of_frame; scalar_t__ time_left_in_frame; int num_frames; int current_frame; } ;
typedef TYPE_1__ keyframe_animation_t ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;

void FUNC_0(keyframe_animation_t* VAR_2) {
    VAR_2->current_frame = VAR_2->num_frames;
    VAR_2->time_left_in_frame = 0;
    VAR_2->need_update = 1;
    VAR_2->first_update_of_frame = 0;
    VAR_2->last_update_of_frame = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (VAR_1[VAR_3] == VAR_2) {
            VAR_1[VAR_3] = ((void*)0);
            return;
        }
    }
}
