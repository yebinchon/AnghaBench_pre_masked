
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_buffer {int interrupted; int rendering_frame_consumed_cond; int mutex; scalar_t__ render_expired_frames; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct video_buffer *VAR_0) {
    if (VAR_0->render_expired_frames) {
        FUNC_1(VAR_0->mutex);
        VAR_0->interrupted = 1;
        FUNC_2(VAR_0->mutex);

        FUNC_0(VAR_0->rendering_frame_consumed_cond);
    }
}
