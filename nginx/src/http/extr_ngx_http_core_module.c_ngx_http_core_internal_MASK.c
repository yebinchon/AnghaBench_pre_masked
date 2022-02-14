
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int internal; } ;
typedef TYPE_1__ ngx_http_core_loc_conf_t ;
typedef int ngx_conf_t ;
typedef int ngx_command_t ;


 char* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_http_core_loc_conf_t *VAR_5 = VAR_4;

    if (VAR_5->internal != VAR_1) {
        return "is duplicate";
    }

    VAR_5->internal = 1;

    return VAR_0;
}
