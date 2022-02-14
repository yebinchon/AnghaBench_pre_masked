
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_vsync_info {int last_queue_display_time; int skipped_vsyncs; } ;
struct vo_internal {scalar_t__ flip_queue_offset; int dropped_frame; scalar_t__ prev_vsync; int hasframe_rendered; int expecting_vsync; int drop_count; int rendering; int request_redraw; struct vo_frame* frame_queued; int lock; int wakeup; struct vo_frame* current_frame; scalar_t__ paused; int hasframe; } ;
struct vo_frame {int num_vsyncs; scalar_t__ pts; int duration; int can_drop; int repeat; scalar_t__ display_synced; int current; scalar_t__ vsync_interval; int vsync_offset; } ;
struct vo {TYPE_1__* driver; struct vo_internal* in; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int caps; int (* get_vsync ) (struct vo*,struct vo_vsync_info*) ;int (* flip_page ) (struct vo*) ;int (* draw_image ) (struct vo*,int ) ;int (* draw_frame ) (struct vo*,struct vo_frame*) ;} ;


 int FUNC_0 (struct vo*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct vo_frame*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct vo*,struct vo_frame*) ;
 int FUNC_8 (struct vo*,int ) ;
 int FUNC_9 (struct vo*) ;
 int FUNC_10 (struct vo*,struct vo_vsync_info*) ;
 int FUNC_11 (struct vo_frame*) ;
 int FUNC_12 (struct vo*) ;
 int FUNC_13 (struct vo*,struct vo_vsync_info*) ;
 struct vo_frame* FUNC_14 (struct vo_frame*) ;
 int FUNC_15 (struct vo*,scalar_t__) ;
 int FUNC_16 (struct vo*) ;

__attribute__((used)) static bool FUNC_17(struct vo *VAR_2)
{
    struct vo_internal *VAR_3 = VAR_2->in;
    struct vo_frame *VAR_4 = ((void*)0);
    bool VAR_5 = 0;

    FUNC_12(VAR_2);

    FUNC_5(&VAR_3->lock);

    if (VAR_3->frame_queued) {
        FUNC_11(VAR_3->current_frame);
        VAR_3->current_frame = VAR_3->frame_queued;
        VAR_3->frame_queued = ((void*)0);
    } else if (VAR_3->paused || !VAR_3->current_frame || !VAR_3->hasframe ||
               (VAR_3->current_frame->display_synced && VAR_3->current_frame->num_vsyncs < 1) ||
               !VAR_3->current_frame->display_synced)
    {
        goto done;
    }

    VAR_4 = FUNC_14(VAR_3->current_frame);
    FUNC_1(VAR_4);

    if (VAR_4->display_synced) {
        VAR_4->pts = 0;
        VAR_4->duration = -1;
    }

    int64_t VAR_6 = FUNC_3();
    int64_t VAR_7 = VAR_4->pts;
    int64_t VAR_8 = VAR_4->duration;
    int64_t VAR_9 = VAR_7 + VAR_8;


    int64_t VAR_10 = VAR_4->display_synced ? 0 : VAR_7 - VAR_3->flip_queue_offset;


    VAR_3->dropped_frame = VAR_8 >= 0 && VAR_9 < VAR_6;

    VAR_3->dropped_frame &= !VAR_4->display_synced;
    VAR_3->dropped_frame &= !(VAR_2->driver->caps & VAR_0);
    VAR_3->dropped_frame &= VAR_4->can_drop;


    VAR_3->dropped_frame &= VAR_6 - VAR_3->prev_vsync < 100 * 1000;
    VAR_3->dropped_frame &= VAR_3->hasframe_rendered;



    VAR_3->current_frame->repeat = 1;
    if (VAR_4->display_synced) {
        VAR_3->current_frame->vsync_offset += VAR_3->current_frame->vsync_interval;
        VAR_3->dropped_frame |= VAR_3->current_frame->num_vsyncs < 1;
    }
    if (VAR_3->current_frame->num_vsyncs > 0)
        VAR_3->current_frame->num_vsyncs -= 1;

    bool VAR_11 = VAR_3->current_frame->display_synced && !VAR_3->paused;
    if (VAR_11 && !VAR_3->expecting_vsync)
        VAR_3->prev_vsync = VAR_6;
    VAR_3->expecting_vsync = VAR_11;

    if (VAR_3->dropped_frame) {
        VAR_3->drop_count += 1;
    } else {
        VAR_3->rendering = 1;
        VAR_3->hasframe_rendered = 1;
        int64_t VAR_12 = VAR_2->in->drop_count;
        FUNC_6(&VAR_3->lock);
        FUNC_16(VAR_2);

        FUNC_0(VAR_2, "start video-draw");

        if (VAR_2->driver->draw_frame) {
            VAR_2->driver->draw_frame(VAR_2, VAR_4);
        } else {
            VAR_2->driver->draw_image(VAR_2, FUNC_2(VAR_4->current));
        }

        FUNC_0(VAR_2, "end video-draw");

        FUNC_15(VAR_2, VAR_10);

        FUNC_0(VAR_2, "start video-flip");

        VAR_2->driver->flip_page(VAR_2);

        struct vo_vsync_info VAR_13 = {
            .last_queue_display_time = -1,
            .skipped_vsyncs = -1,
        };
        if (VAR_2->driver->get_vsync)
            VAR_2->driver->get_vsync(VAR_2, &VAR_13);


        if (VAR_13.last_queue_display_time < 0)
            VAR_13.last_queue_display_time = FUNC_3();

        FUNC_0(VAR_2, "end video-flip");

        FUNC_5(&VAR_3->lock);
        VAR_3->dropped_frame = VAR_12 < VAR_2->in->drop_count;
        VAR_3->rendering = 0;

        FUNC_13(VAR_2, &VAR_13);
    }

    if (VAR_2->driver->caps & VAR_1) {
        FUNC_11(VAR_3->current_frame);
        VAR_3->current_frame = ((void*)0);
    }

    if (VAR_3->dropped_frame) {
        FUNC_0(VAR_2, "drop-vo");
    } else {
        VAR_3->request_redraw = 0;
    }

    FUNC_4(&VAR_3->wakeup);
    FUNC_16(VAR_2);

    VAR_5 = 1;

done:
    FUNC_11(VAR_4);
    FUNC_6(&VAR_3->lock);
    return VAR_5 || (VAR_3->frame_queued && VAR_3->frame_queued->display_synced);
}
