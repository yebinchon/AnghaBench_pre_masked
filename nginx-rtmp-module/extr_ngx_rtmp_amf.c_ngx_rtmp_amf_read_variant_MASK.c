
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int type; int len; int data; } ;
typedef TYPE_1__ ngx_rtmp_amf_elt_t ;
typedef int ngx_rtmp_amf_ctx_t ;
typedef scalar_t__ ngx_int_t ;
typedef int elt ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ FUNC_1 (int *,int*,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_1__*,int) ;

__attribute__((used)) static ngx_int_t
FUNC_3(ngx_rtmp_amf_ctx_t *VAR_2, ngx_rtmp_amf_elt_t *VAR_3,
        size_t VAR_4)
{
    uint8_t VAR_5;
    ngx_int_t VAR_6;
    size_t VAR_7;
    ngx_rtmp_amf_elt_t VAR_8;

    VAR_6 = FUNC_1(VAR_2, &VAR_5, 1);
    if (VAR_6 != VAR_0) {
        return VAR_6;
    }

    FUNC_0(&VAR_8, sizeof(VAR_8));
    for (VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7, ++VAR_3) {
        if (VAR_5 == VAR_3->type) {
            VAR_8.data = VAR_3->data;
            VAR_8.len = VAR_3->len;
        }
    }

    VAR_8.type = VAR_5 | VAR_1;

    return FUNC_2(VAR_2, &VAR_8, 1);
}
