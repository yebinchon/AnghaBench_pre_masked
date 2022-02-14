
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int uri; int host; } ;
typedef TYPE_1__ ngx_url_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_12__ {scalar_t__ method; TYPE_1__** url; } ;
typedef TYPE_2__ ngx_rtmp_notify_app_conf_t ;
typedef int ngx_pool_t ;
struct TYPE_13__ {struct TYPE_13__* next; } ;
typedef TYPE_3__ ngx_chain_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_3__* FUNC_1 (scalar_t__,int *,int *,TYPE_3__*,TYPE_3__*,int *,int *) ;
 TYPE_3__* FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static ngx_chain_t *
FUNC_3(ngx_rtmp_session_t *VAR_3, ngx_pool_t *VAR_4,
                                   ngx_uint_t VAR_5, ngx_chain_t *VAR_6)
{
    ngx_rtmp_notify_app_conf_t *VAR_7;
    ngx_chain_t *VAR_8, *VAR_9, *VAR_10;
    ngx_url_t *VAR_11;

    VAR_7 = FUNC_0(VAR_3, VAR_1);

    VAR_11 = VAR_7->url[VAR_5];

    VAR_8 = FUNC_2(VAR_3, VAR_4);
    if (VAR_8 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_8->next = VAR_6;

    VAR_9 = ((void*)0);

    if (VAR_7->method == VAR_0) {
        VAR_10 = VAR_8;
        VAR_8 = VAR_9;
        VAR_9 = VAR_10;
    }

    return FUNC_1(VAR_7->method, &VAR_11->host,
                                                &VAR_11->uri, VAR_8, VAR_9, VAR_4,
                                                &VAR_2);
}
