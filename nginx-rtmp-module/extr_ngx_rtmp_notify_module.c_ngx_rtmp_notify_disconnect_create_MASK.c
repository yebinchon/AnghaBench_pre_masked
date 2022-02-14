
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_21__ {int uri; int host; } ;
typedef TYPE_3__ ngx_url_t ;
struct TYPE_20__ {int len; int * data; } ;
struct TYPE_19__ {int len; int data; } ;
struct TYPE_22__ {TYPE_2__ args; TYPE_1__ app; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
struct TYPE_23__ {scalar_t__ method; TYPE_3__** url; } ;
typedef TYPE_5__ ngx_rtmp_notify_srv_conf_t ;
typedef int ngx_pool_t ;
struct TYPE_24__ {struct TYPE_24__* next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
struct TYPE_25__ {int * last; } ;
typedef TYPE_7__ ngx_buf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 TYPE_6__* FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,int) ;
 TYPE_7__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int ) ;
 TYPE_6__* FUNC_5 (scalar_t__,int *,int *,TYPE_6__*,TYPE_6__*,int *,int *) ;
 TYPE_6__* FUNC_6 (TYPE_4__*,int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ngx_chain_t *
FUNC_7(ngx_rtmp_session_t *VAR_5, void *VAR_6,
        ngx_pool_t *VAR_7)
{
    ngx_rtmp_notify_srv_conf_t *VAR_8;
    ngx_url_t *VAR_9;
    ngx_chain_t *VAR_10, *VAR_11, *VAR_12;
    ngx_buf_t *VAR_13;

    VAR_8 = FUNC_4(VAR_5, VAR_3);

    VAR_12 = FUNC_0(VAR_7);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_13 = FUNC_2(VAR_7,
                            sizeof("&call=disconnect") +
                            sizeof("&app=") + VAR_5->app.len * 3 +
                            1 + VAR_5->args.len);
    if (VAR_13 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_12->buf = VAR_13;
    VAR_12->next = ((void*)0);

    VAR_13->last = FUNC_1(VAR_13->last, (u_char*) "&call=disconnect",
                         sizeof("&call=disconnect") - 1);

    VAR_13->last = FUNC_1(VAR_13->last, (u_char*) "&app=", sizeof("&app=") - 1);
    VAR_13->last = (u_char*) FUNC_3(VAR_13->last, VAR_5->app.data, VAR_5->app.len,
                                       VAR_0);

    if (VAR_5->args.len) {
        *VAR_13->last++ = '&';
        VAR_13->last = (u_char *) FUNC_1(VAR_13->last, VAR_5->args.data, VAR_5->args.len);
    }

    VAR_9 = VAR_8->url[VAR_2];

    VAR_10 = FUNC_6(VAR_5, VAR_7);
    if (VAR_10 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_10->next = VAR_12;

    VAR_11 = ((void*)0);

    if (VAR_8->method == VAR_1) {
        VAR_11 = VAR_10;
        VAR_10 = ((void*)0);
    }

    return FUNC_5(VAR_8->method, &VAR_9->host,
                                                &VAR_9->uri, VAR_10, VAR_11, VAR_7,
                                                &VAR_4);
}
