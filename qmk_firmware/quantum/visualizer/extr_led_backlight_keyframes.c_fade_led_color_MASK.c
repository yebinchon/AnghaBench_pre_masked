
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int* frame_lengths; size_t current_frame; int time_left_in_frame; } ;
typedef TYPE_1__ keyframe_animation_t ;



__attribute__((used)) static uint8_t FUNC_0(keyframe_animation_t* VAR_0, int VAR_1, int VAR_2) {
    int VAR_3 = VAR_0->frame_lengths[VAR_0->current_frame];
    int VAR_4 = VAR_3 - VAR_0->time_left_in_frame;
    int VAR_5 = VAR_2 - VAR_1;
    int VAR_6 = (VAR_5 * VAR_4) / VAR_3;
    VAR_6 += VAR_1;
    return VAR_6;
}
