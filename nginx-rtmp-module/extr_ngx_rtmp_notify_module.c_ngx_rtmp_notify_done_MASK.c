
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
struct TYPE_14__ {int url; } ;
typedef TYPE_2__ ngx_url_t ;
typedef size_t ngx_uint_t ;
struct TYPE_15__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_16__ {size_t url_idx; int * cbname; } ;
typedef TYPE_4__ ngx_rtmp_notify_done_t ;
struct TYPE_17__ {TYPE_2__** url; } ;
typedef TYPE_5__ ngx_rtmp_notify_app_conf_t ;
struct TYPE_18__ {int create; TYPE_4__* arg; TYPE_2__* url; } ;
typedef TYPE_6__ ngx_rtmp_netcall_init_t ;
typedef int ngx_int_t ;
typedef int ci ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*,char*,int *) ;
 int FUNC_1 (TYPE_6__*,int) ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_4, char *VAR_5, ngx_uint_t VAR_6)
{
    ngx_rtmp_netcall_init_t VAR_7;
    ngx_rtmp_notify_done_t VAR_8;
    ngx_rtmp_notify_app_conf_t *VAR_9;
    ngx_url_t *VAR_10;

    VAR_9 = FUNC_2(VAR_4, VAR_3);

    VAR_10 = VAR_9->url[VAR_6];
    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    FUNC_0(VAR_0, VAR_4->connection->log, 0,
                  "notify: %s '%V'", VAR_5, &VAR_10->url);

    VAR_8.cbname = (u_char *) VAR_5;
    VAR_8.url_idx = VAR_6;

    FUNC_1(&VAR_7, sizeof(VAR_7));

    VAR_7.url = VAR_10;
    VAR_7.arg = &VAR_8;
    VAR_7.create = VAR_2;

    return FUNC_3(VAR_4, &VAR_7);
}
