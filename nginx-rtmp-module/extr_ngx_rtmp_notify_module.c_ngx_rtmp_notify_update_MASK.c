
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int url; } ;
typedef TYPE_2__ ngx_url_t ;
struct TYPE_17__ {TYPE_1__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_18__ {TYPE_2__** url; } ;
typedef TYPE_4__ ngx_rtmp_notify_app_conf_t ;
struct TYPE_19__ {int (* handle ) (TYPE_3__*,int *,int *) ;int create; TYPE_2__* url; } ;
typedef TYPE_5__ ngx_rtmp_netcall_init_t ;
struct TYPE_20__ {TYPE_7__* data; } ;
typedef TYPE_6__ ngx_event_t ;
struct TYPE_21__ {TYPE_3__* data; } ;
typedef TYPE_7__ ngx_connection_t ;
typedef int ci ;
struct TYPE_15__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int ,char*,int *) ;
 int FUNC_1 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_5__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*,int *,int *) ;

__attribute__((used)) static void
FUNC_5(ngx_event_t *VAR_5)
{
    ngx_connection_t *VAR_6;
    ngx_rtmp_session_t *VAR_7;
    ngx_rtmp_notify_app_conf_t *VAR_8;
    ngx_rtmp_netcall_init_t VAR_9;
    ngx_url_t *VAR_10;

    VAR_6 = VAR_5->data;
    VAR_7 = VAR_6->data;

    VAR_8 = FUNC_2(VAR_7, VAR_3);

    VAR_10 = VAR_8->url[VAR_2];

    FUNC_0(VAR_0, VAR_7->connection->log, 0,
                  "notify: update '%V'", &VAR_10->url);

    FUNC_1(&VAR_9, sizeof(VAR_9));

    VAR_9.url = VAR_10;
    VAR_9.create = VAR_4;
    VAR_9.handle = FUNC_4;

    if (FUNC_3(VAR_7, &VAR_9) == VAR_1) {
        return;
    }



    FUNC_4(VAR_7, ((void*)0), ((void*)0));
}
