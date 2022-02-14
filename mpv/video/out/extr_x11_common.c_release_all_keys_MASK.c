
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int win_drag_button1_down; int input_ctx; scalar_t__ no_autorepeat; } ;
struct vo {struct vo_x11_state* x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct vo *VAR_1)
{
    struct vo_x11_state *VAR_2 = VAR_1->x11;

    if (VAR_2->no_autorepeat)
        FUNC_0(VAR_2->input_ctx, VAR_0);
    VAR_2->win_drag_button1_down = 0;
}
