
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_6__ {int frag; int nfrags; } ;
typedef TYPE_1__ ngx_rtmp_hls_ctx_t ;
struct TYPE_7__ {int naming; } ;
typedef TYPE_2__ ngx_rtmp_hls_app_conf_t ;
struct TYPE_8__ {int msec; int sec; } ;




 TYPE_5__* VAR_0 ;
 TYPE_2__* FUNC_0 (int *,int ) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int VAR_1 ;

__attribute__((used)) static uint64_t
FUNC_2(ngx_rtmp_session_t *VAR_2, uint64_t VAR_3)
{
    ngx_rtmp_hls_ctx_t *VAR_4;
    ngx_rtmp_hls_app_conf_t *VAR_5;

    VAR_4 = FUNC_1(VAR_2, VAR_1);

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    switch (VAR_5->naming) {

    case 128:
        return VAR_3;

    case 129:
        return (uint64_t) VAR_0->sec * 1000 + VAR_0->msec;

    default:
        return VAR_4->frag + VAR_4->nfrags;
    }
}
