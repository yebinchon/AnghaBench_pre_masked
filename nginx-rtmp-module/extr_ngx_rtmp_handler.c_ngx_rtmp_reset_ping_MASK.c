
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; int ping_evt; scalar_t__ ping_reset; scalar_t__ ping_active; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_9__ {scalar_t__ ping; } ;
typedef TYPE_3__ ngx_rtmp_core_srv_conf_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int VAR_1 ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;

void
FUNC_3(ngx_rtmp_session_t *VAR_2)
{
    ngx_rtmp_core_srv_conf_t *VAR_3;

    VAR_3 = FUNC_2(VAR_2, VAR_1);
    if (VAR_3->ping == 0) {
        return;
    }

    VAR_2->ping_active = 0;
    VAR_2->ping_reset = 0;
    FUNC_0(&VAR_2->ping_evt, VAR_3->ping);

    FUNC_1(VAR_0, VAR_2->connection->log, 0,
            "ping: wait %Mms", VAR_3->ping);
}
