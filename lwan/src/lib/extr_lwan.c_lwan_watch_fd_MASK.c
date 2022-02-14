
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct lwan_fd_watch {int fd; int coro; } ;
struct lwan {int epfd; int switcher; } ;
struct TYPE_2__ {int ptr; } ;
struct epoll_event {TYPE_1__ data; int events; } ;
typedef int coro_function_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,void*) ;
 scalar_t__ FUNC_2 (int ,int ,int,struct epoll_event*) ;
 int FUNC_3 (struct lwan_fd_watch*) ;
 struct lwan_fd_watch* FUNC_4 (int) ;

struct lwan_fd_watch *FUNC_5(struct lwan *VAR_1,
                                    int VAR_2,
                                    uint32_t VAR_3,
                                    coro_function_t VAR_4,
                                    void *VAR_5)
{
    struct lwan_fd_watch *VAR_6;

    VAR_6 = FUNC_4(sizeof(*VAR_6));
    if (!VAR_6)
        return ((void*)0);

    VAR_6->coro = FUNC_1(&VAR_1->switcher, VAR_4, VAR_5);
    if (!VAR_6->coro)
        goto out;

    struct epoll_event VAR_7 = {.events = VAR_3, .data.ptr = VAR_6->coro};
    if (FUNC_2(VAR_1->epfd, VAR_0, VAR_2, &VAR_7) < 0) {
        FUNC_0(VAR_6->coro);
        goto out;
    }

    VAR_6->fd = VAR_2;
    return VAR_6;

out:
    FUNC_3(VAR_6);
    return ((void*)0);
}
