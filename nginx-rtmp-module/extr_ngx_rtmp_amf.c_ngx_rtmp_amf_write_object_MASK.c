
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct TYPE_5__ {char* data; scalar_t__ len; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
typedef TYPE_2__ ngx_rtmp_amf_elt_t ;
typedef int ngx_rtmp_amf_ctx_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 char* FUNC_1 (int *,int*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_2__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_amf_ctx_t *VAR_2,
        ngx_rtmp_amf_elt_t *VAR_3, size_t VAR_4)
{
    uint16_t VAR_5;
    size_t VAR_6;
    u_char VAR_7[2];

    for(VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {

        VAR_5 = (uint16_t) VAR_3[VAR_6].name.len;

        if (FUNC_0(VAR_2,
                    FUNC_1(VAR_7,
                        &VAR_5, 2), 2) != VAR_1)
        {
            return VAR_0;
        }

        if (FUNC_0(VAR_2, VAR_3[VAR_6].name.data, VAR_5) != VAR_1) {
            return VAR_0;
        }

        if (FUNC_2(VAR_2, &VAR_3[VAR_6], 1) != VAR_1) {
            return VAR_0;
        }
    }

    if (FUNC_0(VAR_2, "\0\0", 2) != VAR_1) {
        return VAR_0;
    }

    return VAR_1;
}
