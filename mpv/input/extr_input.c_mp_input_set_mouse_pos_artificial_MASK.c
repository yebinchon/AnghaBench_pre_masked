
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_rect {int x0; int x1; int y0; int y1; } ;
struct mp_cmd {int mouse_move; int mouse_x; int mouse_y; } ;
struct input_ctx {int mouse_vo_x; int mouse_vo_y; int cmd_queue; int mouse_event_counter; scalar_t__ mouse_src_mangle; struct mp_rect mouse_dst; struct mp_rect mouse_src; scalar_t__ mouse_mangle; } ;


 int FUNC_0 (int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct input_ctx*,char*,int,int) ;
 int FUNC_2 (char*) ;
 struct mp_cmd* FUNC_3 (struct input_ctx*,int *,int ) ;
 int FUNC_4 (struct input_ctx*) ;
 int FUNC_5 (struct input_ctx*) ;
 struct mp_cmd* FUNC_6 (struct input_ctx*,int ,char*) ;
 int FUNC_7 (struct input_ctx*,struct mp_cmd*) ;
 struct mp_cmd* FUNC_8 (int *) ;
 int FUNC_9 (int *,struct mp_cmd*) ;
 scalar_t__ FUNC_10 (struct input_ctx*,struct mp_cmd*) ;
 int FUNC_11 (struct mp_cmd*) ;
 int FUNC_12 (struct input_ctx*) ;

void FUNC_13(struct input_ctx *VAR_1, int VAR_2, int VAR_3)
{
    FUNC_4(VAR_1);
    FUNC_1(VAR_1, "mouse move %d/%d\n", VAR_2, VAR_3);

    if (VAR_1->mouse_vo_x == VAR_2 && VAR_1->mouse_vo_y == VAR_3) {
        FUNC_5(VAR_1);
        return;
    }

    if (VAR_1->mouse_mangle) {
        struct mp_rect *VAR_4 = &VAR_1->mouse_src;
        struct mp_rect *VAR_5 = &VAR_1->mouse_dst;
        VAR_2 = FUNC_0(VAR_2, VAR_5->x0, VAR_5->x1) - VAR_5->x0;
        VAR_3 = FUNC_0(VAR_3, VAR_5->y0, VAR_5->y1) - VAR_5->y0;
        if (VAR_1->mouse_src_mangle) {
            VAR_2 = VAR_2 * 1.0 / (VAR_5->x1 - VAR_5->x0) * (VAR_4->x1 - VAR_4->x0) + VAR_4->x0;
            VAR_3 = VAR_3 * 1.0 / (VAR_5->y1 - VAR_5->y0) * (VAR_4->y1 - VAR_4->y0) + VAR_4->y0;
        }
        FUNC_1(VAR_1, "-> %d/%d\n", VAR_2, VAR_3);
    }

    VAR_1->mouse_event_counter++;
    VAR_1->mouse_vo_x = VAR_2;
    VAR_1->mouse_vo_y = VAR_3;

    FUNC_12(VAR_1);
    struct mp_cmd *VAR_6 = FUNC_3(VAR_1, ((void*)0), VAR_0);
    if (!VAR_6)
        VAR_6 = FUNC_6(VAR_1, FUNC_2("ignore"), "<internal>");

    if (VAR_6) {
        VAR_6->mouse_move = 1;
        VAR_6->mouse_x = VAR_2;
        VAR_6->mouse_y = VAR_3;
        if (FUNC_10(VAR_1, VAR_6)) {
            FUNC_11(VAR_6);
        } else {

            struct mp_cmd *VAR_7 = FUNC_8(&VAR_1->cmd_queue);
            if (VAR_7 && VAR_7->mouse_move) {
                FUNC_9(&VAR_1->cmd_queue, VAR_7);
                FUNC_11(VAR_7);
            }
            FUNC_7(VAR_1, VAR_6);
        }
    }
    FUNC_5(VAR_1);
}
