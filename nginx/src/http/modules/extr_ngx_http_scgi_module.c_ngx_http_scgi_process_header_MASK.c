
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_16__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_11__ ;
typedef struct TYPE_23__ TYPE_10__ ;


struct TYPE_26__ {int len; char* data; } ;
struct TYPE_25__ {int len; char* data; } ;
struct TYPE_32__ {char* lowcase_key; TYPE_16__ value; TYPE_15__ key; scalar_t__ hash; } ;
typedef TYPE_6__ ngx_table_elt_t ;
struct TYPE_33__ {int data; } ;
typedef TYPE_7__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_31__ {int status_n; TYPE_7__ status_line; scalar_t__ location; TYPE_3__* status; int headers; } ;
struct TYPE_34__ {int upgrade; TYPE_5__ headers_in; TYPE_1__* state; int buffer; } ;
typedef TYPE_8__ ngx_http_upstream_t ;
struct TYPE_35__ {int headers_in_hash; } ;
typedef TYPE_9__ ngx_http_upstream_main_conf_t ;
struct TYPE_23__ {scalar_t__ (* handler ) (TYPE_11__*,TYPE_6__*,int ) ;int offset; } ;
typedef TYPE_10__ ngx_http_upstream_header_t ;
struct TYPE_28__ {scalar_t__ upgrade; } ;
struct TYPE_24__ {int header_name_end; int header_name_start; int header_end; int header_start; size_t lowcase_index; int lowcase_header; TYPE_4__* connection; TYPE_2__ headers_in; TYPE_8__* upstream; int pool; scalar_t__ header_hash; } ;
typedef TYPE_11__ ngx_http_request_t ;
struct TYPE_30__ {int log; } ;
struct TYPE_29__ {TYPE_7__ value; } ;
struct TYPE_27__ {int status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_10__* FUNC_1 (int *,scalar_t__,char*,int) ;
 TYPE_9__* FUNC_2 (TYPE_11__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_11__*,int *,int) ;
 int VAR_8 ;
 TYPE_6__* FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,char*) ;
 int FUNC_6 (int ,int ,int ,char*,TYPE_15__*,TYPE_16__*) ;
 int FUNC_7 (int ,int ,int ,char*,...) ;
 int FUNC_8 (char*,int,int) ;
 char* FUNC_9 (int ,int) ;
 int FUNC_10 (TYPE_7__*,char*) ;
 int FUNC_11 (char*,char*,int) ;
 scalar_t__ FUNC_12 (TYPE_11__*,TYPE_6__*,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_13(ngx_http_request_t *VAR_9)
{
    ngx_str_t *VAR_10;
    ngx_int_t VAR_11, VAR_12;
    ngx_table_elt_t *VAR_13;
    ngx_http_upstream_t *VAR_14;
    ngx_http_upstream_header_t *VAR_15;
    ngx_http_upstream_main_conf_t *VAR_16;

    VAR_16 = FUNC_2(VAR_9, VAR_8);

    for ( ;; ) {

        VAR_11 = FUNC_3(VAR_9, &VAR_9->upstream->buffer, 1);

        if (VAR_11 == VAR_7) {



            VAR_13 = FUNC_4(&VAR_9->upstream->headers_in.headers);
            if (VAR_13 == ((void*)0)) {
                return VAR_1;
            }

            VAR_13->hash = VAR_9->header_hash;

            VAR_13->key.len = VAR_9->header_name_end - VAR_9->header_name_start;
            VAR_13->value.len = VAR_9->header_end - VAR_9->header_start;

            VAR_13->key.data = FUNC_9(VAR_9->pool,
                                      VAR_13->key.len + 1 + VAR_13->value.len + 1
                                      + VAR_13->key.len);
            if (VAR_13->key.data == ((void*)0)) {
                VAR_13->hash = 0;
                return VAR_1;
            }

            VAR_13->value.data = VAR_13->key.data + VAR_13->key.len + 1;
            VAR_13->lowcase_key = VAR_13->key.data + VAR_13->key.len + 1 + VAR_13->value.len + 1;

            FUNC_8(VAR_13->key.data, VAR_9->header_name_start, VAR_13->key.len);
            VAR_13->key.data[VAR_13->key.len] = '\0';
            FUNC_8(VAR_13->value.data, VAR_9->header_start, VAR_13->value.len);
            VAR_13->value.data[VAR_13->value.len] = '\0';

            if (VAR_13->key.len == VAR_9->lowcase_index) {
                FUNC_8(VAR_13->lowcase_key, VAR_9->lowcase_header, VAR_13->key.len);

            } else {
                FUNC_11(VAR_13->lowcase_key, VAR_13->key.data, VAR_13->key.len);
            }

            VAR_15 = FUNC_1(&VAR_16->headers_in_hash, VAR_13->hash,
                               VAR_13->lowcase_key, VAR_13->key.len);

            if (VAR_15 && VAR_15->handler(VAR_9, VAR_13, VAR_15->offset) != VAR_7) {
                return VAR_1;
            }

            FUNC_6(VAR_5, VAR_9->connection->log, 0,
                           "http scgi header: \"%V: %V\"", &VAR_13->key, &VAR_13->value);

            continue;
        }

        if (VAR_11 == VAR_2) {



            FUNC_5(VAR_5, VAR_9->connection->log, 0,
                           "http scgi header done");

            VAR_14 = VAR_9->upstream;

            if (VAR_14->headers_in.status_n) {
                goto done;
            }

            if (VAR_14->headers_in.status) {
                VAR_10 = &VAR_14->headers_in.status->value;

                VAR_12 = FUNC_0(VAR_10->data, 3);
                if (VAR_12 == VAR_1) {
                    FUNC_7(VAR_6, VAR_9->connection->log, 0,
                                  "upstream sent invalid status \"%V\"",
                                  VAR_10);
                    return VAR_4;
                }

                VAR_14->headers_in.status_n = VAR_12;
                VAR_14->headers_in.status_line = *VAR_10;

            } else if (VAR_14->headers_in.location) {
                VAR_14->headers_in.status_n = 302;
                FUNC_10(&VAR_14->headers_in.status_line,
                            "302 Moved Temporarily");

            } else {
                VAR_14->headers_in.status_n = 200;
                FUNC_10(&VAR_14->headers_in.status_line, "200 OK");
            }

            if (VAR_14->state && VAR_14->state->status == 0) {
                VAR_14->state->status = VAR_14->headers_in.status_n;
            }

        done:

            if (VAR_14->headers_in.status_n == VAR_3
                && VAR_9->headers_in.upgrade)
            {
                VAR_14->upgrade = 1;
            }

            return VAR_7;
        }

        if (VAR_11 == VAR_0) {
            return VAR_0;
        }



        FUNC_7(VAR_6, VAR_9->connection->log, 0,
                      "upstream sent invalid header");

        return VAR_4;
    }
}
