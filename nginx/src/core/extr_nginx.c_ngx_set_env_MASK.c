
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_8__ {size_t len; char* data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_9__ {int env; } ;
typedef TYPE_3__ ngx_core_conf_t ;
struct TYPE_10__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_2__* FUNC_0 (int *) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_core_conf_t *VAR_5 = VAR_4;

    ngx_str_t *VAR_6, *VAR_7;
    ngx_uint_t VAR_8;

    VAR_7 = FUNC_0(&VAR_5->env);
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    VAR_6 = VAR_2->args->elts;
    *VAR_7 = VAR_6[1];

    for (VAR_8 = 0; VAR_8 < VAR_6[1].len; VAR_8++) {

        if (VAR_6[1].data[VAR_8] == '=') {

            VAR_7->len = VAR_8;

            return VAR_1;
        }
    }

    return VAR_1;
}
