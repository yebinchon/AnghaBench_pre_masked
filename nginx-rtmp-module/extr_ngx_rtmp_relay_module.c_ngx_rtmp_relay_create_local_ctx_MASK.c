
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_14__ {TYPE_2__* connection; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_relay_target_t ;
struct TYPE_12__ {int handler; int log; TYPE_3__* data; } ;
struct TYPE_15__ {int name; scalar_t__ publish; TYPE_1__ push_evt; TYPE_3__* session; } ;
typedef TYPE_4__ ngx_rtmp_relay_ctx_t ;
struct TYPE_13__ {int pool; int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_1 (int ,int) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,TYPE_4__*,int ) ;

__attribute__((used)) static ngx_rtmp_relay_ctx_t *
FUNC_5(ngx_rtmp_session_t *VAR_4, ngx_str_t *VAR_5,
        ngx_rtmp_relay_target_t *VAR_6)
{
    ngx_rtmp_relay_ctx_t *VAR_7;

    FUNC_0(VAR_0, VAR_4->connection->log, 0,
                   "relay: create local context");

    VAR_7 = FUNC_2(VAR_4, VAR_2);
    if (VAR_7 == ((void*)0)) {
        VAR_7 = FUNC_1(VAR_4->connection->pool, sizeof(ngx_rtmp_relay_ctx_t));
        if (VAR_7 == ((void*)0)) {
            return ((void*)0);
        }
        FUNC_4(VAR_4, VAR_7, VAR_2);
    }
    VAR_7->session = VAR_4;

    VAR_7->push_evt.data = VAR_4;
    VAR_7->push_evt.log = VAR_4->connection->log;
    VAR_7->push_evt.handler = VAR_3;

    if (VAR_7->publish) {
        return ((void*)0);
    }

    if (FUNC_3(VAR_4->connection->pool, &VAR_7->name, VAR_5)
            != VAR_1)
    {
        return ((void*)0);
    }

    return VAR_7;
}
