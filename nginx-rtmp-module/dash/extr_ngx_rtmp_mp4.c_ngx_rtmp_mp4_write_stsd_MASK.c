
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ngx_rtmp_session_t ;
typedef scalar_t__ ngx_rtmp_mp4_track_type_t ;
typedef int ngx_int_t ;
typedef int ngx_buf_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_rtmp_session_t *VAR_2, ngx_buf_t *VAR_3,
    ngx_rtmp_mp4_track_type_t VAR_4)
{
    u_char *VAR_5;

    VAR_5 = FUNC_1(VAR_3, "stsd");


    FUNC_0(VAR_3, 0);


    FUNC_0(VAR_3, 1);

    if (VAR_4 == VAR_1) {
        FUNC_4(VAR_2, VAR_3);
    } else {
        FUNC_3(VAR_2, VAR_3);
    }

    FUNC_2(VAR_3, VAR_5);

    return VAR_0;
}
