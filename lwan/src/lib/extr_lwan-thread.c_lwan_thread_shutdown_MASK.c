
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_thread {int wheel; int pending_fds; int self; int * pipe_fd; int epoll_fd; } ;
struct TYPE_2__ {int count; struct lwan_thread* threads; int barrier; } ;
struct lwan {TYPE_1__ thread; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct lwan_thread*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct lwan_thread*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct lwan *VAR_0)
{
    FUNC_2("Shutting down threads");

    for (int VAR_1 = 0; VAR_1 < VAR_0->thread.count; VAR_1++) {
        struct lwan_thread *VAR_2 = &VAR_0->thread.threads[VAR_1];

        FUNC_0(VAR_2->epoll_fd);
        FUNC_3(VAR_2);
    }

    FUNC_5(&VAR_0->thread.barrier);
    FUNC_4(&VAR_0->thread.barrier);

    for (int VAR_3 = 0; VAR_3 < VAR_0->thread.count; VAR_3++) {
        struct lwan_thread *VAR_4 = &VAR_0->thread.threads[VAR_3];

        FUNC_0(VAR_4->pipe_fd[0]);

        FUNC_0(VAR_4->pipe_fd[1]);


        FUNC_6(VAR_0->thread.threads[VAR_3].self, ((void*)0));
        FUNC_7(&VAR_4->pending_fds);
        FUNC_8(VAR_4->wheel);
    }

    FUNC_1(VAR_0->thread.threads);
}
