
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int dummy; } ;
struct MPOpts {double cursor_autohide_delay; TYPE_1__* vo; scalar_t__ cursor_autohide_fs; } ;
struct MPContext {int mouse_cursor_visible; unsigned int mouse_event_ts; double mouse_timer; int input; struct vo* video_out; struct MPOpts* opts; } ;
struct TYPE_2__ {int fullscreen; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (struct MPContext*,double) ;
 double FUNC_2 () ;
 int FUNC_3 (struct vo*,int ,int*) ;

__attribute__((used)) static void FUNC_4(struct MPContext *VAR_1)
{
    struct MPOpts *VAR_2 = VAR_1->opts;
    struct vo *VAR_3 = VAR_1->video_out;

    if (!VAR_3)
        return;

    bool VAR_4 = VAR_1->mouse_cursor_visible;
    double VAR_5 = FUNC_2();

    unsigned VAR_6 = FUNC_0(VAR_1->input);
    if (VAR_1->mouse_event_ts != VAR_6) {
        VAR_1->mouse_event_ts = VAR_6;
        VAR_1->mouse_timer = VAR_5 + VAR_2->cursor_autohide_delay / 1000.0;
        VAR_4 = 1;
    }

    if (VAR_1->mouse_timer > VAR_5) {
        FUNC_1(VAR_1, VAR_1->mouse_timer - VAR_5);
    } else {
        VAR_4 = 0;
    }

    if (VAR_2->cursor_autohide_delay == -1)
        VAR_4 = 1;

    if (VAR_2->cursor_autohide_delay == -2)
        VAR_4 = 0;

    if (VAR_2->cursor_autohide_fs && !VAR_2->vo->fullscreen)
        VAR_4 = 1;

    if (VAR_4 != VAR_1->mouse_cursor_visible)
        FUNC_3(VAR_3, VAR_0, &VAR_4);
    VAR_1->mouse_cursor_visible = VAR_4;
}
