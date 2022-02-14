
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef scalar_t__ ngx_uint_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;
struct TYPE_10__ {TYPE_3__* buf; struct TYPE_10__* next; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_11__ {scalar_t__ last; scalar_t__ end; int * pos; } ;
typedef TYPE_3__ ngx_buf_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int * FUNC_1 (int *,void*,size_t) ;
 TYPE_3__* FUNC_2 (int ,int ) ;
 size_t FUNC_3 (int *,void*,size_t) ;
 int FUNC_4 (int ,size_t) ;
 void* FUNC_5 (TYPE_1__*,void*,size_t) ;

__attribute__((used)) static void
FUNC_6(ngx_http_request_t *VAR_1, ngx_chain_t ***VAR_2,
        void *VAR_3, size_t VAR_4, ngx_uint_t VAR_5)
{
    ngx_chain_t *VAR_6;
    ngx_buf_t *VAR_7;
    size_t VAR_8;

    if (VAR_4 == 0) {
        return;
    }

    if (VAR_5) {
        VAR_3 = FUNC_5(VAR_1, VAR_3, VAR_4);
        if (VAR_3 == ((void*)0)) {
            return;
        }
    }

    VAR_8 = VAR_5
        ? VAR_4 + FUNC_3(((void*)0), VAR_3, VAR_4)
        : VAR_4;

    VAR_6 = **VAR_2;
    if (VAR_6 && VAR_6->buf->last + VAR_8 > VAR_6->buf->end) {
        *VAR_2 = &VAR_6->next;
    }

    if (**VAR_2 == ((void*)0)) {
        VAR_6 = FUNC_0(VAR_1->pool);
        if (VAR_6 == ((void*)0)) {
            return;
        }
        VAR_7 = FUNC_2(VAR_1->pool,
                FUNC_4(VAR_0, VAR_8));
        if (VAR_7 == ((void*)0) || VAR_7->pos == ((void*)0)) {
            return;
        }
        VAR_6->next = ((void*)0);
        VAR_6->buf = VAR_7;
        **VAR_2 = VAR_6;
    }

    VAR_7 = (**VAR_2)->buf;

    if (VAR_5) {
        VAR_7->last = (u_char *)FUNC_3(VAR_7->last, VAR_3, VAR_4);
    } else {
        VAR_7->last = FUNC_1(VAR_7->last, VAR_3, VAR_4);
    }
}
