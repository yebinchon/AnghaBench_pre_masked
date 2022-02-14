
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int visualizer_state_t ;
typedef int uint8_t ;
struct TYPE_3__ {float* frame_lengths; size_t current_frame; float time_left_in_frame; } ;
typedef TYPE_1__ keyframe_animation_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int,int ,int,scalar_t__,int ) ;
 int FUNC_2 (float,int,int) ;

bool FUNC_3(keyframe_animation_t* VAR_3, visualizer_state_t* VAR_4) {
    (void)VAR_4;
    float VAR_5 = VAR_3->frame_lengths[VAR_3->current_frame];
    float VAR_6 = VAR_5 - VAR_3->time_left_in_frame;
    float VAR_7 = VAR_6 / VAR_5;
    for (int VAR_8=0; VAR_8< VAR_1; VAR_8++) {
        uint8_t VAR_9 = FUNC_2(VAR_7*2, VAR_8, VAR_1);
        FUNC_1(VAR_0, VAR_8, 0, VAR_8, VAR_2 - 1, FUNC_0(VAR_9));
    }
    return 1;
}
