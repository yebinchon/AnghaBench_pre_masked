
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error_log; } ;
typedef TYPE_1__ ngx_http_core_loc_conf_t ;
typedef int ngx_conf_t ;
typedef int ngx_command_t ;


 char* FUNC_0 (int *,int *) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_0, ngx_command_t *VAR_1, void *VAR_2)
{
    ngx_http_core_loc_conf_t *VAR_3 = VAR_2;

    return FUNC_0(VAR_0, &VAR_3->error_log);
}
