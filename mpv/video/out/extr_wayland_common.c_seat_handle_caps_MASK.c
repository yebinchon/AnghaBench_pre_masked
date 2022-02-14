
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_seat {int dummy; } ;
struct vo_wayland_state {int * touch; int * keyboard; int * pointer; } ;
typedef enum wl_seat_capability { ____Placeholder_wl_seat_capability } wl_seat_capability ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,struct vo_wayland_state*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,struct vo_wayland_state*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (struct wl_seat*) ;
 int * FUNC_5 (struct wl_seat*) ;
 int * FUNC_6 (struct wl_seat*) ;
 int FUNC_7 (int *,int *,struct vo_wayland_state*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,struct vo_wayland_state*) ;

__attribute__((used)) static void FUNC_10(void *VAR_6, struct wl_seat *VAR_7,
                             enum wl_seat_capability VAR_8)
{
    struct vo_wayland_state *VAR_9 = VAR_6;

    if ((VAR_8 & VAR_1) && !VAR_9->pointer) {
        VAR_9->pointer = FUNC_5(VAR_7);
        FUNC_2(VAR_9->pointer, &VAR_4, VAR_9);
    } else if (!(VAR_8 & VAR_1) && VAR_9->pointer) {
        FUNC_3(VAR_9->pointer);
        VAR_9->pointer = ((void*)0);
    }

    if ((VAR_8 & VAR_0) && !VAR_9->keyboard) {
        VAR_9->keyboard = FUNC_4(VAR_7);
        FUNC_0(VAR_9->keyboard, &VAR_3, VAR_9);
    } else if (!(VAR_8 & VAR_0) && VAR_9->keyboard) {
        FUNC_1(VAR_9->keyboard);
        VAR_9->keyboard = ((void*)0);
    }

    if ((VAR_8 & VAR_2) && !VAR_9->touch) {
        VAR_9->touch = FUNC_6(VAR_7);
        FUNC_9(VAR_9->touch, VAR_9);
        FUNC_7(VAR_9->touch, &VAR_5, VAR_9);
    } else if (!(VAR_8 & VAR_2) && VAR_9->touch) {
        FUNC_8(VAR_9->touch);
        VAR_9->touch = ((void*)0);
    }
}
