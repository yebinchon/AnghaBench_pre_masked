
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_buffer {int rendering_frame_consumed; int const* rendering_frame; int rendering_frame_consumed_cond; scalar_t__ render_expired_frames; int fps_counter; } ;
typedef int AVFrame ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

const AVFrame *
FUNC_3(struct video_buffer *VAR_0) {
    FUNC_0(!VAR_0->rendering_frame_consumed);
    VAR_0->rendering_frame_consumed = 1;
    FUNC_2(VAR_0->fps_counter);
    if (VAR_0->render_expired_frames) {

        FUNC_1(VAR_0->rendering_frame_consumed_cond);
    }
    return VAR_0->rendering_frame;
}
