
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_8__ {int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_9__ {scalar_t__ directio; } ;
typedef TYPE_3__ ngx_http_core_loc_conf_t ;
struct TYPE_10__ {TYPE_1__* args; } ;
typedef TYPE_4__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_7__ {TYPE_2__* elts; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,char*) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_4, ngx_command_t *VAR_5, void *VAR_6)
{
    ngx_http_core_loc_conf_t *VAR_7 = VAR_6;

    ngx_str_t *VAR_8;

    if (VAR_7->directio != VAR_1) {
        return "is duplicate";
    }

    VAR_8 = VAR_4->args->elts;

    if (FUNC_1(VAR_8[1].data, "off") == 0) {
        VAR_7->directio = VAR_3;
        return VAR_0;
    }

    VAR_7->directio = FUNC_0(&VAR_8[1]);
    if (VAR_7->directio == (off_t) VAR_2) {
        return "invalid value";
    }

    return VAR_0;
}
