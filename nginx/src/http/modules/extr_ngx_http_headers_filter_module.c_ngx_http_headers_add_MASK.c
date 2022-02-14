
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


typedef size_t ngx_uint_t ;
struct TYPE_20__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ ngx_str_t ;
struct TYPE_18__ {int data; scalar_t__ len; } ;
struct TYPE_21__ {int * handler; scalar_t__ offset; TYPE_1__ name; } ;
typedef TYPE_4__ ngx_http_set_header_t ;
struct TYPE_22__ {int * headers; } ;
typedef TYPE_5__ ngx_http_headers_conf_t ;
struct TYPE_24__ {struct TYPE_24__* complex_value; TYPE_3__* value; TYPE_8__* cf; } ;
struct TYPE_23__ {int always; TYPE_7__ value; int * handler; scalar_t__ offset; TYPE_3__ key; } ;
typedef TYPE_6__ ngx_http_header_val_t ;
typedef int ngx_http_complex_value_t ;
typedef TYPE_7__ ngx_http_compile_complex_value_t ;
struct TYPE_25__ {TYPE_2__* args; int pool; } ;
typedef TYPE_8__ ngx_conf_t ;
struct TYPE_26__ {int offset; } ;
typedef TYPE_9__ ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_19__ {int nelts; TYPE_3__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,int,int) ;
 TYPE_6__* FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_8__*,int ,char*,TYPE_3__*) ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_7__*) ;
 TYPE_4__* VAR_5 ;
 int FUNC_4 (TYPE_7__*,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,char*) ;

__attribute__((used)) static char *
FUNC_7(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_headers_conf_t *VAR_9 = VAR_8;

    ngx_str_t *VAR_10;
    ngx_uint_t VAR_11;
    ngx_array_t **VAR_12;
    ngx_http_header_val_t *VAR_13;
    ngx_http_set_header_t *VAR_14;
    ngx_http_compile_complex_value_t VAR_15;

    VAR_10 = VAR_6->args->elts;

    VAR_12 = (ngx_array_t **) ((char *) VAR_9 + VAR_7->offset);

    if (*VAR_12 == ((void*)0)) {
        *VAR_12 = FUNC_0(VAR_6->pool, 1,
                                    sizeof(ngx_http_header_val_t));
        if (*VAR_12 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_13 = FUNC_1(*VAR_12);
    if (VAR_13 == ((void*)0)) {
        return VAR_0;
    }

    VAR_13->key = VAR_10[1];
    VAR_13->handler = ((void*)0);
    VAR_13->offset = 0;
    VAR_13->always = 0;

    if (VAR_12 == &VAR_9->headers) {
        VAR_13->handler = VAR_4;

        VAR_14 = VAR_5;
        for (VAR_11 = 0; VAR_14[VAR_11].name.len; VAR_11++) {
            if (FUNC_5(VAR_10[1].data, VAR_14[VAR_11].name.data) != 0) {
                continue;
            }

            VAR_13->offset = VAR_14[VAR_11].offset;
            VAR_13->handler = VAR_14[VAR_11].handler;

            break;
        }
    }

    if (VAR_10[2].len == 0) {
        FUNC_4(&VAR_13->value, sizeof(ngx_http_complex_value_t));

    } else {
        FUNC_4(&VAR_15, sizeof(ngx_http_compile_complex_value_t));

        VAR_15.cf = VAR_6;
        VAR_15.value = &VAR_10[2];
        VAR_15.complex_value = &VAR_13->value;

        if (FUNC_3(&VAR_15) != VAR_3) {
            return VAR_0;
        }
    }

    if (VAR_6->args->nelts == 3) {
        return VAR_1;
    }

    if (FUNC_6(VAR_10[3].data, "always") != 0) {
        FUNC_2(VAR_2, VAR_6, 0,
                           "invalid parameter \"%V\"", &VAR_10[3]);
        return VAR_0;
    }

    VAR_13->always = 1;

    return VAR_1;
}
