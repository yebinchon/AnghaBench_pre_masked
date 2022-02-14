
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl_display {int dummy; } ;
struct vo_wayland_state {int display_fd; int* wakeup_pipe; struct wl_display* display; } ;
struct vo {int input_ctx; struct vo_wayland_state* wl; } ;
struct pollfd {int fd; int events; int revents; } ;
typedef int int64_t ;


 int FUNC_0 (int,int ,int) ;
 int FUNC_1 (struct vo_wayland_state*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (struct pollfd*,int,int) ;
 int FUNC_7 (struct wl_display*) ;
 int FUNC_8 (struct wl_display*) ;
 int FUNC_9 (struct wl_display*) ;

void FUNC_10(struct vo *VAR_5, int64_t VAR_6)
{
    struct vo_wayland_state *VAR_7 = VAR_5->wl;
    struct wl_display *VAR_8 = VAR_7->display;

    if (VAR_7->display_fd == -1)
        return;

    struct pollfd VAR_9[2] = {
        {.fd = VAR_7->display_fd, .events = VAR_3 },
        {.fd = VAR_7->wakeup_pipe[0], .events = VAR_3 },
    };

    int64_t VAR_10 = VAR_6 - FUNC_5();
    int VAR_11 = FUNC_0((VAR_10 + 999) / 1000, 0, 10000);

    FUNC_8(VAR_8);
    FUNC_9(VAR_8);

    FUNC_6(VAR_9, 2, VAR_11);

    if (VAR_9[0].revents & (VAR_1 | VAR_2 | VAR_4)) {
        FUNC_1(VAR_7, "Error occurred on the display fd, closing\n");
        FUNC_2(VAR_7->display_fd);
        VAR_7->display_fd = -1;
        FUNC_4(VAR_5->input_ctx, VAR_0);
    }

    if (VAR_9[0].revents & VAR_3)
        FUNC_7(VAR_8);

    if (VAR_9[1].revents & VAR_3)
        FUNC_3(VAR_7->wakeup_pipe[0]);
}
