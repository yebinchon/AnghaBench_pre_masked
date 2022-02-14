
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_22__ {int len; int data; } ;
typedef TYPE_7__ ngx_str_t ;
struct TYPE_20__ {int len; int data; } ;
struct TYPE_19__ {int len; int data; } ;
struct TYPE_18__ {int len; int data; } ;
struct TYPE_17__ {int len; int data; } ;
struct TYPE_16__ {int len; int data; } ;
struct TYPE_23__ {TYPE_6__* connection; TYPE_5__ page_url; TYPE_4__ tc_url; TYPE_3__ swf_url; TYPE_2__ flashver; TYPE_1__ app; } ;
typedef TYPE_8__ ngx_rtmp_session_t ;
typedef int ngx_pool_t ;
struct TYPE_24__ {int * next; TYPE_10__* buf; } ;
typedef TYPE_9__ ngx_chain_t ;
struct TYPE_15__ {int * last; } ;
typedef TYPE_10__ ngx_buf_t ;
struct TYPE_21__ {scalar_t__ number; TYPE_7__ addr_text; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_9__* FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,int) ;
 TYPE_10__* FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 int * FUNC_4 (int *,char*,int ) ;

ngx_chain_t *
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_pool_t *VAR_3)
{
    ngx_chain_t *VAR_4;
    ngx_buf_t *VAR_5;
    ngx_str_t *VAR_6;

    VAR_6 = &VAR_2->connection->addr_text;

    VAR_4 = FUNC_0(VAR_3);
    if (VAR_4 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_5 = FUNC_2(VAR_3,
            sizeof("app=") - 1 + VAR_2->app.len * 3 +
            sizeof("&flashver=") - 1 + VAR_2->flashver.len * 3 +
            sizeof("&swfurl=") - 1 + VAR_2->swf_url.len * 3 +
            sizeof("&tcurl=") - 1 + VAR_2->tc_url.len * 3 +
            sizeof("&pageurl=") - 1 + VAR_2->page_url.len * 3 +
            sizeof("&addr=") - 1 + VAR_6->len * 3 +
            sizeof("&clientid=") - 1 + VAR_1
        );

    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_4->buf = VAR_5;
    VAR_4->next = ((void*)0);

    VAR_5->last = FUNC_1(VAR_5->last, (u_char*) "app=", sizeof("app=") - 1);
    VAR_5->last = (u_char*) FUNC_3(VAR_5->last, VAR_2->app.data, VAR_2->app.len,
                                       VAR_0);

    VAR_5->last = FUNC_1(VAR_5->last, (u_char*) "&flashver=",
                         sizeof("&flashver=") - 1);
    VAR_5->last = (u_char*) FUNC_3(VAR_5->last, VAR_2->flashver.data,
                                       VAR_2->flashver.len, VAR_0);

    VAR_5->last = FUNC_1(VAR_5->last, (u_char*) "&swfurl=",
                         sizeof("&swfurl=") - 1);
    VAR_5->last = (u_char*) FUNC_3(VAR_5->last, VAR_2->swf_url.data,
                                       VAR_2->swf_url.len, VAR_0);

    VAR_5->last = FUNC_1(VAR_5->last, (u_char*) "&tcurl=",
                         sizeof("&tcurl=") - 1);
    VAR_5->last = (u_char*) FUNC_3(VAR_5->last, VAR_2->tc_url.data,
                                       VAR_2->tc_url.len, VAR_0);

    VAR_5->last = FUNC_1(VAR_5->last, (u_char*) "&pageurl=",
                         sizeof("&pageurl=") - 1);
    VAR_5->last = (u_char*) FUNC_3(VAR_5->last, VAR_2->page_url.data,
                                       VAR_2->page_url.len, VAR_0);

    VAR_5->last = FUNC_1(VAR_5->last, (u_char*) "&addr=", sizeof("&addr=") - 1);
    VAR_5->last = (u_char*) FUNC_3(VAR_5->last, VAR_6->data,
                                       VAR_6->len, VAR_0);

    VAR_5->last = FUNC_1(VAR_5->last, (u_char*) "&clientid=",
                         sizeof("&clientid=") - 1);
    VAR_5->last = FUNC_4(VAR_5->last, "%ui", (ngx_uint_t) VAR_2->connection->number);

    return VAR_4;
}
