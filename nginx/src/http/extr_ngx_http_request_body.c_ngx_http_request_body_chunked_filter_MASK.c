
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_22__ {scalar_t__ content_length_n; } ;
struct TYPE_23__ {int lingering_close; int pool; TYPE_1__* connection; TYPE_2__ headers_in; int request_body_no_buffering; TYPE_4__* request_body; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_24__ {int rest; int busy; int free; TYPE_8__* chunked; } ;
typedef TYPE_4__ ngx_http_request_body_t ;
struct TYPE_25__ {scalar_t__ client_max_body_size; } ;
typedef TYPE_5__ ngx_http_core_loc_conf_t ;
typedef int ngx_http_chunked_t ;
struct TYPE_26__ {struct TYPE_26__* next; TYPE_7__* buf; } ;
typedef TYPE_6__ ngx_chain_t ;
typedef scalar_t__ ngx_buf_tag_t ;
struct TYPE_27__ {int temporary; size_t start; size_t pos; size_t last; int last_buf; int flush; int end; scalar_t__ tag; scalar_t__ file_pos; scalar_t__ file_last; int in_file; } ;
typedef TYPE_7__ ngx_buf_t ;
struct TYPE_28__ {scalar_t__ size; int length; } ;
struct TYPE_21__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_6__* FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *,int *,TYPE_6__**,scalar_t__) ;
 int VAR_9 ;
 TYPE_5__* FUNC_2 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_3__*,TYPE_7__*,TYPE_8__*) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,int,int ,size_t,size_t,size_t,scalar_t__,scalar_t__) ;
 int FUNC_7 (int ,int ,int ,char*,...) ;
 int FUNC_8 (TYPE_7__*,int) ;
 TYPE_8__* FUNC_9 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_10(ngx_http_request_t *VAR_11, ngx_chain_t *VAR_12)
{
    size_t VAR_13;
    ngx_int_t VAR_14;
    ngx_buf_t *VAR_15;
    ngx_chain_t *VAR_16, *VAR_17, *VAR_18, **VAR_19;
    ngx_http_request_body_t *VAR_20;
    ngx_http_core_loc_conf_t *VAR_21;

    VAR_20 = VAR_11->request_body;

    if (VAR_20->rest == -1) {

        FUNC_5(VAR_6, VAR_11->connection->log, 0,
                       "http request body chunked filter");

        VAR_20->chunked = FUNC_9(VAR_11->pool, sizeof(ngx_http_chunked_t));
        if (VAR_20->chunked == ((void*)0)) {
            return VAR_3;
        }

        VAR_11->headers_in.content_length_n = 0;
        VAR_20->rest = 3;
    }

    VAR_17 = ((void*)0);
    VAR_19 = &VAR_17;

    for (VAR_16 = VAR_12; VAR_16; VAR_16 = VAR_16->next) {

        for ( ;; ) {

            FUNC_6(VAR_5, VAR_11->connection->log, 0,
                           "http body chunked buf "
                           "t:%d f:%d %p, pos %p, size: %z file: %O, size: %O",
                           VAR_16->buf->temporary, VAR_16->buf->in_file,
                           VAR_16->buf->start, VAR_16->buf->pos,
                           VAR_16->buf->last - VAR_16->buf->pos,
                           VAR_16->buf->file_pos,
                           VAR_16->buf->file_last - VAR_16->buf->file_pos);

            VAR_14 = FUNC_3(VAR_11, VAR_16->buf, VAR_20->chunked);

            if (VAR_14 == VAR_8) {



                VAR_21 = FUNC_2(VAR_11, VAR_9);

                if (VAR_21->client_max_body_size
                    && VAR_21->client_max_body_size
                       - VAR_11->headers_in.content_length_n < VAR_20->chunked->size)
                {
                    FUNC_7(VAR_7, VAR_11->connection->log, 0,
                                  "client intended to send too large chunked "
                                  "body: %O+%O bytes",
                                  VAR_11->headers_in.content_length_n,
                                  VAR_20->chunked->size);

                    VAR_11->lingering_close = 1;

                    return VAR_4;
                }

                VAR_18 = FUNC_0(VAR_11->pool, &VAR_20->free);
                if (VAR_18 == ((void*)0)) {
                    return VAR_3;
                }

                VAR_15 = VAR_18->buf;

                FUNC_8(VAR_15, sizeof(ngx_buf_t));

                VAR_15->temporary = 1;
                VAR_15->tag = (ngx_buf_tag_t) &VAR_10;
                VAR_15->start = VAR_16->buf->pos;
                VAR_15->pos = VAR_16->buf->pos;
                VAR_15->last = VAR_16->buf->last;
                VAR_15->end = VAR_16->buf->end;
                VAR_15->flush = VAR_11->request_body_no_buffering;

                *VAR_19 = VAR_18;
                VAR_19 = &VAR_18->next;

                VAR_13 = VAR_16->buf->last - VAR_16->buf->pos;

                if ((off_t) VAR_13 > VAR_20->chunked->size) {
                    VAR_16->buf->pos += (size_t) VAR_20->chunked->size;
                    VAR_11->headers_in.content_length_n += VAR_20->chunked->size;
                    VAR_20->chunked->size = 0;

                } else {
                    VAR_20->chunked->size -= VAR_13;
                    VAR_11->headers_in.content_length_n += VAR_13;
                    VAR_16->buf->pos = VAR_16->buf->last;
                }

                VAR_15->last = VAR_16->buf->pos;

                continue;
            }

            if (VAR_14 == VAR_1) {



                VAR_20->rest = 0;

                VAR_18 = FUNC_0(VAR_11->pool, &VAR_20->free);
                if (VAR_18 == ((void*)0)) {
                    return VAR_3;
                }

                VAR_15 = VAR_18->buf;

                FUNC_8(VAR_15, sizeof(ngx_buf_t));

                VAR_15->last_buf = 1;

                *VAR_19 = VAR_18;
                VAR_19 = &VAR_18->next;

                break;
            }

            if (VAR_14 == VAR_0) {



                VAR_20->rest = VAR_20->chunked->length;

                break;
            }



            FUNC_7(VAR_7, VAR_11->connection->log, 0,
                          "client sent invalid chunked body");

            return VAR_2;
        }
    }

    VAR_14 = FUNC_4(VAR_11, VAR_17);

    FUNC_1(VAR_11->pool, &VAR_20->free, &VAR_20->busy, &VAR_17,
                            (ngx_buf_tag_t) &VAR_10);

    return VAR_14;
}
