
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeout_queue {int dummy; } ;
struct lwan_thread {int epoll_fd; int* pipe_fd; struct lwan* lwan; } ;
struct lwan_connection {int dummy; } ;
struct TYPE_4__ {int barrier; struct lwan_thread* threads; scalar_t__ max_fd; } ;
struct lwan {TYPE_2__ thread; int conns; } ;
struct TYPE_3__ {struct lwan_connection* ptr; } ;
struct epoll_event {int events; TYPE_1__ data; } ;
struct coro_switcher {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int const,struct lwan_thread*,int ,struct timeout_queue*,struct coro_switcher*,int) ;
 struct epoll_event* FUNC_2 (size_t,int) ;
 int FUNC_3 (int,struct epoll_event*,int const,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct epoll_event*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct timeout_queue*,struct lwan_connection*,int) ;
 int FUNC_11 (struct timeout_queue*,struct lwan*) ;
 int FUNC_12 (struct timeout_queue*,struct lwan_connection*) ;
 int FUNC_13 (struct timeout_queue*) ;
 int FUNC_14 (struct timeout_queue*,struct lwan_connection*) ;
 int FUNC_15 (struct timeout_queue*,struct lwan_thread*,int) ;
 int FUNC_16 (struct lwan_thread*) ;

__attribute__((used)) static void *FUNC_17(void *VAR_5)
{
    struct lwan_thread *VAR_6 = VAR_5;
    int VAR_7 = VAR_6->epoll_fd;
    const int VAR_8 = VAR_6->pipe_fd[0];
    const int VAR_9 = FUNC_8((int)VAR_6->lwan->thread.max_fd, 1024);
    struct lwan *VAR_10 = VAR_6->lwan;
    struct epoll_event *VAR_11;
    struct coro_switcher VAR_12;
    struct timeout_queue VAR_13;

    FUNC_7("Worker thread #%zd starting",
                      VAR_6 - VAR_6->lwan->thread.threads + 1);
    FUNC_5("worker");

    VAR_11 = FUNC_2((size_t)VAR_9, sizeof(*VAR_11));
    if (FUNC_0(!VAR_11))
        FUNC_6("Could not allocate memory for events");

    FUNC_16(VAR_6);

    FUNC_11(&VAR_13, VAR_10);

    FUNC_9(&VAR_10->thread.barrier);

    for (;;) {
        int VAR_14 = FUNC_15(&VAR_13, VAR_6, VAR_7);
        int VAR_15 = FUNC_3(VAR_7, VAR_11, VAR_9, VAR_14);

        if (FUNC_0(VAR_15 < 0)) {
            if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
                break;
            continue;
        }

        for (struct epoll_event *VAR_16 = VAR_11; VAR_15--; VAR_16++) {
            struct lwan_connection *VAR_17;

            if (FUNC_0(!VAR_16->data.ptr)) {
                FUNC_1(VAR_8, VAR_6, VAR_10->conns, &VAR_13, &VAR_12,
                             VAR_7);
                continue;
            }

            VAR_17 = VAR_16->data.ptr;

            if (FUNC_0(VAR_16->events & (VAR_3 | VAR_2))) {
                FUNC_12(&VAR_13, VAR_17);
                continue;
            }

            FUNC_10(&VAR_13, VAR_17, VAR_7);
            FUNC_14(&VAR_13, VAR_17);
        }
    }

    FUNC_9(&VAR_10->thread.barrier);

    FUNC_13(&VAR_13);
    FUNC_4(VAR_11);

    return ((void*)0);
}
