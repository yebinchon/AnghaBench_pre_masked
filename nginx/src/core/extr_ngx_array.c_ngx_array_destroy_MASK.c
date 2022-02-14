
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int * last; } ;
struct TYPE_6__ {TYPE_1__ d; } ;
typedef TYPE_2__ ngx_pool_t ;
struct TYPE_7__ {int size; int nalloc; scalar_t__ elts; TYPE_2__* pool; } ;
typedef TYPE_3__ ngx_array_t ;



void
FUNC_0(ngx_array_t *VAR_0)
{
    ngx_pool_t *VAR_1;

    VAR_1 = VAR_0->pool;

    if ((u_char *) VAR_0->elts + VAR_0->size * VAR_0->nalloc == VAR_1->d.last) {
        VAR_1->d.last -= VAR_0->size * VAR_0->nalloc;
    }

    if ((u_char *) VAR_0 + sizeof(ngx_array_t) == VAR_1->d.last) {
        VAR_1->d.last = (u_char *) VAR_0;
    }
}
