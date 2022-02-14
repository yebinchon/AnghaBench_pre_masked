
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct timeout_queue {int timeout; } ;
struct lwan_thread {int wheel; int pending_fds; } ;
struct lwan_connection {int dummy; } ;
struct TYPE_2__ {struct lwan_connection* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct coro_switcher {int dummy; } ;
typedef int event ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int,struct epoll_event*) ;
 int FUNC_3 (int,int *,int) ;
 int FUNC_4 (struct lwan_connection*,struct coro_switcher*,struct timeout_queue*) ;
 scalar_t__ FUNC_5 (int *,int*) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static void FUNC_7(int VAR_2,
                         struct lwan_thread *VAR_3,
                         struct lwan_connection *VAR_4,
                         struct timeout_queue *VAR_5,
                         struct coro_switcher *VAR_6,
                         int VAR_7)
{
    uint64_t VAR_8;
    int VAR_9;




    (void)FUNC_3(VAR_2, &VAR_8, sizeof(VAR_8));

    while (FUNC_5(&VAR_3->pending_fds, &VAR_9)) {
        struct lwan_connection *VAR_10 = &VAR_4[VAR_9];
        struct epoll_event VAR_11 = {
            .data.ptr = VAR_10,
            .events = FUNC_1(VAR_0),
        };

        if (FUNC_0(!FUNC_2(VAR_7, VAR_1, VAR_9, &VAR_11)))
            FUNC_4(VAR_10, VAR_6, VAR_5);
    }

    FUNC_6(VAR_3->wheel, &VAR_5->timeout, 1000);
}
