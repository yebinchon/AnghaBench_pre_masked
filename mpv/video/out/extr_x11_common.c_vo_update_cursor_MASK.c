
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct vo_x11_state {int mouse_cursor_set; scalar_t__ parent; scalar_t__ rootwin; scalar_t__ window; int * display; int mouse_cursor_visible; scalar_t__ has_focus; } ;
struct vo {struct vo_x11_state* x11; } ;
struct TYPE_6__ {int pixel; } ;
typedef TYPE_1__ XColor ;
typedef scalar_t__ Window ;
typedef scalar_t__ Pixmap ;
typedef int Display ;
typedef int Cursor ;
typedef int Colormap ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,int ,char*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,char const*,int,int) ;
 int FUNC_4 (int *,scalar_t__,scalar_t__,TYPE_1__*,TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (int *,int ,int *,int,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct vo *VAR_1)
{
    Cursor VAR_2;
    Pixmap VAR_3;
    XColor VAR_4, VAR_5;
    Colormap VAR_6;
    const char VAR_7[] = {0, 0, 0, 0, 0, 0, 0, 0};
    struct vo_x11_state *VAR_8 = VAR_1->x11;
    Display *VAR_9 = VAR_8->display;
    Window VAR_10 = VAR_8->window;
    bool VAR_11 = VAR_8->has_focus && !VAR_8->mouse_cursor_visible;

    if (VAR_11 == VAR_8->mouse_cursor_set)
        return;

    VAR_8->mouse_cursor_set = VAR_11;

    if (VAR_8->parent == VAR_8->rootwin || !VAR_10)
        return;

    if (VAR_8->mouse_cursor_set) {
        VAR_6 = FUNC_0(VAR_9, FUNC_1(VAR_9));
        if (!FUNC_2(VAR_9, VAR_6, "black", &VAR_4, &VAR_5))
            return;
        VAR_3 = FUNC_3(VAR_9, VAR_10, VAR_7, 8, 8);
        VAR_2 = FUNC_4(VAR_9, VAR_3, VAR_3, &VAR_4, &VAR_4, 0, 0);
        FUNC_5(VAR_9, VAR_10, VAR_2);
        FUNC_7(VAR_9, VAR_2);
        if (VAR_3 != VAR_0)
            FUNC_8(VAR_9, VAR_3);
        FUNC_6(VAR_9, VAR_6, &VAR_4.pixel, 1, 0);
    } else {
        FUNC_5(VAR_8->display, VAR_8->window, 0);
    }
}
