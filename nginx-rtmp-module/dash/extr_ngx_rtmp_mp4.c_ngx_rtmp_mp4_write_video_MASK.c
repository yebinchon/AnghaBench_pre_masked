
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
typedef int ngx_rtmp_session_t ;
struct TYPE_3__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_1__ ngx_rtmp_codec_ctx_t ;
typedef int ngx_int_t ;
typedef int ngx_buf_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int * FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_2, ngx_buf_t *VAR_3)
{
    u_char *VAR_4;
    ngx_rtmp_codec_ctx_t *VAR_5;

    VAR_5 = FUNC_0(VAR_2, VAR_1);

    VAR_4 = FUNC_3(VAR_3, "avc1");


    FUNC_2(VAR_3, 0);
    FUNC_1(VAR_3, 0);


    FUNC_1(VAR_3, 1);


    FUNC_1(VAR_3, 0);
    FUNC_1(VAR_3, 0);


    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);


    FUNC_1(VAR_3, (uint16_t) VAR_5->width);
    FUNC_1(VAR_3, (uint16_t) VAR_5->height);


    FUNC_2(VAR_3, 0x00480000);
    FUNC_2(VAR_3, 0x00480000);


    FUNC_2(VAR_3, 0);


    FUNC_1(VAR_3, 1);


    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);


    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);
    FUNC_2(VAR_3, 0);
    FUNC_1(VAR_3, 0x18);
    FUNC_1(VAR_3, 0xffff);

    FUNC_5(VAR_2, VAR_3);

    FUNC_4(VAR_3, VAR_4);

    return VAR_0;
}
