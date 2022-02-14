
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_19__ {int uri; int host; } ;
typedef TYPE_2__ ngx_url_t ;
struct TYPE_20__ {int len; int * data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_21__ {scalar_t__ epoch; TYPE_1__* connection; } ;
typedef TYPE_4__ ngx_rtmp_session_t ;
struct TYPE_22__ {scalar_t__ method; TYPE_2__** url; } ;
typedef TYPE_5__ ngx_rtmp_notify_srv_conf_t ;
struct TYPE_23__ {int * args; int * page_url; int * tc_url; int * swf_url; int * flashver; int * app; } ;
typedef TYPE_6__ ngx_rtmp_connect_t ;
typedef int ngx_pool_t ;
struct TYPE_24__ {int * next; TYPE_8__* buf; } ;
typedef TYPE_7__ ngx_chain_t ;
struct TYPE_25__ {int * last; } ;
typedef TYPE_8__ ngx_buf_t ;
struct TYPE_18__ {TYPE_3__ addr_text; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 TYPE_7__* FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,size_t) ;
 TYPE_8__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,size_t,int ) ;
 TYPE_5__* FUNC_4 (TYPE_4__*,int ) ;
 TYPE_7__* FUNC_5 (scalar_t__,int *,int *,TYPE_7__*,TYPE_7__*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_6 (int *,char*,int ) ;
 size_t FUNC_7 (int *) ;

__attribute__((used)) static ngx_chain_t *
FUNC_8(ngx_rtmp_session_t *VAR_6, void *VAR_7,
        ngx_pool_t *VAR_8)
{
    ngx_rtmp_connect_t *VAR_9 = VAR_7;

    ngx_rtmp_notify_srv_conf_t *VAR_10;
    ngx_url_t *VAR_11;
    ngx_chain_t *VAR_12, *VAR_13;
    ngx_buf_t *VAR_14;
    ngx_str_t *VAR_15;
    size_t VAR_16, VAR_17, VAR_18,
                                    VAR_19, VAR_20, VAR_21;

    VAR_10 = FUNC_4(VAR_6, VAR_4);

    VAR_12 = FUNC_0(VAR_8);
    if (VAR_12 == ((void*)0)) {
        return ((void*)0);
    }





    VAR_16 = FUNC_7(VAR_9->app);
    VAR_17 = FUNC_7(VAR_9->args);
    VAR_18 = FUNC_7(VAR_9->flashver);
    VAR_19 = FUNC_7(VAR_9->swf_url);
    VAR_20 = FUNC_7(VAR_9->tc_url);
    VAR_21 = FUNC_7(VAR_9->page_url);

    VAR_15 = &VAR_6->connection->addr_text;

    VAR_14 = FUNC_2(VAR_8,
            sizeof("call=connect") - 1 +
            sizeof("&app=") - 1 + VAR_16 * 3 +
            sizeof("&flashver=") - 1 + VAR_18 * 3 +
            sizeof("&swfurl=") - 1 + VAR_19 * 3 +
            sizeof("&tcurl=") - 1 + VAR_20 * 3 +
            sizeof("&pageurl=") - 1 + VAR_21 * 3 +
            sizeof("&addr=") - 1 + VAR_15->len * 3 +
            sizeof("&epoch=") - 1 + VAR_1 +
            1 + VAR_17
        );

    if (VAR_14 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_12->buf = VAR_14;
    VAR_12->next = ((void*)0);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "app=", sizeof("app=") - 1);
    VAR_14->last = (u_char*) FUNC_3(VAR_14->last, VAR_9->app, VAR_16,
                                       VAR_0);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "&flashver=",
                         sizeof("&flashver=") - 1);
    VAR_14->last = (u_char*) FUNC_3(VAR_14->last, VAR_9->flashver, VAR_18,
                                       VAR_0);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "&swfurl=",
                         sizeof("&swfurl=") - 1);
    VAR_14->last = (u_char*) FUNC_3(VAR_14->last, VAR_9->swf_url, VAR_19,
                                       VAR_0);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "&tcurl=",
                         sizeof("&tcurl=") - 1);
    VAR_14->last = (u_char*) FUNC_3(VAR_14->last, VAR_9->tc_url, VAR_20,
                                       VAR_0);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "&pageurl=",
                         sizeof("&pageurl=") - 1);
    VAR_14->last = (u_char*) FUNC_3(VAR_14->last, VAR_9->page_url, VAR_21,
                                       VAR_0);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "&addr=", sizeof("&addr=") -1);
    VAR_14->last = (u_char*) FUNC_3(VAR_14->last, VAR_15->data,
                                       VAR_15->len, VAR_0);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "&epoch=", sizeof("&epoch=") -1);
    VAR_14->last = FUNC_6(VAR_14->last, "%uD", (uint32_t) VAR_6->epoch);

    VAR_14->last = FUNC_1(VAR_14->last, (u_char*) "&call=connect",
                         sizeof("&call=connect") - 1);

    if (VAR_17) {
        *VAR_14->last++ = '&';
        VAR_14->last = (u_char *) FUNC_1(VAR_14->last, VAR_9->args, VAR_17);
    }

    VAR_11 = VAR_10->url[VAR_3];

    VAR_13 = ((void*)0);

    if (VAR_10->method == VAR_2) {
        VAR_13 = VAR_12;
        VAR_12 = ((void*)0);
    }

    return FUNC_5(VAR_10->method, &VAR_11->host,
                                                &VAR_11->uri, VAR_12, VAR_13, VAR_8,
                                                &VAR_5);
}
