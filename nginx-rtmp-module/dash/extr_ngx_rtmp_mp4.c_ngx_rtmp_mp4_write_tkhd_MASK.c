
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_rtmp_session_t ;
typedef scalar_t__ ngx_rtmp_mp4_track_type_t ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_buf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int,int ,int ,int,int ,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_rtmp_session_t *VAR_3, ngx_buf_t *VAR_4,
    ngx_rtmp_mp4_track_type_t VAR_5)
{
    u_char *VAR_6;
    ngx_rtmp_codec_ctx_t *VAR_7;

    VAR_7 = FUNC_0(VAR_3, VAR_2);

    VAR_6 = FUNC_5(VAR_4, "tkhd");


    FUNC_4(VAR_4, 0);


    FUNC_2(VAR_4, 0x0000000f);


    FUNC_3(VAR_4, 0);


    FUNC_3(VAR_4, 0);


    FUNC_3(VAR_4, 1);


    FUNC_3(VAR_4, 0);


    FUNC_3(VAR_4, 0);


    FUNC_3(VAR_4, 0);
    FUNC_3(VAR_4, 0);
    FUNC_3(VAR_4, 0);


    FUNC_1(VAR_4, VAR_5 == VAR_1 ? 0 : 0x0100);


    FUNC_1(VAR_4, 0);

    FUNC_7(VAR_4, 1, 0, 0, 1, 0, 0);

    if (VAR_5 == VAR_1) {
        FUNC_3(VAR_4, (uint32_t) VAR_7->width << 16);
        FUNC_3(VAR_4, (uint32_t) VAR_7->height << 16);
    } else {
        FUNC_3(VAR_4, 0);
        FUNC_3(VAR_4, 0);
    }

    FUNC_6(VAR_4, VAR_6);

    return VAR_0;
}
