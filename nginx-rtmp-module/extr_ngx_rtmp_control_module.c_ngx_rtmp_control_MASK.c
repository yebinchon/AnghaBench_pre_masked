
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handler; } ;
typedef TYPE_1__ ngx_http_core_loc_conf_t ;
typedef int ngx_conf_t ;
typedef int ngx_command_t ;


 char* FUNC_0 (int *,int *,void*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_2, ngx_command_t *VAR_3, void *VAR_4)
{
    ngx_http_core_loc_conf_t *VAR_5;

    VAR_5 = FUNC_1(VAR_2, VAR_0);
    VAR_5->handler = VAR_1;

    return FUNC_0(VAR_2, VAR_3, VAR_4);
}
