
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_7__ {size_t chunk_size; int pool; TYPE_2__* free; } ;
typedef TYPE_1__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_8__ {TYPE_3__* buf; struct TYPE_8__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_9__ {int memory; int * start; int * last; int * pos; int * end; } ;
typedef TYPE_3__ ngx_buf_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,int) ;

ngx_chain_t *
FUNC_2(ngx_rtmp_core_srv_conf_t *VAR_2)
{
    u_char *VAR_3;
    ngx_chain_t *VAR_4;
    ngx_buf_t *VAR_5;
    size_t VAR_6;

    if (VAR_2->free) {
        VAR_4 = VAR_2->free;
        VAR_2->free = VAR_4->next;

    } else {

        VAR_6 = VAR_2->chunk_size + VAR_0;

        VAR_3 = FUNC_0(VAR_2->pool, VAR_1
                + sizeof(ngx_chain_t)
                + sizeof(ngx_buf_t)
                + VAR_6);
        if (VAR_3 == ((void*)0)) {
            return ((void*)0);
        }

        VAR_3 += VAR_1;
        VAR_4 = (ngx_chain_t *)VAR_3;

        VAR_3 += sizeof(ngx_chain_t);
        VAR_4->buf = (ngx_buf_t *)VAR_3;

        VAR_3 += sizeof(ngx_buf_t);
        VAR_4->buf->start = VAR_3;
        VAR_4->buf->end = VAR_3 + VAR_6;
    }

    VAR_4->next = ((void*)0);
    VAR_5 = VAR_4->buf;
    VAR_5->pos = VAR_5->last = VAR_5->start + VAR_0;
    VAR_5->memory = 1;


    FUNC_1(VAR_4, 1);

    return VAR_4;
}
