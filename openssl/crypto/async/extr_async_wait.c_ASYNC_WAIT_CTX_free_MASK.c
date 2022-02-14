
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fd_lookup_st {struct fd_lookup_st* next; int custom_data; int fd; int key; int (* cleanup ) (struct fd_lookup_st*,int ,int ,int ) ;int del; struct fd_lookup_st* fds; } ;
typedef struct fd_lookup_st ASYNC_WAIT_CTX ;


 int FUNC_0 (struct fd_lookup_st*) ;
 int FUNC_1 (struct fd_lookup_st*,int ,int ,int ) ;

void FUNC_2(ASYNC_WAIT_CTX *VAR_0)
{
    struct fd_lookup_st *VAR_1;
    struct fd_lookup_st *VAR_2;

    if (VAR_0 == ((void*)0))
        return;

    VAR_1 = VAR_0->fds;
    while (VAR_1 != ((void*)0)) {
        if (!VAR_1->del) {

            if (VAR_1->cleanup != ((void*)0))
                VAR_1->cleanup(VAR_0, VAR_1->key, VAR_1->fd, VAR_1->custom_data);
        }

        VAR_2 = VAR_1->next;
        FUNC_0(VAR_1);
        VAR_1 = VAR_2;
    }

    FUNC_0(VAR_0);
}
