
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {size_t in_chunk_size; int in_pool; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
struct TYPE_9__ {TYPE_3__* buf; int * next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_10__ {int * start; int * end; int * pos; int * last; } ;
typedef TYPE_3__ ngx_buf_t ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 int * FUNC_2 (int ,size_t) ;

__attribute__((used)) static ngx_chain_t *
FUNC_3(ngx_rtmp_session_t *VAR_1)
{
    ngx_chain_t *VAR_2;
    ngx_buf_t *VAR_3;
    size_t VAR_4;

    if ((VAR_2 = FUNC_0(VAR_1->in_pool)) == ((void*)0)
       || (VAR_2->buf = FUNC_1(VAR_1->in_pool)) == ((void*)0))
    {
        return ((void*)0);
    }

    VAR_2->next = ((void*)0);
    VAR_3 = VAR_2->buf;
    VAR_4 = VAR_1->in_chunk_size + VAR_0;

    VAR_3->start = VAR_3->last = VAR_3->pos = FUNC_2(VAR_1->in_pool, VAR_4);
    if (VAR_3->start == ((void*)0)) {
        return ((void*)0);
    }
    VAR_3->end = VAR_3->start + VAR_4;

    return VAR_2;
}
