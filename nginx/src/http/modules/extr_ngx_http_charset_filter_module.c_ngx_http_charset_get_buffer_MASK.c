
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_pool_t ;
struct TYPE_8__ {TYPE_2__* free_buffers; } ;
typedef TYPE_1__ ngx_http_charset_ctx_t ;
struct TYPE_9__ {TYPE_3__* buf; struct TYPE_9__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_10__ {int temporary; scalar_t__ tag; int * shadow; scalar_t__ start; scalar_t__ pos; scalar_t__ end; } ;
typedef TYPE_3__ ngx_buf_t ;


 TYPE_2__* FUNC_0 (int *) ;
 TYPE_3__* FUNC_1 (int *,size_t) ;
 int VAR_0 ;

__attribute__((used)) static ngx_chain_t *
FUNC_2(ngx_pool_t *VAR_1, ngx_http_charset_ctx_t *VAR_2,
    size_t VAR_3)
{
    ngx_buf_t *VAR_4;
    ngx_chain_t *VAR_5, **VAR_6;

    for (VAR_6 = &VAR_2->free_buffers, VAR_5 = VAR_2->free_buffers;
         VAR_5;
         VAR_6 = &VAR_5->next, VAR_5 = VAR_5->next)
    {
        VAR_4 = VAR_5->buf;

        if ((size_t) (VAR_4->end - VAR_4->start) >= VAR_3) {
            *VAR_6 = VAR_5->next;
            VAR_5->next = ((void*)0);

            VAR_4->pos = VAR_4->start;
            VAR_4->temporary = 1;
            VAR_4->shadow = ((void*)0);

            return VAR_5;
        }
    }

    VAR_5 = FUNC_0(VAR_1);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5->buf = FUNC_1(VAR_1, VAR_3);
    if (VAR_5->buf == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5->next = ((void*)0);

    VAR_5->buf->temporary = 1;
    VAR_5->buf->tag = (ngx_buf_tag_t) &VAR_0;

    return VAR_5;
}
