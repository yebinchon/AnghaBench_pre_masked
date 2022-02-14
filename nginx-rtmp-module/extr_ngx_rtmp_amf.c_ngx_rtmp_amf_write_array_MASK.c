
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int u_char ;
typedef int ngx_rtmp_amf_elt_t ;
typedef int ngx_rtmp_amf_ctx_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,size_t*,int) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_amf_ctx_t *VAR_2,
        ngx_rtmp_amf_elt_t *VAR_3, size_t VAR_4)
{
    uint32_t VAR_5;
    size_t VAR_6;
    u_char VAR_7[4];

    VAR_5 = VAR_4;
    if (FUNC_0(VAR_2,
                FUNC_1(VAR_7,
                    &VAR_5, 4), 4) != VAR_1)
    {
        return VAR_0;
    }

    for(VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
        if (FUNC_2(VAR_2, &VAR_3[VAR_6], 1) != VAR_1) {
            return VAR_0;
        }
    }

    return VAR_1;
}
