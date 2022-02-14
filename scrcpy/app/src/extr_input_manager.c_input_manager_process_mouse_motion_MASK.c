
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct input_manager {int controller; TYPE_1__* screen; } ;
struct control_msg {int dummy; } ;
struct TYPE_6__ {int state; } ;
struct TYPE_5__ {int frame_size; } ;
typedef TYPE_2__ SDL_MouseMotionEvent ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct control_msg*) ;
 scalar_t__ FUNC_2 (TYPE_2__ const*,int ,struct control_msg*) ;

void
FUNC_3(struct input_manager *VAR_0,
                                   const SDL_MouseMotionEvent *VAR_1) {
    if (!VAR_1->state) {

        return;
    }
    struct control_msg VAR_2;
    if (FUNC_2(VAR_1, VAR_0->screen->frame_size, &VAR_2)) {
        if (!FUNC_1(VAR_0->controller, &VAR_2)) {
            FUNC_0("Could not request 'inject mouse motion event'");
        }
    }
}
