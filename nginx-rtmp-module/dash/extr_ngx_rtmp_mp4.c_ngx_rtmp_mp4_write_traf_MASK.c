
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_rtmp_mp4_sample_t ;
typedef int ngx_int_t ;
typedef int ngx_buf_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int *,int ,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_buf_t *VAR_1, uint32_t VAR_2,
    uint32_t VAR_3, ngx_rtmp_mp4_sample_t *VAR_4,
    ngx_uint_t VAR_5, u_char *VAR_6)
{
    u_char *VAR_7;

    VAR_7 = FUNC_0(VAR_1, "traf");

    FUNC_3(VAR_1);
    FUNC_2(VAR_1, VAR_2);
    FUNC_4(VAR_1, VAR_3, VAR_4, VAR_5, VAR_6);

    FUNC_1(VAR_1, VAR_7);

    return VAR_0;
}
