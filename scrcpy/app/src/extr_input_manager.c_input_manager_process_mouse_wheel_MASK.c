
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct position {int point; int screen_size; } ;
struct input_manager {int controller; TYPE_1__* screen; } ;
struct control_msg {int dummy; } ;
struct TYPE_2__ {int frame_size; } ;
typedef int SDL_MouseWheelEvent ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,struct control_msg*) ;
 scalar_t__ FUNC_2 (int const*,struct position,struct control_msg*) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(struct input_manager *VAR_0,
                                  const SDL_MouseWheelEvent *VAR_1) {
    struct position VAR_2 = {
        .screen_size = VAR_0->screen->frame_size,
        .point = FUNC_3(VAR_0->screen),
    };
    struct control_msg VAR_3;
    if (FUNC_2(VAR_1, VAR_2, &VAR_3)) {
        if (!FUNC_1(VAR_0->controller, &VAR_3)) {
            FUNC_0("Could not request 'inject mouse wheel event'");
        }
    }
}
