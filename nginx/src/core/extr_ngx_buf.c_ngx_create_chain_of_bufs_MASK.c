
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_pool_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_8__ {struct TYPE_8__* next; TYPE_3__* buf; } ;
typedef TYPE_1__ ngx_chain_t ;
struct TYPE_9__ {int num; int size; } ;
typedef TYPE_2__ ngx_bufs_t ;
struct TYPE_10__ {int temporary; int * end; int * start; int * last; int * pos; } ;
typedef TYPE_3__ ngx_buf_t ;


 TYPE_1__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *) ;
 int * FUNC_2 (int *,int) ;

ngx_chain_t *
FUNC_3(ngx_pool_t *VAR_0, ngx_bufs_t *VAR_1)
{
    u_char *VAR_2;
    ngx_int_t VAR_3;
    ngx_buf_t *VAR_4;
    ngx_chain_t *VAR_5, *VAR_6, **VAR_7;

    VAR_2 = FUNC_2(VAR_0, VAR_1->num * VAR_1->size);
    if (VAR_2 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_7 = &VAR_5;

    for (VAR_3 = 0; VAR_3 < VAR_1->num; VAR_3++) {

        VAR_4 = FUNC_1(VAR_0);
        if (VAR_4 == ((void*)0)) {
            return ((void*)0);
        }
        VAR_4->pos = VAR_2;
        VAR_4->last = VAR_2;
        VAR_4->temporary = 1;

        VAR_4->start = VAR_2;
        VAR_2 += VAR_1->size;
        VAR_4->end = VAR_2;

        VAR_6 = FUNC_0(VAR_0);
        if (VAR_6 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_6->buf = VAR_4;
        *VAR_7 = VAR_6;
        VAR_7 = &VAR_6->next;
    }

    *VAR_7 = ((void*)0);

    return VAR_5;
}
