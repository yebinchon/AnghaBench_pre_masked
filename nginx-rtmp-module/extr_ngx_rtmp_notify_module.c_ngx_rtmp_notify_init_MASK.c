
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
struct TYPE_18__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_21__ {int handler; int log; TYPE_1__* data; scalar_t__ timer_set; } ;
struct TYPE_19__ {TYPE_5__ update_evt; int start; int flags; int args; int name; } ;
typedef TYPE_3__ ngx_rtmp_notify_ctx_t ;
struct TYPE_20__ {scalar_t__ update_timeout; int ** url; int active; } ;
typedef TYPE_4__ ngx_rtmp_notify_app_conf_t ;
typedef TYPE_5__ ngx_event_t ;
struct TYPE_17__ {int log; int pool; } ;
struct TYPE_16__ {int sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (TYPE_5__*,scalar_t__) ;
 TYPE_14__* VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_2 (int ,int *,int ) ;
 TYPE_3__* FUNC_3 (int ,int) ;
 TYPE_4__* FUNC_4 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_7(ngx_rtmp_session_t *VAR_7,
        u_char VAR_8[VAR_2], u_char VAR_9[VAR_1],
        ngx_uint_t VAR_10)
{
    ngx_rtmp_notify_ctx_t *VAR_11;
    ngx_rtmp_notify_app_conf_t *VAR_12;
    ngx_event_t *VAR_13;

    VAR_12 = FUNC_4(VAR_7, VAR_5);
    if (!VAR_12->active) {
        return;
    }

    VAR_11 = FUNC_5(VAR_7, VAR_5);

    if (VAR_11 == ((void*)0)) {
        VAR_11 = FUNC_3(VAR_7->connection->pool, sizeof(ngx_rtmp_notify_ctx_t));
        if (VAR_11 == ((void*)0)) {
            return;
        }

        FUNC_6(VAR_7, VAR_11, VAR_5);
    }

    FUNC_2(VAR_11->name, VAR_8, VAR_2);
    FUNC_2(VAR_11->args, VAR_9, VAR_1);

    VAR_11->flags |= VAR_10;

    if (VAR_12->url[VAR_3] == ((void*)0) ||
        VAR_12->update_timeout == 0)
    {
        return;
    }

    if (VAR_11->update_evt.timer_set) {
        return;
    }

    VAR_11->start = VAR_4->sec;

    VAR_13 = &VAR_11->update_evt;

    VAR_13->data = VAR_7->connection;
    VAR_13->log = VAR_7->connection->log;
    VAR_13->handler = VAR_6;

    FUNC_0(VAR_13, VAR_12->update_timeout);

    FUNC_1(VAR_0, VAR_7->connection->log, 0,
                   "notify: schedule initial update %Mms",
                   VAR_12->update_timeout);
}
