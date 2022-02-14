
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {struct priv* priv; } ;
struct priv {int fb_queue_len; int swapchain_depth; TYPE_1__** fb_queue; scalar_t__ waiting_for_flip; int active; scalar_t__ still; scalar_t__ paused; } ;
struct TYPE_2__ {int fb; } ;


 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (struct vo*,TYPE_1__*) ;
 int FUNC_2 (struct vo*) ;
 int FUNC_3 (struct vo*) ;

__attribute__((used)) static void FUNC_4(struct vo *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    const bool VAR_2 = VAR_1->paused || VAR_1->still;

    if (!VAR_1->active)
        return;

    while (VAR_2 || VAR_1->fb_queue_len > VAR_1->swapchain_depth) {
        if (VAR_1->waiting_for_flip) {
            FUNC_3(VAR_0);
            FUNC_2(VAR_0);
        }
        if (VAR_1->fb_queue_len <= 1)
            break;
        if (!VAR_1->fb_queue[1] || !VAR_1->fb_queue[1]->fb) {
            FUNC_0(VAR_0, "Hole in swapchain?\n");
            FUNC_2(VAR_0);
            continue;
        }
        FUNC_1(VAR_0, VAR_1->fb_queue[1]);
    }
}
