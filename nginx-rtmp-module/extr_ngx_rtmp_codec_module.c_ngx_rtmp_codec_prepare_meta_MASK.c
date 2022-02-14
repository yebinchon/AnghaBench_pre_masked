
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ngx_rtmp_session_t ;
struct TYPE_6__ {int timestamp; int type; int msid; int csid; } ;
typedef TYPE_1__ ngx_rtmp_header_t ;
struct TYPE_7__ {int meta_version; int meta; } ;
typedef TYPE_2__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
typedef int h ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 () ;
 int VAR_4 ;
 TYPE_2__* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_session_t *VAR_5, uint32_t VAR_6)
{
    ngx_rtmp_header_t VAR_7;
    ngx_rtmp_codec_ctx_t *VAR_8;

    VAR_8 = FUNC_2(VAR_5, VAR_4);

    FUNC_0(&VAR_7, sizeof(VAR_7));
    VAR_7.csid = VAR_1;
    VAR_7.msid = VAR_3;
    VAR_7.type = VAR_2;
    VAR_7.timestamp = VAR_6;
    FUNC_3(VAR_5, &VAR_7, ((void*)0), VAR_8->meta);

    VAR_8->meta_version = FUNC_1();

    return VAR_0;
}
