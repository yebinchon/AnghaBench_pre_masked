
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_x11_state {int * wakeup_pipe; int event_fd; } ;
struct vo {struct vo_x11_state* x11; } ;
struct pollfd {int events; int revents; int fd; } ;
typedef int int64_t ;


 int FUNC_0 (int,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct pollfd*,int,int) ;

void FUNC_4(struct vo *VAR_1, int64_t VAR_2)
{
    struct vo_x11_state *VAR_3 = VAR_1->x11;

    struct pollfd VAR_4[2] = {
        { .fd = VAR_3->event_fd, .events = VAR_0 },
        { .fd = VAR_3->wakeup_pipe[0], .events = VAR_0 },
    };
    int64_t VAR_5 = VAR_2 - FUNC_2();
    int VAR_6 = FUNC_0((VAR_5 + 999) / 1000, 0, 10000);

    FUNC_3(VAR_4, 2, VAR_6);

    if (VAR_4[1].revents & VAR_0)
        FUNC_1(VAR_3->wakeup_pipe[0]);
}
