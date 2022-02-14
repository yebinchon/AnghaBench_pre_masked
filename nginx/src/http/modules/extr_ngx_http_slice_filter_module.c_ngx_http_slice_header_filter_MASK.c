
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ off_t ;
struct TYPE_21__ {scalar_t__ len; int data; } ;
struct TYPE_26__ {TYPE_1__ value; } ;
typedef TYPE_6__ ngx_table_elt_t ;
typedef int ngx_int_t ;
struct TYPE_27__ {int size; } ;
typedef TYPE_7__ ngx_http_slice_loc_conf_t ;
struct TYPE_28__ {int start; int active; int end; TYPE_1__ etag; } ;
typedef TYPE_8__ ngx_http_slice_ctx_t ;
struct TYPE_29__ {int complete_length; scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_9__ ngx_http_slice_content_range_t ;
struct TYPE_23__ {scalar_t__ len; } ;
struct TYPE_25__ {scalar_t__ status; int content_length_n; int content_offset; TYPE_4__* content_range; TYPE_3__ status_line; TYPE_6__* etag; } ;
struct TYPE_20__ {int allow_ranges; int subrequest_ranges; int single_range; int preserve_body; TYPE_5__ headers_out; struct TYPE_20__* main; TYPE_2__* connection; } ;
typedef TYPE_10__ ngx_http_request_t ;
struct TYPE_24__ {scalar_t__ hash; } ;
struct TYPE_22__ {int log; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_8__* FUNC_0 (TYPE_10__*,int ) ;
 TYPE_7__* FUNC_1 (TYPE_10__*,int ) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (TYPE_10__*,int *,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_10__*,TYPE_9__*) ;
 int FUNC_5 (int ,int ,int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int ,int ,int ,char*,...) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (int ,int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_7)
{
    off_t VAR_8;
    ngx_int_t VAR_9;
    ngx_table_elt_t *VAR_10;
    ngx_http_slice_ctx_t *VAR_11;
    ngx_http_slice_loc_conf_t *VAR_12;
    ngx_http_slice_content_range_t VAR_13;

    VAR_11 = FUNC_0(VAR_7, VAR_6);
    if (VAR_11 == ((void*)0)) {
        return FUNC_2(VAR_7);
    }

    if (VAR_7->headers_out.status != VAR_2) {
        if (VAR_7 == VAR_7->main) {
            FUNC_3(VAR_7, ((void*)0), VAR_6);
            return FUNC_2(VAR_7);
        }

        FUNC_6(VAR_4, VAR_7->connection->log, 0,
                      "unexpected status code %ui in slice response",
                      VAR_7->headers_out.status);
        return VAR_0;
    }

    VAR_10 = VAR_7->headers_out.etag;

    if (VAR_11->etag.len) {
        if (VAR_10 == ((void*)0)
            || VAR_10->value.len != VAR_11->etag.len
            || FUNC_8(VAR_10->value.data, VAR_11->etag.data, VAR_11->etag.len)
               != 0)
        {
            FUNC_6(VAR_4, VAR_7->connection->log, 0,
                          "etag mismatch in slice response");
            return VAR_0;
        }
    }

    if (VAR_10) {
        VAR_11->etag = VAR_10->value;
    }

    if (FUNC_4(VAR_7, &VAR_13) != VAR_5) {
        FUNC_6(VAR_4, VAR_7->connection->log, 0,
                      "invalid range in slice response");
        return VAR_0;
    }

    if (VAR_13.complete_length == -1) {
        FUNC_6(VAR_4, VAR_7->connection->log, 0,
                      "no complete length in slice response");
        return VAR_0;
    }

    FUNC_5(VAR_3, VAR_7->connection->log, 0,
                   "http slice response range: %O-%O/%O",
                   VAR_13.start, VAR_13.end, VAR_13.complete_length);

    VAR_12 = FUNC_1(VAR_7, VAR_6);

    VAR_8 = FUNC_7(VAR_13.start + (off_t) VAR_12->size, VAR_13.complete_length);

    if (VAR_13.start != VAR_11->start || VAR_13.end != VAR_8) {
        FUNC_6(VAR_4, VAR_7->connection->log, 0,
                      "unexpected range in slice response: %O-%O",
                      VAR_13.start, VAR_13.end);
        return VAR_0;
    }

    VAR_11->start = VAR_8;
    VAR_11->active = 1;

    VAR_7->headers_out.status = VAR_1;
    VAR_7->headers_out.status_line.len = 0;
    VAR_7->headers_out.content_length_n = VAR_13.complete_length;
    VAR_7->headers_out.content_offset = VAR_13.start;
    VAR_7->headers_out.content_range->hash = 0;
    VAR_7->headers_out.content_range = ((void*)0);

    VAR_7->allow_ranges = 1;
    VAR_7->subrequest_ranges = 1;
    VAR_7->single_range = 1;

    VAR_9 = FUNC_2(VAR_7);

    if (VAR_7 != VAR_7->main) {
        return VAR_9;
    }

    VAR_7->preserve_body = 1;

    if (VAR_7->headers_out.status == VAR_2) {
        if (VAR_11->start + (off_t) VAR_12->size <= VAR_7->headers_out.content_offset) {
            VAR_11->start = VAR_12->size
                         * (VAR_7->headers_out.content_offset / VAR_12->size);
        }

        VAR_11->end = VAR_7->headers_out.content_offset
                   + VAR_7->headers_out.content_length_n;

    } else {
        VAR_11->end = VAR_13.complete_length;
    }

    return VAR_9;
}
