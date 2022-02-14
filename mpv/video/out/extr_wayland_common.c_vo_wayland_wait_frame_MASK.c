
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo_wayland_state {int timeout_count; int hidden; TYPE_1__* current_output; scalar_t__ frame_wait; int display; int display_fd; } ;
struct pollfd {int events; int fd; } ;
typedef scalar_t__ int64_t ;
struct TYPE_2__ {int refresh_rate; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct pollfd*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(struct vo_wayland_state *VAR_1, int VAR_2)
{
    struct pollfd VAR_3[1] = {
        {.fd = VAR_1->display_fd, .events = VAR_0 },
    };

    double VAR_4 = 1e6 / VAR_1->current_output->refresh_rate;
    int64_t VAR_5 = FUNC_0() + VAR_4 + (int64_t)VAR_2;

    while (VAR_1->frame_wait && VAR_5 > FUNC_0()) {

        while (FUNC_4(VAR_1->display) != 0)
            FUNC_2(VAR_1->display);
        FUNC_3(VAR_1->display);

        int VAR_6 = (VAR_5 - FUNC_0()) / 1000;
        if (VAR_6 < 0) {
            VAR_6 = 0;
        }

        FUNC_1(VAR_3, 1, VAR_6);

        FUNC_5(VAR_1->display);
        FUNC_2(VAR_1->display);
    }

    if (VAR_1->frame_wait) {
        VAR_1->timeout_count += 1;
    } else {
        VAR_1->timeout_count = 0;
        VAR_1->hidden = 0;
    }

    if (VAR_1->timeout_count > VAR_1->current_output->refresh_rate)
        VAR_1->hidden = 1;
}
