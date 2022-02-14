
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_2__ {int method; int * url; } ;
typedef TYPE_1__ ngx_rtmp_notify_srv_conf_t ;
typedef int ngx_conf_t ;


 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static char *
FUNC_2(ngx_conf_t *VAR_3, void *VAR_4, void *VAR_5)
{
    ngx_rtmp_notify_srv_conf_t *VAR_6 = VAR_4;
    ngx_rtmp_notify_srv_conf_t *VAR_7 = VAR_5;
    ngx_uint_t VAR_8;

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
        FUNC_0(VAR_7->url[VAR_8], VAR_6->url[VAR_8], ((void*)0));
    }

    FUNC_1(VAR_7->method, VAR_6->method,
                              VAR_1);

    return VAR_0;
}
