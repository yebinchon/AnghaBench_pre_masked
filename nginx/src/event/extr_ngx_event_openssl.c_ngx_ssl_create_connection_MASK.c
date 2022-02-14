
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_8__ {int ctx; int buffer_size; } ;
typedef TYPE_1__ ngx_ssl_t ;
struct TYPE_9__ {int buffer; int try_early_data; int * connection; int session_ctx; int buffer_size; } ;
typedef TYPE_2__ ngx_ssl_connection_t ;
typedef int ngx_int_t ;
struct TYPE_10__ {TYPE_2__* ssl; int log; int fd; int pool; } ;
typedef TYPE_3__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 TYPE_2__* FUNC_7 (int ,int) ;
 int VAR_6 ;
 int FUNC_8 (int ,int ,int ,char*) ;

ngx_int_t
FUNC_9(ngx_ssl_t *VAR_7, ngx_connection_t *VAR_8, ngx_uint_t VAR_9)
{
    ngx_ssl_connection_t *VAR_10;

    VAR_10 = FUNC_7(VAR_8->pool, sizeof(ngx_ssl_connection_t));
    if (VAR_10 == ((void*)0)) {
        return VAR_0;
    }

    VAR_10->buffer = ((VAR_9 & VAR_3) != 0);
    VAR_10->buffer_size = VAR_7->buffer_size;

    VAR_10->session_ctx = VAR_7->ctx;







    VAR_10->connection = FUNC_1(VAR_7->ctx);

    if (VAR_10->connection == ((void*)0)) {
        FUNC_8(VAR_1, VAR_8->log, 0, "SSL_new() failed");
        return VAR_0;
    }

    if (FUNC_5(VAR_10->connection, VAR_8->fd) == 0) {
        FUNC_8(VAR_1, VAR_8->log, 0, "SSL_set_fd() failed");
        return VAR_0;
    }

    if (VAR_9 & VAR_4) {
        FUNC_3(VAR_10->connection);

    } else {
        FUNC_2(VAR_10->connection);




    }

    if (FUNC_4(VAR_10->connection, VAR_6, VAR_8) == 0) {
        FUNC_8(VAR_1, VAR_8->log, 0, "SSL_set_ex_data() failed");
        return VAR_0;
    }

    VAR_8->ssl = VAR_10;

    return VAR_2;
}
