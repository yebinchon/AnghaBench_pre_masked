
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_19__ {char* data; int len; } ;
struct TYPE_24__ {TYPE_10__ value; } ;
typedef TYPE_5__ ngx_table_elt_t ;
struct TYPE_25__ {int len; char* data; } ;
typedef TYPE_6__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_26__ {int push_preload; TYPE_1__* pushes; } ;
typedef TYPE_7__ ngx_http_v2_loc_conf_t ;
struct TYPE_21__ {size_t nelts; TYPE_5__** elts; } ;
struct TYPE_22__ {TYPE_2__ link; } ;
struct TYPE_27__ {TYPE_4__* connection; TYPE_3__ headers_out; } ;
typedef TYPE_8__ ngx_http_request_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_23__ {int log; } ;
struct TYPE_20__ {size_t nelts; int * elts; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int *,TYPE_6__*) ;
 TYPE_7__* FUNC_1 (TYPE_8__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_8__*,TYPE_6__*,TYPE_6__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int FUNC_4 (int ,int ,int ,char*,TYPE_10__*) ;
 int FUNC_5 (TYPE_6__*,int) ;
 char* FUNC_6 (char*,char*,char) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_9(ngx_http_request_t *VAR_6)
{
    u_char *VAR_7, *VAR_8, *VAR_9;
    ngx_int_t VAR_10;
    ngx_str_t VAR_11;
    ngx_uint_t VAR_12, VAR_13;
    ngx_table_elt_t **VAR_14;
    ngx_http_v2_loc_conf_t *VAR_15;
    ngx_http_complex_value_t *VAR_16;
    ngx_str_t VAR_17[VAR_2];

    FUNC_3(VAR_3, VAR_6->connection->log, 0,
                   "http2 push resources");

    FUNC_5(VAR_17, VAR_2 * sizeof(ngx_str_t));

    VAR_15 = FUNC_1(VAR_6, VAR_5);

    if (VAR_15->pushes) {
        VAR_16 = VAR_15->pushes->elts;

        for (VAR_12 = 0; VAR_12 < VAR_15->pushes->nelts; VAR_12++) {

            if (FUNC_0(VAR_6, &VAR_16[VAR_12], &VAR_11) != VAR_4) {
                return VAR_1;
            }

            if (VAR_11.len == 0) {
                continue;
            }

            if (VAR_11.len == 3 && FUNC_8(VAR_11.data, "off", 3) == 0) {
                continue;
            }

            VAR_10 = FUNC_2(VAR_6, &VAR_11, VAR_17);

            if (VAR_10 == VAR_1) {
                return VAR_1;
            }

            if (VAR_10 == VAR_0) {
                return VAR_4;
            }


        }
    }

    if (!VAR_15->push_preload) {
        return VAR_4;
    }

    VAR_14 = VAR_6->headers_out.link.elts;

    for (VAR_12 = 0; VAR_12 < VAR_6->headers_out.link.nelts; VAR_12++) {

        FUNC_4(VAR_3, VAR_6->connection->log, 0,
                       "http2 parse link: \"%V\"", &VAR_14[VAR_12]->value);

        VAR_7 = VAR_14[VAR_12]->value.data;
        VAR_8 = VAR_14[VAR_12]->value.data + VAR_14[VAR_12]->value.len;

    next_link:

        while (VAR_7 < VAR_8 && *VAR_7 == ' ') { VAR_7++; }

        if (VAR_7 == VAR_8 || *VAR_7++ != '<') {
            continue;
        }

        while (VAR_7 < VAR_8 && *VAR_7 == ' ') { VAR_7++; }

        for (VAR_9 = VAR_7; VAR_9 < VAR_8 && *VAR_9 != '>'; VAR_9++) {

        }

        if (VAR_9 == VAR_7 || VAR_9 == VAR_8) {
            continue;
        }

        VAR_11.len = VAR_9 - VAR_7;
        VAR_11.data = VAR_7;

        VAR_7 = VAR_9 + 1;

        while (VAR_7 < VAR_8 && *VAR_7 == ' ') { VAR_7++; }

        if (VAR_7 == VAR_8) {
            continue;
        }

        if (*VAR_7 == ',') {
            VAR_7++;
            goto next_link;
        }

        if (*VAR_7++ != ';') {
            continue;
        }

        VAR_9 = FUNC_6(VAR_7, VAR_8, ',');

        if (VAR_9 == ((void*)0)) {
            VAR_9 = VAR_8;
        }

        VAR_13 = 0;

        for ( ;; ) {

            while (VAR_7 < VAR_9 && *VAR_7 == ' ') { VAR_7++; }

            if (VAR_9 - VAR_7 >= 6
                && FUNC_7(VAR_7, (u_char *) "nopush", 6) == 0)
            {
                VAR_7 += 6;

                if (VAR_7 == VAR_9 || *VAR_7 == ' ' || *VAR_7 == ';') {
                    VAR_13 = 0;
                    break;
                }

                goto next_param;
            }

            if (VAR_9 - VAR_7 >= 11
                && FUNC_7(VAR_7, (u_char *) "rel=preload", 11) == 0)
            {
                VAR_7 += 11;

                if (VAR_7 == VAR_9 || *VAR_7 == ' ' || *VAR_7 == ';') {
                    VAR_13 = 1;
                }

                goto next_param;
            }

            if (VAR_9 - VAR_7 >= 4
                && FUNC_7(VAR_7, (u_char *) "rel=", 4) == 0)
            {
                VAR_7 += 4;

                while (VAR_7 < VAR_9 && *VAR_7 == ' ') { VAR_7++; }

                if (VAR_7 == VAR_9 || *VAR_7++ != '"') {
                    goto next_param;
                }

                for ( ;; ) {

                    while (VAR_7 < VAR_9 && *VAR_7 == ' ') { VAR_7++; }

                    if (VAR_9 - VAR_7 >= 7
                        && FUNC_7(VAR_7, (u_char *) "preload", 7) == 0)
                    {
                        VAR_7 += 7;

                        if (VAR_7 < VAR_9 && (*VAR_7 == ' ' || *VAR_7 == '"')) {
                            VAR_13 = 1;
                            break;
                        }
                    }

                    while (VAR_7 < VAR_9 && *VAR_7 != ' ' && *VAR_7 != '"') {
                        VAR_7++;
                    }

                    if (VAR_7 == VAR_9) {
                        break;
                    }

                    if (*VAR_7 == '"') {
                        break;
                    }

                    VAR_7++;
                }
            }

        next_param:

            VAR_7 = FUNC_6(VAR_7, VAR_9, ';');

            if (VAR_7 == ((void*)0)) {
                break;
            }

            VAR_7++;
        }

        if (VAR_13) {
            while (VAR_11.len && VAR_11.data[VAR_11.len - 1] == ' ') {
                VAR_11.len--;
            }
        }

        if (VAR_13 && VAR_11.len
            && !(VAR_11.len > 1 && VAR_11.data[0] == '/' && VAR_11.data[1] == '/'))
        {
            VAR_10 = FUNC_2(VAR_6, &VAR_11, VAR_17);

            if (VAR_10 == VAR_1) {
                return VAR_1;
            }

            if (VAR_10 == VAR_0) {
                return VAR_4;
            }


        }

        if (VAR_9 < VAR_8) {
            VAR_7 = VAR_9 + 1;
            goto next_link;
        }
    }

    return VAR_4;
}
