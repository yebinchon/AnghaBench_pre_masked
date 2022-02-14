
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_str_t ;
struct TYPE_5__ {int main_conf; int srv_conf; int app_conf; } ;
typedef TYPE_1__ ngx_rtmp_session_t ;
typedef int ngx_rtmp_relay_target_t ;
typedef int ngx_rtmp_relay_ctx_t ;
struct TYPE_6__ {int main_conf; int srv_conf; int app_conf; } ;
typedef TYPE_2__ ngx_rtmp_conf_ctx_t ;


 int * FUNC_0 (TYPE_2__*,int *,int *) ;

__attribute__((used)) static ngx_rtmp_relay_ctx_t *
FUNC_1(ngx_rtmp_session_t *VAR_0, ngx_str_t* VAR_1,
        ngx_rtmp_relay_target_t *VAR_2)
{
    ngx_rtmp_conf_ctx_t VAR_3;

    VAR_3.app_conf = VAR_0->app_conf;
    VAR_3.srv_conf = VAR_0->srv_conf;
    VAR_3.main_conf = VAR_0->main_conf;

    return FUNC_0(&VAR_3, VAR_1, VAR_2);
}
