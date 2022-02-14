
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
typedef int ngx_str_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_10__ {int * complex_value; int * value; TYPE_3__* cf; } ;
typedef TYPE_2__ ngx_http_compile_complex_value_t ;
struct TYPE_11__ {TYPE_1__* args; int pool; } ;
typedef TYPE_3__ ngx_conf_t ;
struct TYPE_12__ {int offset; } ;
typedef TYPE_4__ ngx_command_t ;
typedef int ngx_array_t ;
struct TYPE_9__ {size_t nelts; int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_0 (int ,int,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;

char *
FUNC_4(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    char *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;
    ngx_uint_t VAR_9;
    ngx_array_t **VAR_10;
    ngx_http_complex_value_t *VAR_11;
    ngx_http_compile_complex_value_t VAR_12;

    VAR_10 = (ngx_array_t **) (VAR_7 + VAR_5->offset);

    if (*VAR_10 == VAR_2) {
        *VAR_10 = FUNC_0(VAR_4->pool, 1, sizeof(ngx_http_complex_value_t));
        if (*VAR_10 == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_8 = VAR_4->args->elts;

    for (VAR_9 = 1; VAR_9 < VAR_4->args->nelts; VAR_9++) {
        VAR_11 = FUNC_1(*VAR_10);
        if (VAR_11 == ((void*)0)) {
            return VAR_0;
        }

        FUNC_3(&VAR_12, sizeof(ngx_http_compile_complex_value_t));

        VAR_12.cf = VAR_4;
        VAR_12.value = &VAR_8[VAR_9];
        VAR_12.complex_value = VAR_11;

        if (FUNC_2(&VAR_12) != VAR_3) {
            return VAR_0;
        }
    }

    return VAR_1;
}
