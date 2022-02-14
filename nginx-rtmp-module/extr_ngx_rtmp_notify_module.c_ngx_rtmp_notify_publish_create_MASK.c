
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_rtmp_session_t ;
struct TYPE_9__ {int * args; int * type; int * name; } ;
typedef TYPE_1__ ngx_rtmp_publish_t ;
typedef int ngx_pool_t ;
struct TYPE_10__ {int * next; TYPE_3__* buf; } ;
typedef TYPE_2__ ngx_chain_t ;
struct TYPE_11__ {int * last; } ;
typedef TYPE_3__ ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;
 void* FUNC_1 (int *,int *,size_t) ;
 TYPE_3__* FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int *,size_t,int ) ;
 TYPE_2__* FUNC_4 (int *,int *,int ,TYPE_2__*) ;
 size_t FUNC_5 (int *) ;

__attribute__((used)) static ngx_chain_t *
FUNC_6(ngx_rtmp_session_t *VAR_2, void *VAR_3,
        ngx_pool_t *VAR_4)
{
    ngx_rtmp_publish_t *VAR_5 = VAR_3;

    ngx_chain_t *VAR_6;
    ngx_buf_t *VAR_7;
    size_t VAR_8, VAR_9, VAR_10;

    VAR_6 = FUNC_0(VAR_4);
    if (VAR_6 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8 = FUNC_5(VAR_5->name);
    VAR_9 = FUNC_5(VAR_5->type);
    VAR_10 = FUNC_5(VAR_5->args);

    VAR_7 = FUNC_2(VAR_4,
                            sizeof("&call=publish") +
                            sizeof("&name=") + VAR_8 * 3 +
                            sizeof("&type=") + VAR_9 * 3 +
                            1 + VAR_10);
    if (VAR_7 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_6->buf = VAR_7;
    VAR_6->next = ((void*)0);

    VAR_7->last = FUNC_1(VAR_7->last, (u_char*) "&call=publish",
                         sizeof("&call=publish") - 1);

    VAR_7->last = FUNC_1(VAR_7->last, (u_char*) "&name=", sizeof("&name=") - 1);
    VAR_7->last = (u_char*) FUNC_3(VAR_7->last, VAR_5->name, VAR_8,
                                       VAR_0);

    VAR_7->last = FUNC_1(VAR_7->last, (u_char*) "&type=", sizeof("&type=") - 1);
    VAR_7->last = (u_char*) FUNC_3(VAR_7->last, VAR_5->type, VAR_9,
                                       VAR_0);

    if (VAR_10) {
        *VAR_7->last++ = '&';
        VAR_7->last = (u_char *) FUNC_1(VAR_7->last, VAR_5->args, VAR_10);
    }

    return FUNC_4(VAR_2, VAR_4, VAR_1, VAR_6);
}
