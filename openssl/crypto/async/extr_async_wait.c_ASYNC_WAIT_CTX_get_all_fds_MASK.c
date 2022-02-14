
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fd_lookup_st {struct fd_lookup_st* next; int fd; scalar_t__ del; } ;
struct TYPE_3__ {struct fd_lookup_st* fds; } ;
typedef int OSSL_ASYNC_FD ;
typedef TYPE_1__ ASYNC_WAIT_CTX ;



int FUNC_0(ASYNC_WAIT_CTX *VAR_0, OSSL_ASYNC_FD *VAR_1,
                               size_t *VAR_2)
{
    struct fd_lookup_st *VAR_3;

    VAR_3 = VAR_0->fds;
    *VAR_2 = 0;
    while (VAR_3 != ((void*)0)) {
        if (VAR_3->del) {

            VAR_3 = VAR_3->next;
            continue;
        }
        if (VAR_1 != ((void*)0)) {
            *VAR_1 = VAR_3->fd;
            VAR_1++;
        }
        (*VAR_2)++;
        VAR_3 = VAR_3->next;
    }
    return 1;
}
