
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_fd_watch {int dummy; } ;
struct lwan {int main_socket; int epfd; } ;
struct TYPE_2__ {int ptr; } ;
struct epoll_event {scalar_t__ events; TYPE_1__ data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct epoll_event*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,struct epoll_event*,int ,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct lwan*,struct lwan_fd_watch*) ;
 struct lwan_fd_watch* FUNC_9 (struct lwan*,int,int,int ,struct lwan*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (int ,int ) ;

void FUNC_11(struct lwan *VAR_11)
{
    struct epoll_event VAR_12[16];
    struct lwan_fd_watch *VAR_13;

    FUNC_2(VAR_9 == -1);
    VAR_9 = VAR_11->main_socket;

    if (FUNC_10(VAR_5, VAR_10) == VAR_6)
        FUNC_5("Could not set signal handler");

    VAR_13 = FUNC_9(VAR_11, VAR_11->main_socket, VAR_3 | VAR_2 | VAR_4,
                          VAR_7, VAR_11);
    if (!VAR_13)
        FUNC_5("Could not watch main socket");

    FUNC_6("Ready to serve");

    while (1) {
        int VAR_14 = FUNC_4(VAR_11->epfd, VAR_12, FUNC_0(VAR_12), -1);

        if (FUNC_1(VAR_14 < 0)) {
            if (VAR_9 < 0)
                break;
            if (VAR_8 == VAR_1 || VAR_8 == VAR_0)
                continue;
            FUNC_7("epoll_wait");
            break;
        }

        for (int VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
            if (!FUNC_3(VAR_12[VAR_15].data.ptr, (int)VAR_12[VAR_15].events))
                break;
        }
    }

    FUNC_8(VAR_11, VAR_13);
}
