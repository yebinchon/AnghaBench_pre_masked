
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_9__ {TYPE_4__* data; } ;
typedef TYPE_3__ ngx_event_t ;
struct TYPE_10__ {TYPE_2__* data; } ;
typedef TYPE_4__ ngx_connection_t ;
struct TYPE_7__ {int log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(ngx_event_t *VAR_1)
{
    ngx_connection_t *VAR_2;
    ngx_rtmp_session_t *VAR_3;

    VAR_2 = VAR_1->data;
    VAR_3 = VAR_2->data;

    FUNC_0(VAR_0, VAR_3->connection->log, 0,
                  "live: drop idle publisher");

    FUNC_1(VAR_3);
}
