
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ safari; scalar_t__ msie6; } ;
struct TYPE_10__ {int method; int request_body_in_file_only; int request_body_in_persistent_file; int request_body_in_clean_file; scalar_t__ content_handler; TYPE_4__* connection; scalar_t__ keepalive; TYPE_1__ headers_in; int request_body_in_single_buf; int request_body_file_log_level; struct TYPE_10__* main; int loc_conf; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_11__ {int limit_except; scalar_t__ client_body_in_file_only; scalar_t__ keepalive_timeout; scalar_t__ keepalive_requests; int keepalive_disable; scalar_t__ handler; int tcp_nopush; int client_body_in_single_buffer; scalar_t__ sendfile; int error_log; int limit_except_loc_conf; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_13__ {int flags; } ;
struct TYPE_12__ {int sendfile; scalar_t__ requests; int tcp_nopush; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_5__ VAR_9 ;
 int FUNC_1 (TYPE_4__*,int ) ;

void
FUNC_2(ngx_http_request_t *VAR_10)
{
    ngx_http_core_loc_conf_t *VAR_11;

    VAR_11 = FUNC_0(VAR_10, VAR_8);

    if (VAR_10->method & VAR_11->limit_except) {
        VAR_10->loc_conf = VAR_11->limit_except_loc_conf;
        VAR_11 = FUNC_0(VAR_10, VAR_8);
    }

    if (VAR_10 == VAR_10->main) {
        FUNC_1(VAR_10->connection, VAR_11->error_log);
    }

    if ((VAR_9.flags & VAR_4) && VAR_11->sendfile) {
        VAR_10->connection->sendfile = 1;

    } else {
        VAR_10->connection->sendfile = 0;
    }

    if (VAR_11->client_body_in_file_only) {
        VAR_10->request_body_in_file_only = 1;
        VAR_10->request_body_in_persistent_file = 1;
        VAR_10->request_body_in_clean_file =
            VAR_11->client_body_in_file_only == VAR_3;
        VAR_10->request_body_file_log_level = VAR_5;

    } else {
        VAR_10->request_body_file_log_level = VAR_6;
    }

    VAR_10->request_body_in_single_buf = VAR_11->client_body_in_single_buffer;

    if (VAR_10->keepalive) {
        if (VAR_11->keepalive_timeout == 0) {
            VAR_10->keepalive = 0;

        } else if (VAR_10->connection->requests >= VAR_11->keepalive_requests) {
            VAR_10->keepalive = 0;

        } else if (VAR_10->headers_in.msie6
                   && VAR_10->method == VAR_2
                   && (VAR_11->keepalive_disable
                       & VAR_0))
        {




            VAR_10->keepalive = 0;

        } else if (VAR_10->headers_in.safari
                   && (VAR_11->keepalive_disable
                       & VAR_1))
        {





            VAR_10->keepalive = 0;
        }
    }

    if (!VAR_11->tcp_nopush) {

        VAR_10->connection->tcp_nopush = VAR_7;
    }

    if (VAR_11->handler) {
        VAR_10->content_handler = VAR_11->handler;
    }
}
