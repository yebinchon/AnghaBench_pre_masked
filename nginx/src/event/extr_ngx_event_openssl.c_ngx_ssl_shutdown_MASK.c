
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_9__ {TYPE_1__* ssl; TYPE_6__* read; TYPE_5__* write; int log; scalar_t__ timedout; } ;
typedef TYPE_2__ ngx_connection_t ;
struct TYPE_11__ {void* handler; } ;
struct TYPE_10__ {void* handler; } ;
struct TYPE_8__ {int connection; scalar_t__ no_send_shutdown; scalar_t__ no_wait_shutdown; } ;


 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_5__*,int ) ;
 int FUNC_11 (int ,int ,int ,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*,int,int ,char*) ;
 void* VAR_11 ;

ngx_int_t
FUNC_14(ngx_connection_t *VAR_12)
{
    int VAR_13, VAR_14, VAR_15;
    ngx_err_t VAR_16;

    if (FUNC_4(VAR_12->ssl->connection)) {






        FUNC_1(VAR_12->ssl->connection);
        VAR_12->ssl = ((void*)0);

        return VAR_3;
    }

    if (VAR_12->timedout) {
        VAR_15 = VAR_8|VAR_9;
        FUNC_5(VAR_12->ssl->connection, 1);

    } else {
        VAR_15 = FUNC_3(VAR_12->ssl->connection);

        if (VAR_12->ssl->no_wait_shutdown) {
            VAR_15 |= VAR_8;
        }

        if (VAR_12->ssl->no_send_shutdown) {
            VAR_15 |= VAR_9;
        }

        if (VAR_12->ssl->no_wait_shutdown && VAR_12->ssl->no_send_shutdown) {
            FUNC_5(VAR_12->ssl->connection, 1);
        }
    }

    FUNC_6(VAR_12->ssl->connection, VAR_15);

    FUNC_12(VAR_12->log);

    VAR_13 = FUNC_7(VAR_12->ssl->connection);

    FUNC_11(VAR_2, VAR_12->log, 0, "SSL_shutdown: %d", VAR_13);

    VAR_14 = 0;



    if (VAR_13 != 1 && FUNC_0()) {
        VAR_14 = FUNC_2(VAR_12->ssl->connection, VAR_13);

        FUNC_11(VAR_2, VAR_12->log, 0,
                       "SSL_get_error: %d", VAR_14);
    }

    if (VAR_13 == 1 || VAR_14 == 0 || VAR_14 == VAR_7) {
        FUNC_1(VAR_12->ssl->connection);
        VAR_12->ssl = ((void*)0);

        return VAR_3;
    }

    if (VAR_14 == VAR_5 || VAR_14 == VAR_6) {
        VAR_12->read->handler = VAR_11;
        VAR_12->write->handler = VAR_11;

        if (FUNC_9(VAR_12->read, 0) != VAR_3) {
            return VAR_1;
        }

        if (FUNC_10(VAR_12->write, 0) != VAR_3) {
            return VAR_1;
        }

        if (VAR_14 == VAR_5) {
            FUNC_8(VAR_12->read, 30000);
        }

        return VAR_0;
    }

    VAR_16 = (VAR_14 == VAR_4) ? VAR_10 : 0;

    FUNC_13(VAR_12, VAR_14, VAR_16, "SSL_shutdown() failed");

    FUNC_1(VAR_12->ssl->connection);
    VAR_12->ssl = ((void*)0);

    return VAR_1;
}
