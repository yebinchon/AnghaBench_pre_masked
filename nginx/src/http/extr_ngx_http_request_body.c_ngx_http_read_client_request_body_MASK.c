
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef int ssize_t ;
typedef int off_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_24__ {scalar_t__ content_length_n; int chunked; } ;
struct TYPE_25__ {int reading_body; int count; struct TYPE_25__* main; void* read_event_handler; scalar_t__ request_body_no_buffering; void* write_event_handler; int pool; scalar_t__ request_body_in_single_buf; TYPE_3__ headers_in; TYPE_2__* connection; TYPE_1__* header_in; int request_length; scalar_t__ stream; TYPE_5__* request_body; scalar_t__ discard_body; } ;
typedef TYPE_4__ ngx_http_request_t ;
struct TYPE_26__ {int rest; TYPE_9__* buf; int (* post_handler ) (TYPE_4__*) ;} ;
typedef TYPE_5__ ngx_http_request_body_t ;
struct TYPE_27__ {int client_body_buffer_size; } ;
typedef TYPE_6__ ngx_http_core_loc_conf_t ;
typedef int (* ngx_http_client_body_handler_pt ) (TYPE_4__*) ;
struct TYPE_28__ {int * next; TYPE_1__* buf; } ;
typedef TYPE_8__ ngx_chain_t ;
struct TYPE_29__ {int temporary; size_t start; size_t pos; size_t last; size_t end; } ;
typedef TYPE_9__ ngx_buf_t ;
struct TYPE_23__ {int log; } ;
struct TYPE_22__ {size_t last; size_t pos; size_t end; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_9__* FUNC_0 (int ) ;
 TYPE_9__* FUNC_1 (int ,int) ;
 void* VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 TYPE_6__* FUNC_3 (TYPE_4__*,int ) ;
 void* VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_4__*,TYPE_8__*) ;
 void* VAR_9 ;
 scalar_t__ FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (int ,int ,int ,char*,size_t) ;
 int FUNC_8 (int ,int ,int ,char*) ;
 TYPE_5__* FUNC_9 (int ,int) ;

ngx_int_t
FUNC_10(ngx_http_request_t *VAR_10,
    ngx_http_client_body_handler_pt VAR_11)
{
    size_t VAR_12;
    ssize_t VAR_13;
    ngx_int_t VAR_14;
    ngx_buf_t *VAR_15;
    ngx_chain_t VAR_16;
    ngx_http_request_body_t *VAR_17;
    ngx_http_core_loc_conf_t *VAR_18;

    VAR_10->main->count++;

    if (VAR_10 != VAR_10->main || VAR_10->request_body || VAR_10->discard_body) {
        VAR_10->request_body_no_buffering = 0;
        VAR_11(VAR_10);
        return VAR_5;
    }

    if (FUNC_5(VAR_10) != VAR_5) {
        VAR_14 = VAR_1;
        goto done;
    }

    VAR_17 = FUNC_9(VAR_10->pool, sizeof(ngx_http_request_body_t));
    if (VAR_17 == ((void*)0)) {
        VAR_14 = VAR_1;
        goto done;
    }
    VAR_17->rest = -1;
    VAR_17->post_handler = VAR_11;

    VAR_10->request_body = VAR_17;

    if (VAR_10->headers_in.content_length_n < 0 && !VAR_10->headers_in.chunked) {
        VAR_10->request_body_no_buffering = 0;
        VAR_11(VAR_10);
        return VAR_5;
    }
    VAR_12 = VAR_10->header_in->last - VAR_10->header_in->pos;

    if (VAR_12) {



        FUNC_7(VAR_4, VAR_10->connection->log, 0,
                       "http client request body preread %uz", VAR_12);

        VAR_16.buf = VAR_10->header_in;
        VAR_16.next = ((void*)0);

        VAR_14 = FUNC_4(VAR_10, &VAR_16);

        if (VAR_14 != VAR_5) {
            goto done;
        }

        VAR_10->request_length += VAR_12 - (VAR_10->header_in->last - VAR_10->header_in->pos);

        if (!VAR_10->headers_in.chunked
            && VAR_17->rest > 0
            && VAR_17->rest <= (off_t) (VAR_10->header_in->end - VAR_10->header_in->last))
        {


            VAR_15 = FUNC_0(VAR_10->pool);
            if (VAR_15 == ((void*)0)) {
                VAR_14 = VAR_1;
                goto done;
            }

            VAR_15->temporary = 1;
            VAR_15->start = VAR_10->header_in->pos;
            VAR_15->pos = VAR_10->header_in->pos;
            VAR_15->last = VAR_10->header_in->last;
            VAR_15->end = VAR_10->header_in->end;

            VAR_17->buf = VAR_15;

            VAR_10->read_event_handler = VAR_8;
            VAR_10->write_event_handler = VAR_9;

            VAR_14 = FUNC_2(VAR_10);
            goto done;
        }

    } else {


        if (FUNC_4(VAR_10, ((void*)0)) != VAR_5) {
            VAR_14 = VAR_1;
            goto done;
        }
    }

    if (VAR_17->rest == 0) {

        VAR_10->request_body_no_buffering = 0;
        VAR_11(VAR_10);
        return VAR_5;
    }

    if (VAR_17->rest < 0) {
        FUNC_8(VAR_3, VAR_10->connection->log, 0,
                      "negative request body rest");
        VAR_14 = VAR_1;
        goto done;
    }

    VAR_18 = FUNC_3(VAR_10, VAR_7);

    VAR_13 = VAR_18->client_body_buffer_size;
    VAR_13 += VAR_13 >> 2;



    if (!VAR_10->headers_in.chunked && VAR_17->rest < VAR_13) {
        VAR_13 = (ssize_t) VAR_17->rest;

        if (VAR_10->request_body_in_single_buf) {
            VAR_13 += VAR_12;
        }

    } else {
        VAR_13 = VAR_18->client_body_buffer_size;
    }

    VAR_17->buf = FUNC_1(VAR_10->pool, VAR_13);
    if (VAR_17->buf == ((void*)0)) {
        VAR_14 = VAR_1;
        goto done;
    }

    VAR_10->read_event_handler = VAR_8;
    VAR_10->write_event_handler = VAR_9;

    VAR_14 = FUNC_2(VAR_10);

done:

    if (VAR_10->request_body_no_buffering
        && (VAR_14 == VAR_5 || VAR_14 == VAR_0))
    {
        if (VAR_14 == VAR_5) {
            VAR_10->request_body_no_buffering = 0;

        } else {

            VAR_10->reading_body = 1;
        }

        VAR_10->read_event_handler = VAR_6;
        VAR_11(VAR_10);
    }

    if (VAR_14 >= VAR_2) {
        VAR_10->main->count--;
    }

    return VAR_14;
}
