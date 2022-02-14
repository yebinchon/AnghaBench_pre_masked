
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_13__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_14__ {scalar_t__ expires; int expires_time; TYPE_4__* expires_value; } ;
typedef TYPE_3__ ngx_http_headers_conf_t ;
struct TYPE_15__ {int * lengths; } ;
typedef TYPE_4__ ngx_http_complex_value_t ;
struct TYPE_16__ {TYPE_4__* complex_value; TYPE_2__* value; TYPE_6__* cf; } ;
typedef TYPE_5__ ngx_http_compile_complex_value_t ;
struct TYPE_17__ {int pool; TYPE_1__* args; } ;
typedef TYPE_6__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_12__ {int nelts; TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__*,int *,char**) ;
 int FUNC_2 (TYPE_5__*,int) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_6, ngx_command_t *VAR_7, void *VAR_8)
{
    ngx_http_headers_conf_t *VAR_9 = VAR_8;

    char *VAR_10;
    ngx_str_t *VAR_11;
    ngx_int_t VAR_12;
    ngx_uint_t VAR_13;
    ngx_http_complex_value_t VAR_14;
    ngx_http_compile_complex_value_t VAR_15;

    if (VAR_9->expires != VAR_4) {
        return "is duplicate";
    }

    VAR_11 = VAR_6->args->elts;

    if (VAR_6->args->nelts == 2) {

        VAR_9->expires = VAR_2;

        VAR_13 = 1;

    } else {

        if (FUNC_4(VAR_11[1].data, "modified") != 0) {
            return "invalid value";
        }

        VAR_9->expires = VAR_3;

        VAR_13 = 2;
    }

    FUNC_2(&VAR_15, sizeof(ngx_http_compile_complex_value_t));

    VAR_15.cf = VAR_6;
    VAR_15.value = &VAR_11[VAR_13];
    VAR_15.complex_value = &VAR_14;

    if (FUNC_0(&VAR_15) != VAR_5) {
        return VAR_0;
    }

    if (VAR_14.lengths != ((void*)0)) {

        VAR_9->expires_value = FUNC_3(VAR_6->pool,
                                        sizeof(ngx_http_complex_value_t));
        if (VAR_9->expires_value == ((void*)0)) {
            return VAR_0;
        }

        *VAR_9->expires_value = VAR_14;

        return VAR_1;
    }

    VAR_12 = FUNC_1(&VAR_11[VAR_13], &VAR_9->expires, &VAR_9->expires_time,
                                &VAR_10);
    if (VAR_12 != VAR_5) {
        return VAR_10;
    }

    return VAR_1;
}
