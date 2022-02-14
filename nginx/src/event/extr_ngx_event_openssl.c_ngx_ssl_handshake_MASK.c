
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef scalar_t__ ngx_int_t ;
typedef int ngx_err_t ;
struct TYPE_17__ {TYPE_9__* read; TYPE_2__* ssl; TYPE_8__* write; int log; int send_chain; int recv_chain; int send; int recv; } ;
typedef TYPE_3__ ngx_connection_t ;
struct TYPE_19__ {int eof; int error; void* handler; scalar_t__ ready; } ;
struct TYPE_18__ {void* handler; scalar_t__ ready; } ;
struct TYPE_16__ {int handshaked; int no_wait_shutdown; int no_send_shutdown; TYPE_11__* connection; scalar_t__ try_early_data; } ;
struct TYPE_15__ {int flags; } ;
struct TYPE_14__ {TYPE_1__* s3; } ;


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
 int FUNC_1 (TYPE_11__*) ;
 int FUNC_2 (TYPE_11__*,int) ;
 scalar_t__ FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_9__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_8__*,int ) ;
 int FUNC_7 (int ,int ,int ,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,int,int ,char*) ;
 void* VAR_10 ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_11 (TYPE_3__*) ;
 int VAR_14 ;

ngx_int_t
FUNC_12(ngx_connection_t *VAR_15)
{
    int VAR_16, VAR_17;
    ngx_err_t VAR_18;







    FUNC_8(VAR_15->log);

    VAR_16 = FUNC_1(VAR_15->ssl->connection);

    FUNC_7(VAR_2, VAR_15->log, 0, "SSL_do_handshake: %d", VAR_16);

    if (VAR_16 == 1) {

        if (FUNC_5(VAR_15->read, 0) != VAR_3) {
            return VAR_1;
        }

        if (FUNC_6(VAR_15->write, 0) != VAR_3) {
            return VAR_1;
        }





        VAR_15->ssl->handshaked = 1;

        VAR_15->recv = VAR_11;
        VAR_15->send = VAR_14;
        VAR_15->recv_chain = VAR_12;
        VAR_15->send_chain = VAR_13;
        return VAR_3;
    }

    VAR_17 = FUNC_2(VAR_15->ssl->connection, VAR_16);

    FUNC_7(VAR_2, VAR_15->log, 0, "SSL_get_error: %d", VAR_17);

    if (VAR_17 == VAR_6) {
        VAR_15->read->ready = 0;
        VAR_15->read->handler = VAR_10;
        VAR_15->write->handler = VAR_10;

        if (FUNC_5(VAR_15->read, 0) != VAR_3) {
            return VAR_1;
        }

        if (FUNC_6(VAR_15->write, 0) != VAR_3) {
            return VAR_1;
        }

        return VAR_0;
    }

    if (VAR_17 == VAR_7) {
        VAR_15->write->ready = 0;
        VAR_15->read->handler = VAR_10;
        VAR_15->write->handler = VAR_10;

        if (FUNC_5(VAR_15->read, 0) != VAR_3) {
            return VAR_1;
        }

        if (FUNC_6(VAR_15->write, 0) != VAR_3) {
            return VAR_1;
        }

        return VAR_0;
    }

    VAR_18 = (VAR_17 == VAR_5) ? VAR_9 : 0;

    VAR_15->ssl->no_wait_shutdown = 1;
    VAR_15->ssl->no_send_shutdown = 1;
    VAR_15->read->eof = 1;

    if (VAR_17 == VAR_8 || FUNC_0() == 0) {
        FUNC_4(VAR_15, VAR_18,
                             "peer closed connection in SSL handshake");

        return VAR_1;
    }

    VAR_15->read->error = 1;

    FUNC_9(VAR_15, VAR_17, VAR_18, "SSL_do_handshake() failed");

    return VAR_1;
}
