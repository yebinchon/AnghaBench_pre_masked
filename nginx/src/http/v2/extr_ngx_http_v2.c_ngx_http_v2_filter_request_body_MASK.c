
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int ngx_int_t ;
struct TYPE_17__ {int content_length_n; } ;
struct TYPE_18__ {int pool; int request_body_no_buffering; TYPE_2__ headers_in; TYPE_1__* connection; int request_length; TYPE_4__* request_body; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_19__ {int received; int busy; int free; scalar_t__ rest; TYPE_7__* buf; } ;
typedef TYPE_4__ ngx_http_request_body_t ;
struct TYPE_20__ {int client_max_body_size; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
struct TYPE_21__ {TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_22__ {scalar_t__ pos; scalar_t__ last; int temporary; scalar_t__ start; scalar_t__ end; int last_buf; int flush; scalar_t__ tag; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_16__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_6__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int *,TYPE_6__**,scalar_t__) ;
 int VAR_5 ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_4 (int ,int ,int ,char*,...) ;
 int FUNC_5 (TYPE_7__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_6)
{
    ngx_buf_t *VAR_7, *VAR_8;
    ngx_int_t VAR_9;
    ngx_chain_t *VAR_10;
    ngx_http_request_body_t *VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;

    VAR_11 = VAR_6->request_body;
    VAR_8 = VAR_11->buf;

    if (VAR_8->pos == VAR_8->last && VAR_11->rest) {
        VAR_10 = ((void*)0);
        goto update;
    }

    VAR_10 = FUNC_0(VAR_6->pool, &VAR_11->free);
    if (VAR_10 == ((void*)0)) {
        return VAR_1;
    }

    VAR_7 = VAR_10->buf;

    FUNC_5(VAR_7, sizeof(ngx_buf_t));

    if (VAR_8->pos != VAR_8->last) {
        VAR_6->request_length += VAR_8->last - VAR_8->pos;
        VAR_11->received += VAR_8->last - VAR_8->pos;

        if (VAR_6->headers_in.content_length_n != -1) {
            if (VAR_11->received > VAR_6->headers_in.content_length_n) {
                FUNC_4(VAR_4, VAR_6->connection->log, 0,
                              "client intended to send body data "
                              "larger than declared");

                return VAR_0;
            }

        } else {
            VAR_12 = FUNC_2(VAR_6, VAR_5);

            if (VAR_12->client_max_body_size
                && VAR_11->received > VAR_12->client_max_body_size)
            {
                FUNC_4(VAR_3, VAR_6->connection->log, 0,
                              "client intended to send too large chunked body: "
                              "%O bytes", VAR_11->received);

                return VAR_2;
            }
        }

        VAR_7->temporary = 1;
        VAR_7->pos = VAR_8->pos;
        VAR_7->last = VAR_8->last;
        VAR_7->start = VAR_7->pos;
        VAR_7->end = VAR_7->last;

        VAR_8->pos = VAR_8->last;
    }

    if (!VAR_11->rest) {
        if (VAR_6->headers_in.content_length_n != -1
            && VAR_6->headers_in.content_length_n != VAR_11->received)
        {
            FUNC_4(VAR_4, VAR_6->connection->log, 0,
                          "client prematurely closed stream: "
                          "only %O out of %O bytes of request body received",
                          VAR_11->received, VAR_6->headers_in.content_length_n);

            return VAR_0;
        }

        VAR_7->last_buf = 1;
    }

    VAR_7->tag = (ngx_buf_tag_t) &FUNC_6;
    VAR_7->flush = VAR_6->request_body_no_buffering;

update:

    VAR_9 = FUNC_3(VAR_6, VAR_10);

    FUNC_1(VAR_6->pool, &VAR_11->free, &VAR_11->busy, &VAR_10,
                            (ngx_buf_tag_t) &FUNC_6);

    return VAR_9;
}
