
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fd_lookup_st {void const* key; struct fd_lookup_st* next; void* custom_data; int fd; scalar_t__ del; } ;
struct TYPE_3__ {struct fd_lookup_st* fds; } ;
typedef int OSSL_ASYNC_FD ;
typedef TYPE_1__ ASYNC_WAIT_CTX ;



int FUNC_0(ASYNC_WAIT_CTX *VAR_0, const void *VAR_1,
                          OSSL_ASYNC_FD *VAR_2, void **VAR_3)
{
    struct fd_lookup_st *VAR_4;

    VAR_4 = VAR_0->fds;
    while (VAR_4 != ((void*)0)) {
        if (VAR_4->del) {

            VAR_4 = VAR_4->next;
            continue;
        }
        if (VAR_4->key == VAR_1) {
            *VAR_2 = VAR_4->fd;
            *VAR_3 = VAR_4->custom_data;
            return 1;
        }
        VAR_4 = VAR_4->next;
    }
    return 0;
}
