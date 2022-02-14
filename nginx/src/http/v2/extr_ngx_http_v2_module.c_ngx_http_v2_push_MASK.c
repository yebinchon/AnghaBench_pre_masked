
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_11__ {int push; int * pushes; } ;
typedef TYPE_3__ ngx_http_v2_loc_conf_t ;
typedef int ngx_http_complex_value_t ;
struct TYPE_12__ {int * complex_value; TYPE_2__* value; TYPE_5__* cf; } ;
typedef TYPE_4__ ngx_http_compile_complex_value_t ;
struct TYPE_13__ {int pool; TYPE_1__* args; } ;
typedef TYPE_5__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_9__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int * FUNC_0 (int ,int,int) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 scalar_t__ FUNC_4 (int ,char*) ;

__attribute__((used)) static char *
FUNC_5(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_http_v2_loc_conf_t *VAR_6 = VAR_5;

    ngx_str_t *VAR_7;
    ngx_http_complex_value_t *VAR_8;
    ngx_http_compile_complex_value_t VAR_9;

    VAR_7 = VAR_3->args->elts;

    if (FUNC_4(VAR_7[1].data, "off") == 0) {

        if (VAR_6->pushes) {
            return "\"off\" parameter cannot be used with URI";
        }

        if (VAR_6->push == 0) {
            return "is duplicate";
        }

        VAR_6->push = 0;
        return VAR_1;
    }

    if (VAR_6->push == 0) {
        return "URI cannot be used with \"off\" parameter";
    }

    VAR_6->push = 1;

    if (VAR_6->pushes == ((void*)0)) {
        VAR_6->pushes = FUNC_0(VAR_3->pool, 1,
                                         sizeof(ngx_http_complex_value_t));
        if (VAR_6->pushes == ((void*)0)) {
            return VAR_0;
        }
    }

    VAR_8 = FUNC_1(VAR_6->pushes);
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }

    FUNC_3(&VAR_9, sizeof(ngx_http_compile_complex_value_t));

    VAR_9.cf = VAR_3;
    VAR_9.value = &VAR_7[1];
    VAR_9.complex_value = VAR_8;

    if (FUNC_2(&VAR_9) != VAR_2) {
        return VAR_0;
    }

    return VAR_1;
}
