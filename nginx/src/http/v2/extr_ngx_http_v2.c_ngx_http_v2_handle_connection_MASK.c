
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;
typedef struct TYPE_14__ TYPE_12__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_18__ {int idle_timeout; int recv_timeout; } ;
typedef TYPE_3__ ngx_http_v2_srv_conf_t ;
struct TYPE_17__ {scalar_t__ incomplete; } ;
struct TYPE_19__ {int blocked; int * free_fake_connections; scalar_t__ frames; int * free_frames; int * pool; TYPE_2__ state; TYPE_1__* http_connection; scalar_t__ goaway; TYPE_5__* connection; scalar_t__ pushing; scalar_t__ processing; scalar_t__ last_out; } ;
typedef TYPE_4__ ngx_http_v2_connection_t ;
struct TYPE_20__ {int destroyed; TYPE_13__* read; TYPE_12__* write; scalar_t__ ssl; scalar_t__ buffered; scalar_t__ error; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_16__ {int conf_ctx; } ;
struct TYPE_15__ {int handler; } ;
struct TYPE_14__ {scalar_t__ timer_set; int handler; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_13__*,int ) ;
 int FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,int) ;
 int FUNC_7 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_8(ngx_http_v2_connection_t *VAR_5)
{
    ngx_int_t VAR_6;
    ngx_connection_t *VAR_7;
    ngx_http_v2_srv_conf_t *VAR_8;

    if (VAR_5->last_out || VAR_5->processing || VAR_5->pushing) {
        return;
    }

    VAR_7 = VAR_5->connection;

    if (VAR_7->error) {
        FUNC_3(VAR_7);
        return;
    }

    if (VAR_7->buffered) {
        VAR_5->blocked = 1;

        VAR_6 = FUNC_5(VAR_5);

        VAR_5->blocked = 0;

        if (VAR_6 == VAR_1) {
            FUNC_3(VAR_7);
            return;
        }

        if (VAR_6 == VAR_0) {
            return;
        }


    }

    if (VAR_5->goaway) {
        FUNC_3(VAR_7);
        return;
    }

    VAR_8 = FUNC_4(VAR_5->http_connection->conf_ctx,
                                         VAR_4);
    if (VAR_5->state.incomplete) {
        FUNC_0(VAR_7->read, VAR_8->recv_timeout);
        return;
    }

    FUNC_2(VAR_5->pool);

    VAR_5->pool = ((void*)0);
    VAR_5->free_frames = ((void*)0);
    VAR_5->frames = 0;
    VAR_5->free_fake_connections = ((void*)0);







    VAR_7->destroyed = 1;
    FUNC_6(VAR_7, 1);

    VAR_7->write->handler = VAR_2;
    VAR_7->read->handler = VAR_3;

    if (VAR_7->write->timer_set) {
        FUNC_1(VAR_7->write);
    }

    FUNC_0(VAR_7->read, VAR_8->idle_timeout);
}
