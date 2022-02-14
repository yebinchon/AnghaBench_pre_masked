
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_fd_watch {scalar_t__ fd; int coro; } ;
struct lwan {scalar_t__ main_socket; int epfd; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int *) ;
 int FUNC_2 (struct lwan_fd_watch*) ;
 int FUNC_3 (char*,scalar_t__) ;

void FUNC_4(struct lwan *VAR_1, struct lwan_fd_watch *VAR_2)
{
    if (VAR_1->main_socket != VAR_2->fd) {
        if (FUNC_1(VAR_1->epfd, VAR_0, VAR_2->fd, ((void*)0)) < 0)
            FUNC_3("Could not unwatch fd %d", VAR_2->fd);
    }

    FUNC_0(VAR_2->coro);
    FUNC_2(VAR_2);
}
