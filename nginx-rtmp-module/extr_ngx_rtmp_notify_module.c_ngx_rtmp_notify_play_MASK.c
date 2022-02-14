
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int url; } ;
typedef TYPE_2__ ngx_url_t ;
struct TYPE_19__ {TYPE_1__* connection; scalar_t__ auto_pushed; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_20__ {int args; int name; } ;
typedef TYPE_4__ ngx_rtmp_play_t ;
struct TYPE_21__ {TYPE_2__** url; } ;
typedef TYPE_5__ ngx_rtmp_notify_app_conf_t ;
struct TYPE_22__ {int argsize; TYPE_4__* arg; int handle; int create; TYPE_2__* url; } ;
typedef TYPE_6__ ngx_rtmp_netcall_init_t ;
typedef int ngx_int_t ;
typedef int ci ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;
 int FUNC_2 (TYPE_6__*,int) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_6, ngx_rtmp_play_t *VAR_7)
{
    ngx_rtmp_notify_app_conf_t *VAR_8;
    ngx_rtmp_netcall_init_t VAR_9;
    ngx_url_t *VAR_10;

    if (VAR_6->auto_pushed) {
        goto next;
    }

    VAR_8 = FUNC_3(VAR_6, VAR_3);
    if (VAR_8 == ((void*)0)) {
        goto next;
    }

    VAR_10 = VAR_8->url[VAR_1];

    FUNC_5(VAR_6, VAR_7->name, VAR_7->args, VAR_2);

    if (VAR_10 == ((void*)0)) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_6->connection->log, 0,
                  "notify: play '%V'", &VAR_10->url);

    FUNC_2(&VAR_9, sizeof(VAR_9));

    VAR_9.url = VAR_10;
    VAR_9.create = VAR_4;
    VAR_9.handle = VAR_5;
    VAR_9.arg = VAR_7;
    VAR_9.argsize = sizeof(*VAR_7);

    return FUNC_4(VAR_6, &VAR_9);

next:
    return FUNC_0(VAR_6, VAR_7);
}
