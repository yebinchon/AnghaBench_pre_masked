
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_9__ {TYPE_3__* free_raw_bufs; TYPE_1__* buf_to_file; int pool; } ;
typedef TYPE_2__ ngx_event_pipe_t ;
struct TYPE_10__ {struct TYPE_10__* next; TYPE_4__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_11__ {scalar_t__ start; scalar_t__ pos; scalar_t__ last; int * shadow; } ;
typedef TYPE_4__ ngx_buf_t ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ last; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int ) ;

ngx_int_t
FUNC_1(ngx_event_pipe_t *VAR_2, ngx_buf_t *VAR_3)
{
    ngx_chain_t *VAR_4;

    VAR_4 = FUNC_0(VAR_2->pool);
    if (VAR_4 == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_2->buf_to_file && VAR_3->start == VAR_2->buf_to_file->start) {
        VAR_3->pos = VAR_2->buf_to_file->last;
        VAR_3->last = VAR_2->buf_to_file->last;

    } else {
        VAR_3->pos = VAR_3->start;
        VAR_3->last = VAR_3->start;
    }

    VAR_3->shadow = ((void*)0);

    VAR_4->buf = VAR_3;

    if (VAR_2->free_raw_bufs == ((void*)0)) {
        VAR_2->free_raw_bufs = VAR_4;
        VAR_4->next = ((void*)0);

        return VAR_1;
    }

    if (VAR_2->free_raw_bufs->buf->pos == VAR_2->free_raw_bufs->buf->last) {



        VAR_4->next = VAR_2->free_raw_bufs;
        VAR_2->free_raw_bufs = VAR_4;

        return VAR_1;
    }



    VAR_4->next = VAR_2->free_raw_bufs->next;
    VAR_2->free_raw_bufs->next = VAR_4;

    return VAR_1;
}
