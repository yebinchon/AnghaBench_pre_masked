
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ngx_http_script_code_pt ;
struct TYPE_4__ {int codes; } ;
typedef TYPE_1__ ngx_http_rewrite_loc_conf_t ;
struct TYPE_5__ {int pool; } ;
typedef TYPE_2__ ngx_conf_t ;
typedef int ngx_command_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int *,int) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_3, ngx_command_t *VAR_4, void *VAR_5)
{
    ngx_http_rewrite_loc_conf_t *VAR_6 = VAR_5;

    ngx_http_script_code_pt *VAR_7;

    VAR_7 = FUNC_0(VAR_3->pool, &VAR_6->codes, sizeof(uintptr_t));
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }

    *VAR_7 = VAR_2;

    return VAR_1;
}
