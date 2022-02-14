
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;
typedef struct TYPE_37__ TYPE_19__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_10__ ;


typedef int u_char ;
typedef TYPE_10__* time_t ;
typedef int ngx_uint_t ;
struct TYPE_33__ {int len; char* data; } ;
typedef TYPE_10__ ngx_str_t ;
typedef int ngx_int_t ;
struct TYPE_44__ {int len; } ;
struct TYPE_46__ {scalar_t__ status; int content_length_n; TYPE_19__* accept_ranges; int headers; TYPE_7__ status_line; int content_offset; TYPE_10__* last_modified_time; TYPE_5__* etag; } ;
struct TYPE_41__ {TYPE_3__* if_range; TYPE_2__* range; } ;
struct TYPE_34__ {scalar_t__ http_version; TYPE_9__ headers_out; scalar_t__ single_range; int pool; TYPE_6__* connection; TYPE_4__ headers_in; int allow_ranges; int subrequest_ranges; struct TYPE_34__* main; } ;
typedef TYPE_12__ ngx_http_request_t ;
struct TYPE_45__ {int nelts; } ;
struct TYPE_35__ {TYPE_8__ ranges; int offset; } ;
typedef TYPE_13__ ngx_http_range_filter_ctx_t ;
struct TYPE_36__ {int max_ranges; } ;
typedef TYPE_14__ ngx_http_core_loc_conf_t ;
struct TYPE_43__ {int log; } ;
struct TYPE_42__ {TYPE_10__ value; } ;
struct TYPE_40__ {TYPE_10__ value; } ;
struct TYPE_38__ {int len; int data; } ;
struct TYPE_39__ {TYPE_1__ value; } ;
struct TYPE_37__ {int hash; int value; int key; } ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 TYPE_14__* FUNC_0 (TYPE_12__*,int ) ;
 int FUNC_1 (TYPE_12__*) ;
 int VAR_5 ;
 int FUNC_2 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_3 (TYPE_12__*) ;
 int FUNC_4 (TYPE_12__*,TYPE_13__*,int) ;
 int FUNC_5 (TYPE_12__*,TYPE_13__*) ;
 int FUNC_6 (TYPE_12__*,TYPE_13__*,int ) ;
 TYPE_19__* FUNC_7 (int *) ;
 int FUNC_8 (int ,int ,int ,char*,TYPE_10__*,TYPE_10__*) ;
 TYPE_10__* FUNC_9 (char*,int) ;
 TYPE_13__* FUNC_10 (int ,int) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int ,int *,int) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_14(ngx_http_request_t *VAR_6)
{
    time_t VAR_7;
    ngx_str_t *VAR_8, *VAR_9;
    ngx_uint_t VAR_10;
    ngx_http_core_loc_conf_t *VAR_11;
    ngx_http_range_filter_ctx_t *VAR_12;

    if (VAR_6->http_version < VAR_2
        || VAR_6->headers_out.status != VAR_0
        || (VAR_6 != VAR_6->main && !VAR_6->subrequest_ranges)
        || VAR_6->headers_out.content_length_n == -1
        || !VAR_6->allow_ranges)
    {
        return FUNC_1(VAR_6);
    }

    VAR_11 = FUNC_0(VAR_6, VAR_4);

    if (VAR_11->max_ranges == 0) {
        return FUNC_1(VAR_6);
    }

    if (VAR_6->headers_in.range == ((void*)0)
        || VAR_6->headers_in.range->value.len < 7
        || FUNC_12(VAR_6->headers_in.range->value.data,
                           (u_char *) "bytes=", 6)
           != 0)
    {
        goto next_filter;
    }

    if (VAR_6->headers_in.if_range) {

        VAR_8 = &VAR_6->headers_in.if_range->value;

        if (VAR_8->len >= 2 && VAR_8->data[VAR_8->len - 1] == '"') {

            if (VAR_6->headers_out.etag == ((void*)0)) {
                goto next_filter;
            }

            VAR_9 = &VAR_6->headers_out.etag->value;

            FUNC_8(VAR_3, VAR_6->connection->log, 0,
                           "http ir:%V etag:%V", VAR_8, VAR_9);

            if (VAR_8->len != VAR_9->len
                || FUNC_13(VAR_8->data, VAR_9->data, VAR_9->len) != 0)
            {
                goto next_filter;
            }

            goto parse;
        }

        if (VAR_6->headers_out.last_modified_time == (time_t) -1) {
            goto next_filter;
        }

        VAR_7 = FUNC_9(VAR_8->data, VAR_8->len);

        FUNC_8(VAR_3, VAR_6->connection->log, 0,
                       "http ir:%T lm:%T",
                       VAR_7, VAR_6->headers_out.last_modified_time);

        if (VAR_7 != VAR_6->headers_out.last_modified_time) {
            goto next_filter;
        }
    }

parse:

    VAR_12 = FUNC_10(VAR_6->pool, sizeof(ngx_http_range_filter_ctx_t));
    if (VAR_12 == ((void*)0)) {
        return 130;
    }

    VAR_12->offset = VAR_6->headers_out.content_offset;

    VAR_10 = VAR_6->single_range ? 1 : VAR_11->max_ranges;

    switch (FUNC_4(VAR_6, VAR_12, VAR_10)) {

    case 128:
        FUNC_6(VAR_6, VAR_12, VAR_5);

        VAR_6->headers_out.status = VAR_1;
        VAR_6->headers_out.status_line.len = 0;

        if (VAR_12->ranges.nelts == 1) {
            return FUNC_5(VAR_6, VAR_12);
        }

        return FUNC_2(VAR_6, VAR_12);

    case 129:
        return FUNC_3(VAR_6);

    case 130:
        return 130;

    default:
        break;
    }

next_filter:

    VAR_6->headers_out.accept_ranges = FUNC_7(&VAR_6->headers_out.headers);
    if (VAR_6->headers_out.accept_ranges == ((void*)0)) {
        return 130;
    }

    VAR_6->headers_out.accept_ranges->hash = 1;
    FUNC_11(&VAR_6->headers_out.accept_ranges->key, "Accept-Ranges");
    FUNC_11(&VAR_6->headers_out.accept_ranges->value, "bytes");

    return FUNC_1(VAR_6);
}
