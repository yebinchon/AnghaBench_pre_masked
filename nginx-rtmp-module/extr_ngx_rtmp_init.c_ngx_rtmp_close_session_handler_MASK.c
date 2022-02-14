
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ timer_set; } ;
struct TYPE_10__ {int out_queue; int out_pos; int * out; int out_last; scalar_t__ in_pool; scalar_t__ in_old_pool; TYPE_9__ ping_evt; TYPE_3__* connection; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
struct TYPE_11__ {TYPE_1__* data; } ;
typedef TYPE_2__ ngx_event_t ;
struct TYPE_12__ {int log; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_9__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *,int ) ;
 int * FUNC_7 (TYPE_1__*,int ) ;

__attribute__((used)) static void
FUNC_8(ngx_event_t *VAR_3)
{
    ngx_rtmp_session_t *VAR_4;
    ngx_connection_t *VAR_5;
    ngx_rtmp_core_srv_conf_t *VAR_6;

    VAR_4 = VAR_3->data;
    VAR_5 = VAR_4->connection;

    VAR_6 = FUNC_7(VAR_4, VAR_2);

    FUNC_2(VAR_0, VAR_5->log, 0, "close session");

    FUNC_4(VAR_4, VAR_1, ((void*)0), ((void*)0));

    if (VAR_4->ping_evt.timer_set) {
        FUNC_0(&VAR_4->ping_evt);
    }

    if (VAR_4->in_old_pool) {
        FUNC_1(VAR_4->in_old_pool);
    }

    if (VAR_4->in_pool) {
        FUNC_1(VAR_4->in_pool);
    }

    FUNC_5(VAR_4);

    while (VAR_4->out_pos != VAR_4->out_last) {
        FUNC_6(VAR_6, VAR_4->out[VAR_4->out_pos++]);
        VAR_4->out_pos %= VAR_4->out_queue;
    }

    FUNC_3(VAR_5);
}
