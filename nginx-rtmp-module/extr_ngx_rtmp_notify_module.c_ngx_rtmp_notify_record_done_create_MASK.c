
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_rtmp_session_t ;
struct TYPE_14__ {int len; int * data; } ;
struct TYPE_13__ {int len; int * data; } ;
struct TYPE_15__ {TYPE_2__ path; TYPE_1__ recorder; } ;
typedef TYPE_3__ ngx_rtmp_record_done_t ;
struct TYPE_16__ {int * args; int * name; } ;
typedef TYPE_4__ ngx_rtmp_notify_ctx_t ;
typedef int ngx_pool_t ;
struct TYPE_17__ {int * next; TYPE_6__* buf; } ;
typedef TYPE_5__ ngx_chain_t ;
struct TYPE_18__ {int * last; } ;
typedef TYPE_6__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,size_t) ;
 TYPE_6__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,size_t,int ) ;
 TYPE_4__* FUNC_4 (int *,int ) ;
 TYPE_5__* FUNC_5 (int *,int *,int ,TYPE_5__*) ;
 int VAR_2 ;
 size_t FUNC_6 (int *) ;

__attribute__((used)) static ngx_chain_t *
FUNC_7(ngx_rtmp_session_t *VAR_3, void *VAR_4,
                                   ngx_pool_t *VAR_5)
{
    ngx_rtmp_record_done_t *VAR_6 = VAR_4;

    ngx_rtmp_notify_ctx_t *VAR_7;
    ngx_chain_t *VAR_8;
    ngx_buf_t *VAR_9;
    size_t VAR_10, VAR_11;

    VAR_7 = FUNC_4(VAR_3, VAR_2);

    VAR_8 = FUNC_0(VAR_5);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_10 = FUNC_6(VAR_7->name);
    VAR_11 = FUNC_6(VAR_7->args);

    VAR_9 = FUNC_2(VAR_5,
                            sizeof("&call=record_done") +
                            sizeof("&recorder=") + VAR_6->recorder.len +
                            sizeof("&name=") + VAR_10 * 3 +
                            sizeof("&path=") + VAR_6->path.len * 3 +
                            1 + VAR_11);
    if (VAR_9 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->buf = VAR_9;
    VAR_8->next = ((void*)0);

    VAR_9->last = FUNC_1(VAR_9->last, (u_char*) "&call=record_done",
                         sizeof("&call=record_done") - 1);

    VAR_9->last = FUNC_1(VAR_9->last, (u_char *) "&recorder=",
                         sizeof("&recorder=") - 1);
    VAR_9->last = (u_char*) FUNC_3(VAR_9->last, VAR_6->recorder.data,
                                       VAR_6->recorder.len, VAR_0);

    VAR_9->last = FUNC_1(VAR_9->last, (u_char*) "&name=", sizeof("&name=") - 1);
    VAR_9->last = (u_char*) FUNC_3(VAR_9->last, VAR_7->name, VAR_10,
                                       VAR_0);

    VAR_9->last = FUNC_1(VAR_9->last, (u_char*) "&path=", sizeof("&path=") - 1);
    VAR_9->last = (u_char*) FUNC_3(VAR_9->last, VAR_6->path.data, VAR_6->path.len,
                                       VAR_0);

    if (VAR_11) {
        *VAR_9->last++ = '&';
        VAR_9->last = (u_char *) FUNC_1(VAR_9->last, VAR_7->args, VAR_11);
    }

    return FUNC_5(VAR_3, VAR_5, VAR_1,
                                          VAR_8);
}
