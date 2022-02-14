
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int need_update; int first_update_of_frame; int last_update_of_frame; scalar_t__ time_left_in_frame; int num_frames; int current_frame; } ;


 int VAR_0 ;
 TYPE_1__** VAR_1 ;

void FUNC_0(void) {
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        if (VAR_1[VAR_2]) {
            VAR_1[VAR_2]->current_frame = VAR_1[VAR_2]->num_frames;
            VAR_1[VAR_2]->time_left_in_frame = 0;
            VAR_1[VAR_2]->need_update = 1;
            VAR_1[VAR_2]->first_update_of_frame = 0;
            VAR_1[VAR_2]->last_update_of_frame = 0;
            VAR_1[VAR_2] = ((void*)0);
        }
    }
}
