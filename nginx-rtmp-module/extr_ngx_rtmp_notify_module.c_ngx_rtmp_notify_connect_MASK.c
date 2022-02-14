
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
struct TYPE_17__ {int argsize; int * arg; int handle; int create; TYPE_2__* url; } ;
typedef TYPE_5__ ngx_rtmp_netcall_init_t ;
typedef int ngx_rtmp_connect_t ;
typedef int ngx_int_t ;
typedef int ci ;
struct TYPE_13__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_5__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_5, ngx_rtmp_connect_t *VAR_6)
{
    ngx_rtmp_notify_srv_conf_t *VAR_7;
    ngx_rtmp_netcall_init_t VAR_8;
    ngx_url_t *VAR_9;

    if (VAR_5->auto_pushed || VAR_5->relay) {
        goto next;
    }

    VAR_7 = FUNC_3(VAR_5, VAR_4);

    VAR_9 = VAR_7->url[VAR_1];
    if (VAR_9 == ((void*)0)) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_5->connection->log, 0,
                  "notify: connect '%V'", &VAR_9->url);

    FUNC_2(&VAR_8, sizeof(VAR_8));

    VAR_8.url = VAR_9;
    VAR_8.create = VAR_2;
    VAR_8.handle = VAR_3;
    VAR_8.arg = VAR_6;
    VAR_8.argsize = sizeof(*VAR_6);

    return FUNC_4(VAR_5, &VAR_8);

next:
    return FUNC_0(VAR_5, VAR_6);
}
