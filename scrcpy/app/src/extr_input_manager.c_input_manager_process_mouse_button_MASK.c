
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct input_manager {int controller; TYPE_2__* screen; } ;
struct control_msg {int dummy; } ;
struct TYPE_6__ {int frame_size; } ;
struct TYPE_5__ {scalar_t__ type; scalar_t__ button; int clicks; int y; int x; } ;
typedef TYPE_1__ SDL_MouseButtonEvent ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,struct control_msg*) ;
 scalar_t__ FUNC_3 (TYPE_1__ const*,int ,struct control_msg*) ;
 int FUNC_4 (struct input_manager*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;

void
FUNC_7(struct input_manager *VAR_6,
                                   const SDL_MouseButtonEvent *VAR_7,
                                   bool VAR_8) {
    if (VAR_7->type == VAR_5) {
        if (VAR_8 && VAR_7->button == VAR_4) {
            FUNC_5(VAR_6->controller);
            return;
        }
        if (VAR_8 && VAR_7->button == VAR_3) {
            FUNC_1(VAR_6->controller, VAR_0 | VAR_1);
            return;
        }

        if (VAR_7->button == VAR_2 && VAR_7->clicks == 2) {
            bool VAR_9 =
                FUNC_4(VAR_6, VAR_7->x, VAR_7->y);
            if (VAR_9) {
                FUNC_6(VAR_6->screen);
                return;
            }
        }

    }

    if (!VAR_8) {
        return;
    }

    struct control_msg VAR_10;
    if (FUNC_3(VAR_7, VAR_6->screen->frame_size, &VAR_10)) {
        if (!FUNC_2(VAR_6->controller, &VAR_10)) {
            FUNC_0("Could not request 'inject mouse button event'");
        }
    }
}
