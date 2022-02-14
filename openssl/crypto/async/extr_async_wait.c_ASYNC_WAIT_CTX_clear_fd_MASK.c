
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct fd_lookup_st {int del; void const* key; int add; struct fd_lookup_st* next; } ;
struct TYPE_3__ {int numdel; int numadd; struct fd_lookup_st* fds; } ;
typedef TYPE_1__ ASYNC_WAIT_CTX ;


 int FUNC_0 (struct fd_lookup_st*) ;

int FUNC_1(ASYNC_WAIT_CTX *VAR_0, const void *VAR_1)
{
    struct fd_lookup_st *VAR_2, *VAR_3;

    VAR_2 = VAR_0->fds;
    VAR_3 = ((void*)0);
    while (VAR_2 != ((void*)0)) {
        if (VAR_2->del == 1) {

            VAR_3 = VAR_2;
            VAR_2 = VAR_2->next;
            continue;
        }
        if (VAR_2->key == VAR_1) {

            if (VAR_2->add == 1) {
                if (VAR_0->fds == VAR_2) {
                    VAR_0->fds = VAR_2->next;
                } else {
                    VAR_3->next = VAR_2->next;
                }




                FUNC_0(VAR_2);
                VAR_0->numadd--;
                return 1;
            }






            VAR_2->del = 1;
            VAR_0->numdel++;
            return 1;
        }
        VAR_3 = VAR_2;
        VAR_2 = VAR_2->next;
    }
    return 0;
}
