
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bufsize; int timeout; } ;
typedef TYPE_1__ ngx_rtmp_netcall_srv_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_1, void *VAR_2, void *VAR_3)
{
    ngx_rtmp_netcall_srv_conf_t *VAR_4 = VAR_2;
    ngx_rtmp_netcall_srv_conf_t *VAR_5 = VAR_3;

    FUNC_0(VAR_5->timeout, VAR_4->timeout, 10000);
    FUNC_1(VAR_5->bufsize, VAR_4->bufsize, 1024);

    return VAR_0;
}
