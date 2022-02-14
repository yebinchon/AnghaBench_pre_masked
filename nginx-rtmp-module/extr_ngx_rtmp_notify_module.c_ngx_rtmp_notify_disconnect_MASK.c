
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int url; } ;
typedef TYPE_2__ ngx_url_t ;
struct TYPE_15__ {TYPE_1__* connection; scalar_t__ relay; scalar_t__ auto_pushed; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_16__ {TYPE_2__** url; } ;
typedef TYPE_4__ ngx_rtmp_notify_srv_conf_t ;
struct TYPE_17__ {int create; TYPE_2__* url; } ;
typedef TYPE_5__ ngx_rtmp_netcall_init_t ;
typedef int ngx_int_t ;
typedef int ci ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_4)
{
    ngx_rtmp_notify_srv_conf_t *VAR_5;
    ngx_rtmp_netcall_init_t VAR_6;
    ngx_url_t *VAR_7;

    if (VAR_4->auto_pushed || VAR_4->relay) {
        goto next;
    }

    VAR_5 = FUNC_3(VAR_4, VAR_3);

    VAR_7 = VAR_5->url[VAR_1];
    if (VAR_7 == ((void*)0)) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_4->connection->log, 0,
                  "notify: disconnect '%V'", &VAR_7->url);

    FUNC_2(&VAR_6, sizeof(VAR_6));

    VAR_6.url = VAR_7;
    VAR_6.create = VAR_2;

    FUNC_4(VAR_4, &VAR_6);

next:
    return FUNC_0(VAR_4);
}
