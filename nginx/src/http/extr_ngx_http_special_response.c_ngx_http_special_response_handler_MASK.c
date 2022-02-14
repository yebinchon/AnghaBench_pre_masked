
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_22__ {scalar_t__ msie; } ;
struct TYPE_19__ {scalar_t__ len; } ;
struct TYPE_20__ {TYPE_2__ content_type; } ;
struct TYPE_23__ {int err_status; int error_page; scalar_t__ uri_changes; int expect_tested; TYPE_5__ headers_in; scalar_t__ keepalive; TYPE_3__ headers_out; scalar_t__ lingering_close; int args; int uri; TYPE_1__* connection; } ;
typedef TYPE_6__ ngx_http_request_t ;
struct TYPE_24__ {int status; } ;
typedef TYPE_7__ ngx_http_err_page_t ;
struct TYPE_25__ {scalar_t__ recursive_error_pages; scalar_t__ msie_refresh; TYPE_4__* error_pages; } ;
typedef TYPE_8__ ngx_http_core_loc_conf_t ;
struct TYPE_21__ {size_t nelts; TYPE_7__* elts; } ;
struct TYPE_18__ {int log; } ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;




 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (TYPE_6__*) ;
 TYPE_8__* FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_8__*,size_t) ;
 int FUNC_5 (int ,int ,int ,char*,int,int *,int *) ;

ngx_int_t
FUNC_6(ngx_http_request_t *VAR_14, ngx_int_t VAR_15)
{
    ngx_uint_t VAR_16, VAR_17;
    ngx_http_err_page_t *VAR_18;
    ngx_http_core_loc_conf_t *VAR_19;

    FUNC_5(VAR_11, VAR_14->connection->log, 0,
                   "http special response: %i, \"%V?%V\"",
                   VAR_15, &VAR_14->uri, &VAR_14->args);

    VAR_14->err_status = VAR_15;

    if (VAR_14->keepalive) {
        switch (VAR_15) {
            case 134:
            case 131:
            case 129:
            case 128:
            case 136:
            case 135:
            case 133:
            case 132:
                VAR_14->keepalive = 0;
        }
    }

    if (VAR_14->lingering_close) {
        switch (VAR_15) {
            case 134:
            case 128:
            case 136:
            case 135:
                VAR_14->lingering_close = 0;
        }
    }

    VAR_14->headers_out.content_type.len = 0;

    VAR_19 = FUNC_1(VAR_14, VAR_13);

    if (!VAR_14->error_page && VAR_19->error_pages && VAR_14->uri_changes != 0) {

        if (VAR_19->recursive_error_pages == 0) {
            VAR_14->error_page = 1;
        }

        VAR_18 = VAR_19->error_pages->elts;

        for (VAR_16 = 0; VAR_16 < VAR_19->error_pages->nelts; VAR_16++) {
            if (VAR_18[VAR_16].status == VAR_15) {
                return FUNC_2(VAR_14, &VAR_18[VAR_16]);
            }
        }
    }

    VAR_14->expect_tested = 1;

    if (FUNC_0(VAR_14) != VAR_12) {
        VAR_14->keepalive = 0;
    }

    if (VAR_19->msie_refresh
        && VAR_14->headers_in.msie
        && (VAR_15 == VAR_4
            || VAR_15 == VAR_5))
    {
        return FUNC_3(VAR_14);
    }

    if (VAR_15 == VAR_0) {

        VAR_17 = 0;

    } else if (VAR_15 == VAR_7) {

        VAR_17 = 0;

    } else if (VAR_15 >= VAR_4
               && VAR_15 < VAR_1)
    {

        VAR_17 = VAR_15 - VAR_4 + VAR_8;

    } else if (VAR_15 >= 134
               && VAR_15 < VAR_2)
    {

        VAR_17 = VAR_15 - 134 + VAR_9;

    } else if (VAR_15 >= VAR_6
               && VAR_15 < VAR_3)
    {

        VAR_17 = VAR_15 - VAR_6 + VAR_10;
        switch (VAR_15) {
            case 128:
            case 136:
            case 135:
            case 130:
                VAR_14->err_status = 134;
        }

    } else {

        VAR_17 = 0;
    }

    return FUNC_4(VAR_14, VAR_19, VAR_17);
}
