
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {int payload_bytes; } ;
typedef TYPE_3__ ngx_http_v2_connection_t ;
struct TYPE_13__ {int content_length_n; int chunked; } ;
struct TYPE_16__ {scalar_t__ request_length; TYPE_2__* stream; TYPE_1__ headers_in; TYPE_5__* connection; int http_state; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_17__ {int log; } ;
typedef TYPE_5__ ngx_connection_t ;
struct TYPE_14__ {int skip_data; TYPE_3__* connection; scalar_t__ in_closed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_7(ngx_http_request_t *VAR_4)
{
    ngx_connection_t *VAR_5;
    ngx_http_v2_connection_t *VAR_6;

    VAR_5 = VAR_4->connection;

    if (FUNC_5(VAR_4) != VAR_3) {
        goto failed;
    }

    if (FUNC_4(VAR_4) != VAR_3) {
        goto failed;
    }

    VAR_4->http_state = VAR_1;

    if (FUNC_2(VAR_4) != VAR_3) {
        goto failed;
    }

    if (VAR_4->headers_in.content_length_n > 0 && VAR_4->stream->in_closed) {
        FUNC_6(VAR_2, VAR_4->connection->log, 0,
                      "client prematurely closed stream");

        VAR_4->stream->skip_data = 1;

        FUNC_0(VAR_4, VAR_0);
        goto failed;
    }

    if (VAR_4->headers_in.content_length_n == -1 && !VAR_4->stream->in_closed) {
        VAR_4->headers_in.chunked = 1;
    }

    VAR_6 = VAR_4->stream->connection;

    VAR_6->payload_bytes += VAR_4->request_length;

    FUNC_1(VAR_4);

failed:

    FUNC_3(VAR_5);
}
