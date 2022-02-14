
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_10__ {int log; TYPE_2__* ssl; TYPE_6__* write; TYPE_1__* read; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_11__ {int ready; int * handler; } ;
struct TYPE_9__ {int no_wait_shutdown; int no_send_shutdown; int * saved_write_handler; int connection; scalar_t__ renegotiation; } ;
struct TYPE_8__ {scalar_t__ ready; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ) ;
 int FUNC_4 (int ,int ,int ,char*) ;
 int FUNC_5 (int ,int ,int ,char*,int) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 int FUNC_7 (TYPE_6__*,int *) ;
 int VAR_12 ;
 int FUNC_8 (TYPE_3__*,int,int ,char*) ;
 int FUNC_9 (int ,int ,int ,char*) ;
 int * VAR_13 ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_connection_t *VAR_14, int VAR_15)
{
    int VAR_16;
    ngx_err_t VAR_17;



    if (VAR_14->ssl->renegotiation) {






        FUNC_6(VAR_5, VAR_14->log, 0, "SSL renegotiation disabled");

        while (FUNC_1()) {
            FUNC_9(VAR_3, VAR_14->log, 0,
                          "ignoring stale global SSL error");
        }

        FUNC_0();

        VAR_14->ssl->no_wait_shutdown = 1;
        VAR_14->ssl->no_send_shutdown = 1;

        return VAR_2;
    }



    if (VAR_15 > 0) {

        if (VAR_14->ssl->saved_write_handler) {

            VAR_14->write->handler = VAR_14->ssl->saved_write_handler;
            VAR_14->ssl->saved_write_handler = ((void*)0);
            VAR_14->write->ready = 1;

            if (FUNC_3(VAR_14->write, 0) != VAR_6) {
                return VAR_2;
            }

            FUNC_7(VAR_14->write, &VAR_12);
        }

        return VAR_6;
    }

    VAR_16 = FUNC_2(VAR_14->ssl->connection, VAR_15);

    VAR_17 = (VAR_16 == VAR_7) ? VAR_11 : 0;

    FUNC_5(VAR_4, VAR_14->log, 0, "SSL_get_error: %d", VAR_16);

    if (VAR_16 == VAR_8) {

        if (VAR_14->ssl->saved_write_handler) {

            VAR_14->write->handler = VAR_14->ssl->saved_write_handler;
            VAR_14->ssl->saved_write_handler = ((void*)0);
            VAR_14->write->ready = 1;

            if (FUNC_3(VAR_14->write, 0) != VAR_6) {
                return VAR_2;
            }

            FUNC_7(VAR_14->write, &VAR_12);
        }

        VAR_14->read->ready = 0;
        return VAR_0;
    }

    if (VAR_16 == VAR_9) {

        FUNC_4(VAR_4, VAR_14->log, 0,
                       "SSL_read: want write");

        VAR_14->write->ready = 0;

        if (FUNC_3(VAR_14->write, 0) != VAR_6) {
            return VAR_2;
        }





        if (VAR_14->ssl->saved_write_handler == ((void*)0)) {
            VAR_14->ssl->saved_write_handler = VAR_14->write->handler;
            VAR_14->write->handler = VAR_13;
        }

        return VAR_0;
    }

    VAR_14->ssl->no_wait_shutdown = 1;
    VAR_14->ssl->no_send_shutdown = 1;

    if (VAR_16 == VAR_10 || FUNC_1() == 0) {
        FUNC_4(VAR_4, VAR_14->log, 0,
                       "peer shutdown SSL cleanly");
        return VAR_1;
    }

    FUNC_8(VAR_14, VAR_16, VAR_17, "SSL_read() failed");

    return VAR_2;
}
