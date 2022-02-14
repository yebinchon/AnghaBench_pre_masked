
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ u_char ;
struct TYPE_5__ {size_t len; int data; } ;
struct TYPE_6__ {TYPE_1__ name; } ;
typedef TYPE_2__ ngx_rtmp_amf_elt_t ;
typedef int ngx_rtmp_amf_ctx_t ;
typedef int ngx_int_t ;
typedef int name ;



 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int const FUNC_0 (int *,...) ;
 int const FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (size_t*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (char*,int ,size_t) ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_rtmp_amf_ctx_t *VAR_2, ngx_rtmp_amf_elt_t *VAR_3,
        size_t VAR_4)
{
    uint8_t VAR_5;
    uint16_t VAR_6;
    size_t VAR_7, VAR_8, VAR_9;
    ngx_int_t VAR_10;
    u_char VAR_11[2];

    VAR_9 = 0;
    for(VAR_7 = 0; VAR_7 < VAR_4; ++VAR_7) {
        VAR_8 = VAR_3[VAR_7].name.len;
        if (VAR_8 > VAR_9)
            VAR_9 = VAR_8;
    }

    for( ;; ) {


        char VAR_12[VAR_9];







        switch (FUNC_0(VAR_2, VAR_11, 2)) {
        case 129:

            return 128;
        case 128:
            break;
        default:
            return VAR_0;
        }

        FUNC_2(&VAR_6, VAR_11, 2);

        if (!VAR_6)
            break;

        if (VAR_6 <= VAR_9) {
            VAR_10 = FUNC_0(VAR_2, VAR_12, VAR_6);

        } else {
            VAR_10 = FUNC_0(VAR_2, VAR_12, VAR_9);
            if (VAR_10 != 128)
                return VAR_0;
            VAR_10 = FUNC_0(VAR_2, 0, VAR_6 - VAR_9);
        }

        if (VAR_10 != 128)
            return VAR_0;



        for(VAR_7 = 0; VAR_7 < VAR_4
                && (VAR_6 != VAR_3[VAR_7].name.len
                    || FUNC_3(VAR_12, VAR_3[VAR_7].name.data, VAR_6));
                ++VAR_7);

        if (FUNC_1(VAR_2, VAR_7 < VAR_4 ? &VAR_3[VAR_7] : ((void*)0), 1) != 128)
            return VAR_0;
    }

    if (FUNC_0(VAR_2, &VAR_5, 1) != 128
        || VAR_5 != VAR_1)
    {
        return VAR_0;
    }

    return 128;
}
