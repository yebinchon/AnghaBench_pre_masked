
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * rules_un; int * rules6; int * rules; } ;
typedef TYPE_1__ ngx_stream_access_srv_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_stream_access_srv_conf_t *VAR_4 = VAR_2;
    ngx_stream_access_srv_conf_t *VAR_5 = VAR_3;

    if (VAR_5->rules == ((void*)0)






    ) {
        VAR_5->rules = VAR_4->rules;






    }

    return VAR_0;
}
