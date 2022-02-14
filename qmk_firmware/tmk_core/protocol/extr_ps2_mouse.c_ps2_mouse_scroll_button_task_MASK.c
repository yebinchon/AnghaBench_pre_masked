
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int buttons; int x; int y; int v; int h; } ;
typedef TYPE_1__ report_mouse_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static inline void FUNC_4(report_mouse_t *VAR_6) {
    static enum {
        SCROLL_NONE,
        SCROLL_BTN,
        SCROLL_SENT,
    } VAR_7 = SCROLL_NONE;
    static uint16_t VAR_8 = 0;

    if (VAR_1 == (VAR_6->buttons & (VAR_1))) {


        if (VAR_7 == SCROLL_NONE) {
            VAR_8 = FUNC_3();
            VAR_7 = SCROLL_BTN;
        }


        if (VAR_6->x || VAR_6->y) {
            VAR_7 = SCROLL_SENT;
            VAR_6->v = -VAR_6->y / (VAR_4);
            VAR_6->h = VAR_6->x / (VAR_3);
            VAR_6->x = 0;
            VAR_6->y = 0;






        }
    } else if (0 == (VAR_1 & VAR_6->buttons)) {
        VAR_7 = SCROLL_NONE;
    }

    VAR_5;
}
