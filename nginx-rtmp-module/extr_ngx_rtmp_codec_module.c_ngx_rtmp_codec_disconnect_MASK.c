
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_header_t ;
typedef int ngx_rtmp_core_srv_conf_t ;
struct TYPE_3__ {int * meta; int * aac_header; int * avc_header; } ;
typedef TYPE_1__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_chain_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_session_t *VAR_3, ngx_rtmp_header_t *VAR_4,
        ngx_chain_t *VAR_5)
{
    ngx_rtmp_codec_ctx_t *VAR_6;
    ngx_rtmp_core_srv_conf_t *VAR_7;

    VAR_6 = FUNC_1(VAR_3, VAR_1);
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    VAR_7 = FUNC_2(VAR_3, VAR_2);

    if (VAR_6->avc_header) {
        FUNC_0(VAR_7, VAR_6->avc_header);
        VAR_6->avc_header = ((void*)0);
    }

    if (VAR_6->aac_header) {
        FUNC_0(VAR_7, VAR_6->aac_header);
        VAR_6->aac_header = ((void*)0);
    }

    if (VAR_6->meta) {
        FUNC_0(VAR_7, VAR_6->meta);
        VAR_6->meta = ((void*)0);
    }

    return VAR_0;
}
