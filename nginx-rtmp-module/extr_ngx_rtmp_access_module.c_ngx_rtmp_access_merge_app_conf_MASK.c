
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rules6; int rules; } ;
typedef TYPE_1__ ngx_rtmp_access_app_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static char *
FUNC_1(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_rtmp_access_app_conf_t *VAR_6 = VAR_4;
    ngx_rtmp_access_app_conf_t *VAR_7 = VAR_5;

    if (FUNC_0(&VAR_6->rules, &VAR_7->rules) != VAR_2) {
        return VAR_0;
    }







    return VAR_1;
}
