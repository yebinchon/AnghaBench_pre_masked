
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_16__ ;


typedef int off_t ;
struct TYPE_23__ {int offset; } ;
typedef TYPE_4__ ngx_temp_file_t ;
struct TYPE_22__ {scalar_t__ connection; } ;
struct TYPE_20__ {scalar_t__ status_n; int content_length_n; } ;
struct TYPE_24__ {TYPE_3__ peer; scalar_t__ store; scalar_t__ cacheable; TYPE_1__ headers_in; TYPE_7__* pipe; } ;
typedef TYPE_5__ ngx_http_upstream_t ;
struct TYPE_25__ {TYPE_2__* connection; TYPE_16__* cache; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_26__ {int length; scalar_t__ downstream_error; scalar_t__ upstream_eof; scalar_t__ upstream_done; int out; scalar_t__ upstream_error; TYPE_4__* temp_file; scalar_t__ writing; int aio; } ;
typedef TYPE_7__ ngx_event_pipe_t ;
struct TYPE_21__ {int log; } ;
struct TYPE_19__ {scalar_t__ body_start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int) ;
 int FUNC_1 (TYPE_16__*,TYPE_4__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int ) ;
 int FUNC_7 (int ,int ,int ,char*) ;

__attribute__((used)) static void
FUNC_8(ngx_http_request_t *VAR_6,
    ngx_http_upstream_t *VAR_7)
{
    ngx_temp_file_t *VAR_8;
    ngx_event_pipe_t *VAR_9;

    VAR_9 = VAR_7->pipe;
    if (VAR_7->peer.connection) {

        if (VAR_7->store) {

            if (VAR_9->upstream_eof || VAR_9->upstream_done) {

                VAR_8 = VAR_9->temp_file;

                if (VAR_7->headers_in.status_n == VAR_3
                    && (VAR_9->upstream_done || VAR_9->length == -1)
                    && (VAR_7->headers_in.content_length_n == -1
                        || VAR_7->headers_in.content_length_n == VAR_8->offset))
                {
                    FUNC_4(VAR_6, VAR_7);
                }
            }
        }
        if (VAR_9->upstream_done || VAR_9->upstream_eof || VAR_9->upstream_error) {
            FUNC_6(VAR_4, VAR_6->connection->log, 0,
                           "http upstream exit: %p", VAR_9->out);

            if (VAR_9->upstream_done
                || (VAR_9->upstream_eof && VAR_9->length == -1))
            {
                FUNC_3(VAR_6, VAR_7, 0);
                return;
            }

            if (VAR_9->upstream_eof) {
                FUNC_7(VAR_5, VAR_6->connection->log, 0,
                              "upstream prematurely closed connection");
            }

            FUNC_3(VAR_6, VAR_7, VAR_2);
            return;
        }
    }

    if (VAR_9->downstream_error) {
        FUNC_5(VAR_4, VAR_6->connection->log, 0,
                       "http upstream downstream error");

        if (!VAR_7->cacheable && !VAR_7->store && VAR_7->peer.connection) {
            FUNC_3(VAR_6, VAR_7, VAR_1);
        }
    }
}
