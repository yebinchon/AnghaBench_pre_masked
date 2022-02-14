
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_priv {struct mpv_render_context* ctx; } ;
struct vo_frame {int current; scalar_t__ redraw; } ;
struct vo {struct vo_priv* priv; } ;
struct mpv_render_context {int redrawing; int lock; scalar_t__ flip_count; scalar_t__ expected_flip_count; scalar_t__ next_frame; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mpv_render_context*) ;
 scalar_t__ FUNC_4 (struct vo_frame*) ;

__attribute__((used)) static void FUNC_5(struct vo *VAR_0, struct vo_frame *VAR_1)
{
    struct vo_priv *VAR_2 = VAR_0->priv;
    struct mpv_render_context *VAR_3 = VAR_2->ctx;

    FUNC_1(&VAR_3->lock);
    FUNC_0(!VAR_3->next_frame);
    VAR_3->next_frame = FUNC_4(VAR_1);
    VAR_3->expected_flip_count = VAR_3->flip_count + 1;
    VAR_3->redrawing = VAR_1->redraw || !VAR_1->current;
    FUNC_2(&VAR_3->lock);

    FUNC_3(VAR_3);
}
