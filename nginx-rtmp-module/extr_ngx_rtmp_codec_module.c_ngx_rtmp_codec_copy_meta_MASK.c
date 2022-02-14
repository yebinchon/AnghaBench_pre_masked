
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
struct TYPE_5__ {int timestamp; } ;
typedef TYPE_1__ ngx_rtmp_header_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
struct TYPE_6__ {int * meta; } ;
typedef TYPE_2__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_3, ngx_rtmp_header_t *VAR_4,
        ngx_chain_t *VAR_5)
{
    ngx_rtmp_codec_ctx_t *VAR_6;
    ngx_rtmp_core_srv_conf_t *VAR_7;

    VAR_6 = FUNC_3(VAR_3, VAR_1);

    VAR_7 = FUNC_4(VAR_3, VAR_2);

    if (VAR_6->meta) {
        FUNC_2(VAR_7, VAR_6->meta);
    }

    VAR_6->meta = FUNC_0(VAR_7, ((void*)0), VAR_5);

    if (VAR_6->meta == ((void*)0)) {
        return VAR_0;
    }

    return FUNC_1(VAR_3, VAR_4->timestamp);
}
