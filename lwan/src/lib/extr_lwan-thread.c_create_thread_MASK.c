
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lwan_thread {int* pipe_fd; int pending_fds; struct lwan* lwan; int self; int epoll_fd; int wheel; } ;
struct TYPE_4__ {size_t max_fd; } ;
struct lwan {TYPE_2__ thread; } ;
struct TYPE_3__ {int * ptr; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int pthread_attr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,struct epoll_event*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct lwan_thread*,int ,int) ;
 scalar_t__ FUNC_6 (int*,int) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int *,int *,int ,struct lwan_thread*) ;
 scalar_t__ FUNC_12 (int *,size_t) ;
 int VAR_10 ;
 int FUNC_13 (int*) ;

__attribute__((used)) static void FUNC_14(struct lwan *VAR_11, struct lwan_thread *VAR_12)
{
    int VAR_13;
    pthread_attr_t VAR_14;

    FUNC_5(VAR_12, 0, sizeof(*VAR_12));
    VAR_12->lwan = VAR_11;

    VAR_12->wheel = FUNC_13(&VAR_13);
    if (!VAR_12->wheel)
        FUNC_3("Could not create timer wheel");

    if ((VAR_12->epoll_fd = FUNC_0(VAR_4)) < 0)
        FUNC_4("epoll_create");

    if (FUNC_8(&VAR_14))
        FUNC_4("pthread_attr_init");

    if (FUNC_10(&VAR_14, VAR_9))
        FUNC_4("pthread_attr_setscope");

    if (FUNC_9(&VAR_14, VAR_8))
        FUNC_4("pthread_attr_setdetachstate");
    if (FUNC_6(VAR_12->pipe_fd, VAR_7 | VAR_6) < 0)
        FUNC_4("pipe");


    struct epoll_event VAR_15 = { .events = VAR_3, .data.ptr = ((void*)0) };
    if (FUNC_1(VAR_12->epoll_fd, VAR_5, VAR_12->pipe_fd[0], &VAR_15) < 0)
        FUNC_4("epoll_ctl");

    if (FUNC_11(&VAR_12->self, &VAR_14, VAR_10, VAR_12))
        FUNC_4("pthread_create");

    if (FUNC_7(&VAR_14))
        FUNC_4("pthread_attr_destroy");

    size_t VAR_16 = VAR_12->lwan->thread.max_fd;
    if (FUNC_12(&VAR_12->pending_fds, VAR_16) < 0) {
        FUNC_3("Could not initialize pending fd "
                             "queue width %zu elements", VAR_16);
    }
}
