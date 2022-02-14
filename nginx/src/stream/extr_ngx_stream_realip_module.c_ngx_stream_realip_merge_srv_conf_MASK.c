
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * from; } ;
typedef TYPE_1__ ngx_stream_realip_srv_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;

__attribute__((used)) static char *
FUNC_0(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_stream_realip_srv_conf_t *VAR_4 = VAR_2;
    ngx_stream_realip_srv_conf_t *VAR_5 = VAR_3;

    if (VAR_5->from == ((void*)0)) {
        VAR_5->from = VAR_4->from;
    }

    return VAR_0;
}
