
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {TYPE_1__* connection; scalar_t__ auto_pushed; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_19__ {int path; int recorder; } ;
typedef TYPE_4__ ngx_rtmp_record_done_t ;
struct TYPE_20__ {TYPE_2__** url; } ;
typedef TYPE_5__ ngx_rtmp_notify_app_conf_t ;
struct TYPE_21__ {TYPE_4__* arg; int create; TYPE_2__* url; } ;
typedef TYPE_6__ ngx_rtmp_netcall_init_t ;
typedef int ngx_int_t ;
typedef int ci ;
struct TYPE_17__ {int url; } ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (int ,int ,int ,char*,int *,int *,int *) ;
 int FUNC_2 (TYPE_6__*,int) ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_4, ngx_rtmp_record_done_t *VAR_5)
{
    ngx_rtmp_netcall_init_t VAR_6;
    ngx_rtmp_notify_app_conf_t *VAR_7;

    if (VAR_4->auto_pushed) {
        goto next;
    }

    VAR_7 = FUNC_3(VAR_4, VAR_2);
    if (VAR_7 == ((void*)0) || VAR_7->url[VAR_1] == ((void*)0)) {
        goto next;
    }

    FUNC_1(VAR_0, VAR_4->connection->log, 0,
                  "notify: record_done recorder=%V path='%V' url='%V'",
                  &VAR_5->recorder, &VAR_5->path,
                  &VAR_7->url[VAR_1]->url);

    FUNC_2(&VAR_6, sizeof(VAR_6));

    VAR_6.url = VAR_7->url[VAR_1];
    VAR_6.create = VAR_3;
    VAR_6.arg = VAR_5;

    FUNC_4(VAR_4, &VAR_6);

next:
    return FUNC_0(VAR_4, VAR_5);
}
