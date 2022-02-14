
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nalloc; int size; TYPE_2__* last; int pool; } ;
typedef TYPE_1__ ngx_list_t ;
struct TYPE_5__ {int nelts; int * elts; struct TYPE_5__* next; } ;
typedef TYPE_2__ ngx_list_part_t ;


 void* FUNC_0 (int ,int) ;

void *
FUNC_1(ngx_list_t *VAR_0)
{
    void *VAR_1;
    ngx_list_part_t *VAR_2;

    VAR_2 = VAR_0->last;

    if (VAR_2->nelts == VAR_0->nalloc) {



        VAR_2 = FUNC_0(VAR_0->pool, sizeof(ngx_list_part_t));
        if (VAR_2 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_2->elts = FUNC_0(VAR_0->pool, VAR_0->nalloc * VAR_0->size);
        if (VAR_2->elts == ((void*)0)) {
            return ((void*)0);
        }

        VAR_2->nelts = 0;
        VAR_2->next = ((void*)0);

        VAR_0->last->next = VAR_2;
        VAR_0->last = VAR_2;
    }

    VAR_1 = (char *) VAR_2->elts + VAR_0->size * VAR_2->nelts;
    VAR_2->nelts++;

    return VAR_1;
}
