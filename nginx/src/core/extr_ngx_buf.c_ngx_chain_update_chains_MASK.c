
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_7__ {struct TYPE_7__* next; TYPE_6__* buf; } ;
typedef TYPE_1__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_8__ {scalar_t__ tag; int start; int last; int pos; } ;


 scalar_t__ FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;

void
FUNC_2(ngx_pool_t *VAR_0, ngx_chain_t **VAR_1, ngx_chain_t **VAR_2,
    ngx_chain_t **VAR_3, ngx_buf_tag_t VAR_4)
{
    ngx_chain_t *VAR_5;

    if (*VAR_3) {
        if (*VAR_2 == ((void*)0)) {
            *VAR_2 = *VAR_3;

        } else {
            for (VAR_5 = *VAR_2; VAR_5->next; VAR_5 = VAR_5->next) { }

            VAR_5->next = *VAR_3;
        }

        *VAR_3 = ((void*)0);
    }

    while (*VAR_2) {
        VAR_5 = *VAR_2;

        if (FUNC_0(VAR_5->buf) != 0) {
            break;
        }

        if (VAR_5->buf->tag != VAR_4) {
            *VAR_2 = VAR_5->next;
            FUNC_1(VAR_0, VAR_5);
            continue;
        }

        VAR_5->buf->pos = VAR_5->buf->start;
        VAR_5->buf->last = VAR_5->buf->start;

        *VAR_2 = VAR_5->next;
        VAR_5->next = *VAR_1;
        *VAR_1 = VAR_5;
    }
}
