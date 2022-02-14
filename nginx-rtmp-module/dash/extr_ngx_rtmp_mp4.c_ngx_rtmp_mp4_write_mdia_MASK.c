
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_rtmp_session_t ;
typedef int ngx_rtmp_mp4_track_type_t ;
typedef int ngx_int_t ;
typedef int ngx_buf_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_1, ngx_buf_t *VAR_2,
    ngx_rtmp_mp4_track_type_t VAR_3)
{
    u_char *VAR_4;

    VAR_4 = FUNC_0(VAR_2, "mdia");

    FUNC_3(VAR_2);
    FUNC_2(VAR_2, VAR_3);
    FUNC_4(VAR_1, VAR_2, VAR_3);

    FUNC_1(VAR_2, VAR_4);

    return VAR_0;
}
