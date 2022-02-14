
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_char ;
typedef int ssize_t ;
typedef int ngx_err_t ;
struct TYPE_11__ {int sent; TYPE_2__* write; TYPE_1__* ssl; TYPE_7__* read; int log; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_12__ {int ready; int * handler; } ;
struct TYPE_10__ {int error; scalar_t__ ready; } ;
struct TYPE_9__ {int no_wait_shutdown; int no_send_shutdown; int * saved_read_handler; int connection; scalar_t__ in_early; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int *,size_t) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,int) ;
 int FUNC_5 (TYPE_7__*,int *) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_3__*,int,int ,char*) ;
 int * VAR_9 ;
 int FUNC_8 (TYPE_3__*,int *,size_t) ;

ssize_t
FUNC_9(ngx_connection_t *VAR_10, u_char *VAR_11, size_t VAR_12)
{
    int VAR_13, VAR_14;
    ngx_err_t VAR_15;







    FUNC_6(VAR_10->log);

    FUNC_4(VAR_2, VAR_10->log, 0, "SSL to write: %uz", VAR_12);

    VAR_13 = FUNC_1(VAR_10->ssl->connection, VAR_11, VAR_12);

    FUNC_4(VAR_2, VAR_10->log, 0, "SSL_write: %d", VAR_13);

    if (VAR_13 > 0) {

        if (VAR_10->ssl->saved_read_handler) {

            VAR_10->read->handler = VAR_10->ssl->saved_read_handler;
            VAR_10->ssl->saved_read_handler = ((void*)0);
            VAR_10->read->ready = 1;

            if (FUNC_2(VAR_10->read, 0) != VAR_3) {
                return VAR_1;
            }

            FUNC_5(VAR_10->read, &VAR_8);
        }

        VAR_10->sent += VAR_13;

        return VAR_13;
    }

    VAR_14 = FUNC_0(VAR_10->ssl->connection, VAR_13);

    VAR_15 = (VAR_14 == VAR_4) ? VAR_7 : 0;

    FUNC_4(VAR_2, VAR_10->log, 0, "SSL_get_error: %d", VAR_14);

    if (VAR_14 == VAR_6) {

        if (VAR_10->ssl->saved_read_handler) {

            VAR_10->read->handler = VAR_10->ssl->saved_read_handler;
            VAR_10->ssl->saved_read_handler = ((void*)0);
            VAR_10->read->ready = 1;

            if (FUNC_2(VAR_10->read, 0) != VAR_3) {
                return VAR_1;
            }

            FUNC_5(VAR_10->read, &VAR_8);
        }

        VAR_10->write->ready = 0;
        return VAR_0;
    }

    if (VAR_14 == VAR_5) {

        FUNC_3(VAR_2, VAR_10->log, 0,
                       "SSL_write: want read");

        VAR_10->read->ready = 0;

        if (FUNC_2(VAR_10->read, 0) != VAR_3) {
            return VAR_1;
        }






        if (VAR_10->ssl->saved_read_handler == ((void*)0)) {
            VAR_10->ssl->saved_read_handler = VAR_10->read->handler;
            VAR_10->read->handler = VAR_9;
        }

        return VAR_0;
    }

    VAR_10->ssl->no_wait_shutdown = 1;
    VAR_10->ssl->no_send_shutdown = 1;
    VAR_10->write->error = 1;

    FUNC_7(VAR_10, VAR_14, VAR_15, "SSL_write() failed");

    return VAR_1;
}
