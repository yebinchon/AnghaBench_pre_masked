
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_priv {struct mpv_render_context* ctx; } ;
struct vo {struct vo_priv* priv; } ;
struct timespec {int dummy; } ;
struct mpv_render_context {int present_count; scalar_t__ expected_flip_count; scalar_t__ flip_count; int lock; int video_wait; int * next_frame; int * cur_frame; scalar_t__ redrawing; } ;


 int FUNC_0 (struct vo*,char*) ;
 struct timespec FUNC_1 (double) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,struct timespec*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct vo*,int) ;

__attribute__((used)) static void FUNC_9(struct vo *VAR_0)
{
    struct vo_priv *VAR_1 = VAR_0->priv;
    struct mpv_render_context *VAR_2 = VAR_1->ctx;
    struct timespec VAR_3 = FUNC_1(0.2);

    FUNC_5(&VAR_2->lock);


    while (VAR_2->next_frame) {
        if (FUNC_4(&VAR_2->video_wait, &VAR_2->lock, &VAR_3)) {
            if (VAR_2->next_frame) {
                FUNC_0(VAR_0, "mpv_render_context_render() not being called "
                           "or stuck.\n");
                goto done;
            }
        }
    }


    VAR_2->present_count += 1;
    FUNC_2(&VAR_2->video_wait);

    if (VAR_2->redrawing)
        goto done;


    while (VAR_2->expected_flip_count > VAR_2->flip_count) {


        if (!VAR_2->flip_count)
            break;
        if (FUNC_4(&VAR_2->video_wait, &VAR_2->lock, &VAR_3)) {
            FUNC_0(VAR_0, "mpv_render_report_swap() not being called.\n");
            goto done;
        }
    }

done:


    if (VAR_2->next_frame) {
        FUNC_7(VAR_2->cur_frame);
        VAR_2->cur_frame = VAR_2->next_frame;
        VAR_2->next_frame = ((void*)0);
        VAR_2->present_count += 2;
        FUNC_3(&VAR_2->video_wait);
        FUNC_8(VAR_0, 1);
    }

    FUNC_6(&VAR_2->lock);
}
