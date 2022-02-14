
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_buffer {int rendering_frame_consumed; int mutex; int fps_counter; int rendering_frame_consumed_cond; int interrupted; scalar_t__ render_expired_frames; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct video_buffer*) ;

void
FUNC_5(struct video_buffer *VAR_0,
                                 bool *VAR_1) {
    FUNC_2(VAR_0->mutex);
    if (VAR_0->render_expired_frames) {

        while (!VAR_0->rendering_frame_consumed && !VAR_0->interrupted) {
            FUNC_0(VAR_0->rendering_frame_consumed_cond, VAR_0->mutex);
        }
    } else if (!VAR_0->rendering_frame_consumed) {
        FUNC_1(VAR_0->fps_counter);
    }

    FUNC_4(VAR_0);

    *VAR_1 = !VAR_0->rendering_frame_consumed;
    VAR_0->rendering_frame_consumed = 0;

    FUNC_3(VAR_0->mutex);
}
