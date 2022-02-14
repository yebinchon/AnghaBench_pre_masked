
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_dash_frag_t ;
struct TYPE_5__ {int frag; int * frags; } ;
typedef TYPE_1__ ngx_rtmp_dash_ctx_t ;
struct TYPE_6__ {int winfrags; } ;
typedef TYPE_2__ ngx_rtmp_dash_app_conf_t ;
typedef int ngx_int_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;

__attribute__((used)) static ngx_rtmp_dash_frag_t *
FUNC_2(ngx_rtmp_session_t *VAR_1, ngx_int_t VAR_2)
{
    ngx_rtmp_dash_ctx_t *VAR_3;
    ngx_rtmp_dash_app_conf_t *VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_0);
    VAR_3 = FUNC_1(VAR_1, VAR_0);

    return &VAR_3->frags[(VAR_3->frag + VAR_2) % (VAR_4->winfrags * 2 + 1)];
}
