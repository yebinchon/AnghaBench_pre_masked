
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_5__ {scalar_t__ nfrags; int frag; } ;
typedef TYPE_1__ ngx_rtmp_hls_ctx_t ;
struct TYPE_6__ {scalar_t__ winfrags; } ;
typedef TYPE_2__ ngx_rtmp_hls_app_conf_t ;


 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(ngx_rtmp_session_t *VAR_1)
{
    ngx_rtmp_hls_ctx_t *VAR_2;
    ngx_rtmp_hls_app_conf_t *VAR_3;

    VAR_3 = FUNC_0(VAR_1, VAR_0);
    VAR_2 = FUNC_1(VAR_1, VAR_0);

    if (VAR_2->nfrags == VAR_3->winfrags) {
        VAR_2->frag++;
    } else {
        VAR_2->nfrags++;
    }
}
