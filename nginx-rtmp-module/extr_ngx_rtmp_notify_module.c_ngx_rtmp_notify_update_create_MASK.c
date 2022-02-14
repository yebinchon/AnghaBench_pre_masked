
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


typedef int u_char ;
struct TYPE_19__ {size_t len; int * data; } ;
typedef TYPE_1__ ngx_str_t ;
struct TYPE_20__ {scalar_t__ current_time; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_21__ {int flags; int * args; int * name; scalar_t__ start; } ;
typedef TYPE_3__ ngx_rtmp_notify_ctx_t ;
typedef int ngx_pool_t ;
struct TYPE_22__ {int * next; TYPE_5__* buf; } ;
typedef TYPE_4__ ngx_chain_t ;
struct TYPE_23__ {int * last; } ;
typedef TYPE_5__ ngx_buf_t ;
struct TYPE_18__ {scalar_t__ sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_4__* FUNC_0 (int *) ;
 TYPE_16__* VAR_6 ;
 void* FUNC_1 (int *,int *,size_t) ;
 TYPE_5__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,size_t,int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int *,int ,TYPE_4__*) ;
 int VAR_7 ;
 void* FUNC_6 (int *,char*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,char*) ;
 size_t FUNC_9 (int *) ;

__attribute__((used)) static ngx_chain_t *
FUNC_10(ngx_rtmp_session_t *VAR_8, void *VAR_9,
        ngx_pool_t *VAR_10)
{
    ngx_chain_t *VAR_11;
    ngx_buf_t *VAR_12;
    size_t VAR_13, VAR_14;
    ngx_rtmp_notify_ctx_t *VAR_15;
    ngx_str_t VAR_16;

    VAR_15 = FUNC_4(VAR_8, VAR_7);

    VAR_11 = FUNC_0(VAR_10);
    if (VAR_11 == ((void*)0)) {
        return ((void*)0);
    }

    if (VAR_15->flags & VAR_3) {
        FUNC_8(&VAR_16, "_publish");
    } else if (VAR_15->flags & VAR_2) {
        FUNC_8(&VAR_16, "_play");
    } else {
        FUNC_7(&VAR_16);
    }

    VAR_13 = VAR_15 ? FUNC_9(VAR_15->name) : 0;
    VAR_14 = VAR_15 ? FUNC_9(VAR_15->args) : 0;

    VAR_12 = FUNC_2(VAR_10,
                            sizeof("&call=update") + VAR_16.len +
                            sizeof("&time=") + VAR_5 +
                            sizeof("&timestamp=") + VAR_1 +
                            sizeof("&name=") + VAR_13 * 3 +
                            1 + VAR_14);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_11->buf = VAR_12;
    VAR_11->next = ((void*)0);

    VAR_12->last = FUNC_1(VAR_12->last, (u_char*) "&call=update",
                         sizeof("&call=update") - 1);
    VAR_12->last = FUNC_1(VAR_12->last, VAR_16.data, VAR_16.len);

    VAR_12->last = FUNC_1(VAR_12->last, (u_char *) "&time=",
                         sizeof("&time=") - 1);
    VAR_12->last = FUNC_6(VAR_12->last, "%T", VAR_6->sec - VAR_15->start);

    VAR_12->last = FUNC_1(VAR_12->last, (u_char *) "&timestamp=",
                         sizeof("&timestamp=") - 1);
    VAR_12->last = FUNC_6(VAR_12->last, "%D", VAR_8->current_time);

    if (VAR_13) {
        VAR_12->last = FUNC_1(VAR_12->last, (u_char*) "&name=", sizeof("&name=") - 1);
        VAR_12->last = (u_char*) FUNC_3(VAR_12->last, VAR_15->name, VAR_13,
                                           VAR_0);
    }

    if (VAR_14) {
        *VAR_12->last++ = '&';
        VAR_12->last = (u_char *) FUNC_1(VAR_12->last, VAR_15->args, VAR_14);
    }

    return FUNC_5(VAR_8, VAR_10, VAR_4, VAR_11);
}
