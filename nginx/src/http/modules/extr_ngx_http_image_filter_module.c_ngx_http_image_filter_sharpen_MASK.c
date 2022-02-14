
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ ngx_uint_t ;
typedef int ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_12__ {TYPE_3__* shcv; scalar_t__ sharpen; } ;
typedef TYPE_2__ ngx_http_image_filter_conf_t ;
struct TYPE_13__ {int * lengths; } ;
typedef TYPE_3__ ngx_http_complex_value_t ;
struct TYPE_14__ {TYPE_3__* complex_value; int * value; TYPE_5__* cf; } ;
typedef TYPE_4__ ngx_http_compile_complex_value_t ;
struct TYPE_15__ {int pool; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_11__ {int * elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_5__*,int ,char*,int *) ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_4__*,int) ;
 TYPE_3__* FUNC_4 (int ,int) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_4, ngx_command_t *VAR_5,
    void *VAR_6)
{
    ngx_http_image_filter_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;
    ngx_int_t VAR_9;
    ngx_http_complex_value_t VAR_10;
    ngx_http_compile_complex_value_t VAR_11;

    VAR_8 = VAR_4->args->elts;

    FUNC_3(&VAR_11, sizeof(ngx_http_compile_complex_value_t));

    VAR_11.cf = VAR_4;
    VAR_11.value = &VAR_8[1];
    VAR_11.complex_value = &VAR_10;

    if (FUNC_1(&VAR_11) != VAR_3) {
        return VAR_0;
    }

    if (VAR_10.lengths == ((void*)0)) {
        VAR_9 = FUNC_2(&VAR_8[1]);

        if (VAR_9 < 0) {
            FUNC_0(VAR_2, VAR_4, 0,
                               "invalid value \"%V\"", &VAR_8[1]);
            return VAR_0;
        }

        VAR_7->sharpen = (ngx_uint_t) VAR_9;

    } else {
        VAR_7->shcv = FUNC_4(VAR_4->pool, sizeof(ngx_http_complex_value_t));
        if (VAR_7->shcv == ((void*)0)) {
            return VAR_0;
        }

        *VAR_7->shcv = VAR_10;
    }

    return VAR_1;
}
