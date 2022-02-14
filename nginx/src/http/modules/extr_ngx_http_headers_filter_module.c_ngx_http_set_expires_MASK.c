
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u_char ;
typedef scalar_t__ time_t ;
typedef size_t ngx_uint_t ;
struct TYPE_20__ {size_t len; int * data; } ;
struct TYPE_17__ {int hash; TYPE_5__ value; TYPE_5__ key; } ;
typedef TYPE_2__ ngx_table_elt_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_15__ {size_t nelts; TYPE_2__** elts; } ;
struct TYPE_16__ {int last_modified_time; TYPE_12__ cache_control; int headers; TYPE_2__* expires; } ;
struct TYPE_18__ {int pool; TYPE_1__ headers_out; } ;
typedef TYPE_3__ ngx_http_request_t ;
struct TYPE_19__ {scalar_t__ expires; scalar_t__ expires_time; int * expires_value; } ;
typedef TYPE_4__ ngx_http_headers_conf_t ;
typedef scalar_t__ ngx_http_expires_t ;
struct TYPE_14__ {scalar_t__ len; int data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (TYPE_12__*,int ,int,int) ;
 TYPE_2__** FUNC_1 (TYPE_12__*) ;
 TYPE_10__ VAR_8 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *,int *) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*,scalar_t__*,char**) ;
 int FUNC_4 (int *,scalar_t__) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int ,int) ;
 int * FUNC_9 (int *,char*,scalar_t__) ;
 int FUNC_10 (TYPE_5__*,char*) ;
 scalar_t__ FUNC_11 () ;

__attribute__((used)) static ngx_int_t
FUNC_12(ngx_http_request_t *VAR_9, ngx_http_headers_conf_t *VAR_10)
{
    char *VAR_11;
    size_t VAR_12;
    time_t VAR_13, VAR_14, VAR_15;
    ngx_str_t VAR_16;
    ngx_int_t VAR_17;
    ngx_uint_t VAR_18;
    ngx_table_elt_t *VAR_19, *VAR_20, **VAR_21;
    ngx_http_expires_t VAR_22;

    VAR_22 = VAR_10->expires;
    VAR_14 = VAR_10->expires_time;

    if (VAR_10->expires_value != ((void*)0)) {

        if (FUNC_2(VAR_9, VAR_10->expires_value, &VAR_16) != VAR_6) {
            return VAR_0;
        }

        VAR_17 = FUNC_3(&VAR_16, &VAR_22, &VAR_14, &VAR_11);

        if (VAR_17 != VAR_6) {
            return VAR_6;
        }

        if (VAR_22 == VAR_5) {
            return VAR_6;
        }
    }

    VAR_19 = VAR_9->headers_out.expires;

    if (VAR_19 == ((void*)0)) {

        VAR_19 = FUNC_5(&VAR_9->headers_out.headers);
        if (VAR_19 == ((void*)0)) {
            return VAR_0;
        }

        VAR_9->headers_out.expires = VAR_19;

        VAR_19->hash = 1;
        FUNC_10(&VAR_19->key, "Expires");
    }

    VAR_12 = sizeof("Mon, 28 Sep 1970 06:00:00 GMT");
    VAR_19->value.len = VAR_12 - 1;

    VAR_21 = VAR_9->headers_out.cache_control.elts;

    if (VAR_21 == ((void*)0)) {

        if (FUNC_0(&VAR_9->headers_out.cache_control, VAR_9->pool,
                           1, sizeof(ngx_table_elt_t *))
            != VAR_6)
        {
            return VAR_0;
        }

        VAR_20 = FUNC_5(&VAR_9->headers_out.headers);
        if (VAR_20 == ((void*)0)) {
            return VAR_0;
        }

        VAR_20->hash = 1;
        FUNC_10(&VAR_20->key, "Cache-Control");

        VAR_21 = FUNC_1(&VAR_9->headers_out.cache_control);
        if (VAR_21 == ((void*)0)) {
            return VAR_0;
        }

        *VAR_21 = VAR_20;

    } else {
        for (VAR_18 = 1; VAR_18 < VAR_9->headers_out.cache_control.nelts; VAR_18++) {
            VAR_21[VAR_18]->hash = 0;
        }

        VAR_20 = VAR_21[0];
    }

    if (VAR_22 == VAR_3) {
        VAR_19->value.data = (u_char *) "Thu, 01 Jan 1970 00:00:01 GMT";
        FUNC_10(&VAR_20->value, "no-cache");
        return VAR_6;
    }

    if (VAR_22 == VAR_4) {
        VAR_19->value.data = (u_char *) "Thu, 31 Dec 2037 23:55:55 GMT";

        FUNC_10(&VAR_20->value, "max-age=315360000");
        return VAR_6;
    }

    VAR_19->value.data = FUNC_8(VAR_9->pool, VAR_12);
    if (VAR_19->value.data == ((void*)0)) {
        return VAR_0;
    }

    if (VAR_14 == 0 && VAR_22 != VAR_2) {
        FUNC_6(VAR_19->value.data, VAR_8.data,
                   VAR_8.len + 1);
        FUNC_10(&VAR_20->value, "max-age=0");
        return VAR_6;
    }

    VAR_13 = FUNC_11();

    if (VAR_22 == VAR_2) {
        VAR_14 = FUNC_7(VAR_14);
        VAR_15 = VAR_14 - VAR_13;

    } else if (VAR_22 == VAR_1
               || VAR_9->headers_out.last_modified_time == -1)
    {
        VAR_15 = VAR_14;
        VAR_14 += VAR_13;

    } else {
        VAR_14 += VAR_9->headers_out.last_modified_time;
        VAR_15 = VAR_14 - VAR_13;
    }

    FUNC_4(VAR_19->value.data, VAR_14);

    if (VAR_10->expires_time < 0 || VAR_15 < 0) {
        FUNC_10(&VAR_20->value, "no-cache");
        return VAR_6;
    }

    VAR_20->value.data = FUNC_8(VAR_9->pool,
                                 sizeof("max-age=") + VAR_7 + 1);
    if (VAR_20->value.data == ((void*)0)) {
        return VAR_0;
    }

    VAR_20->value.len = FUNC_9(VAR_20->value.data, "max-age=%T", VAR_15)
                    - VAR_20->value.data;

    return VAR_6;
}
