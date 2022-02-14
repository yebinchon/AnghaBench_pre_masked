
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef scalar_t__ time_t ;
typedef size_t ngx_uint_t ;
typedef int ngx_table_elt_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_19__ {scalar_t__ status_n; int * www_authenticate; } ;
struct TYPE_23__ {TYPE_5__* pipe; TYPE_4__* conf; scalar_t__ cacheable; TYPE_2__ headers_in; } ;
typedef TYPE_6__ ngx_http_upstream_t ;
struct TYPE_20__ {int * www_authenticate; int headers; } ;
struct TYPE_24__ {TYPE_16__* cache; TYPE_3__ headers_out; } ;
typedef TYPE_7__ ngx_http_request_t ;
struct TYPE_25__ {scalar_t__ status; } ;
typedef TYPE_8__ ngx_http_err_page_t ;
struct TYPE_26__ {TYPE_1__* error_pages; } ;
typedef TYPE_9__ ngx_http_core_loc_conf_t ;
struct TYPE_22__ {int temp_file; } ;
struct TYPE_21__ {int cache_valid; int intercept_errors; scalar_t__ intercept_404; } ;
struct TYPE_18__ {size_t nelts; TYPE_8__* elts; } ;
struct TYPE_17__ {scalar_t__ valid_sec; scalar_t__ error; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_16__*,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 TYPE_9__* FUNC_2 (TYPE_7__*,int ) ;
 int FUNC_3 (TYPE_7__*,TYPE_6__*,scalar_t__) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_6,
    ngx_http_upstream_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_uint_t VAR_9;
    ngx_table_elt_t *VAR_10;
    ngx_http_err_page_t *VAR_11;
    ngx_http_core_loc_conf_t *VAR_12;

    VAR_8 = VAR_7->headers_in.status_n;

    if (VAR_8 == VAR_2 && VAR_7->conf->intercept_404) {
        FUNC_3(VAR_6, VAR_7, VAR_2);
        return VAR_4;
    }

    if (!VAR_7->conf->intercept_errors) {
        return VAR_0;
    }

    VAR_12 = FUNC_2(VAR_6, VAR_5);

    if (VAR_12->error_pages == ((void*)0)) {
        return VAR_0;
    }

    VAR_11 = VAR_12->error_pages->elts;
    for (VAR_9 = 0; VAR_9 < VAR_12->error_pages->nelts; VAR_9++) {

        if (VAR_11[VAR_9].status == VAR_8) {

            if (VAR_8 == VAR_3
                && VAR_7->headers_in.www_authenticate)
            {
                VAR_10 = FUNC_4(&VAR_6->headers_out.headers);

                if (VAR_10 == ((void*)0)) {
                    FUNC_3(VAR_6, VAR_7,
                                               VAR_1);
                    return VAR_4;
                }

                *VAR_10 = *VAR_7->headers_in.www_authenticate;

                VAR_6->headers_out.www_authenticate = VAR_10;
            }
            FUNC_3(VAR_6, VAR_7, VAR_8);

            return VAR_4;
        }
    }

    return VAR_0;
}
