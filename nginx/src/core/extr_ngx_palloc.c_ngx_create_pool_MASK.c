
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {scalar_t__ failed; int * next; int * end; int * last; } ;
struct TYPE_6__ {size_t max; int * log; int * cleanup; int * large; int * chain; struct TYPE_6__* current; TYPE_1__ d; } ;
typedef TYPE_2__ ngx_pool_t ;
typedef int ngx_log_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,size_t,int *) ;

ngx_pool_t *
FUNC_1(size_t VAR_2, ngx_log_t *VAR_3)
{
    ngx_pool_t *VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4->d.last = (u_char *) VAR_4 + sizeof(ngx_pool_t);
    VAR_4->d.end = (u_char *) VAR_4 + VAR_2;
    VAR_4->d.next = ((void*)0);
    VAR_4->d.failed = 0;

    VAR_2 = VAR_2 - sizeof(ngx_pool_t);
    VAR_4->max = (VAR_2 < VAR_0) ? VAR_2 : VAR_0;

    VAR_4->current = VAR_4;
    VAR_4->chain = ((void*)0);
    VAR_4->large = ((void*)0);
    VAR_4->cleanup = ((void*)0);
    VAR_4->log = VAR_3;

    return VAR_4;
}
