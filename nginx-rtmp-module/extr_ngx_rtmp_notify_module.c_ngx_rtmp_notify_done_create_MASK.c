
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_rtmp_session_t ;
struct TYPE_11__ {int url_idx; int * cbname; } ;
typedef TYPE_1__ ngx_rtmp_notify_done_t ;
struct TYPE_12__ {int * args; int * name; } ;
typedef TYPE_2__ ngx_rtmp_notify_ctx_t ;
typedef int ngx_pool_t ;
struct TYPE_13__ {int * next; TYPE_4__* buf; } ;
typedef TYPE_3__ ngx_chain_t ;
struct TYPE_14__ {int * last; } ;
typedef TYPE_4__ ngx_buf_t ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,size_t) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,size_t,int ) ;
 TYPE_2__* FUNC_4 (int *,int ) ;
 TYPE_3__* FUNC_5 (int *,int *,int ,TYPE_3__*) ;
 int VAR_1 ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static ngx_chain_t *
FUNC_7(ngx_rtmp_session_t *VAR_2, void *VAR_3,
        ngx_pool_t *VAR_4)
{
    ngx_rtmp_notify_done_t *VAR_5 = VAR_3;

    ngx_chain_t *VAR_6;
    ngx_buf_t *VAR_7;
    size_t VAR_8, VAR_9, VAR_10;
    ngx_rtmp_notify_ctx_t *VAR_11;

    VAR_11 = FUNC_4(VAR_2, VAR_1);

    VAR_6 = FUNC_0(VAR_4);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = FUNC_6(VAR_5->cbname);
    VAR_9 = VAR_11 ? FUNC_6(VAR_11->name) : 0;
    VAR_10 = VAR_11 ? FUNC_6(VAR_11->args) : 0;

    VAR_7 = FUNC_2(VAR_4,
                            sizeof("&call=") + VAR_8 +
                            sizeof("&name=") + VAR_9 * 3 +
                            1 + VAR_10);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6->buf = VAR_7;
    VAR_6->next = ((void*)0);

    VAR_7->last = FUNC_1(VAR_7->last, (u_char*) "&call=", sizeof("&call=") - 1);
    VAR_7->last = FUNC_1(VAR_7->last, VAR_5->cbname, VAR_8);

    if (VAR_9) {
        VAR_7->last = FUNC_1(VAR_7->last, (u_char*) "&name=", sizeof("&name=") - 1);
        VAR_7->last = (u_char*) FUNC_3(VAR_7->last, VAR_11->name, VAR_9,
                                           VAR_0);
    }

    if (VAR_10) {
        *VAR_7->last++ = '&';
        VAR_7->last = (u_char *) FUNC_1(VAR_7->last, VAR_11->args, VAR_10);
    }

    return FUNC_5(VAR_2, VAR_4, VAR_5->url_idx, VAR_6);
}
