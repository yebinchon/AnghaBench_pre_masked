
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_uint_t ;
struct TYPE_4__ {int code; scalar_t__ len; } ;
typedef TYPE_1__ ngx_http_v2_huff_encode_code_t ;
typedef int buf ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (scalar_t__*,int) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

size_t
FUNC_2(u_char *VAR_2, size_t VAR_3, u_char *VAR_4, ngx_uint_t VAR_5)
{
    u_char *VAR_6;
    size_t VAR_7;
    ngx_uint_t VAR_8, VAR_9, VAR_10;
    ngx_http_v2_huff_encode_code_t *VAR_11, *VAR_12;

    VAR_11 = VAR_5 ? VAR_1
                  : VAR_0;
    VAR_7 = 0;
    VAR_8 = 0;
    VAR_9 = 0;

    VAR_6 = VAR_2 + VAR_3;

    while (VAR_2 != VAR_6) {
        VAR_12 = &VAR_11[*VAR_2++];

        VAR_10 = VAR_12->code;
        VAR_9 += VAR_12->len;


        if (VAR_9 < sizeof(VAR_8) * 8) {
            VAR_8 |= VAR_10 << (sizeof(VAR_8) * 8 - VAR_9);
            continue;
        }

        if (VAR_7 + sizeof(VAR_8) >= VAR_3) {
            return 0;
        }

        VAR_9 -= sizeof(VAR_8) * 8;

        VAR_8 |= VAR_10 >> VAR_9;

        FUNC_1(&VAR_4[VAR_7], VAR_8);

        VAR_7 += sizeof(VAR_8);

        VAR_8 = VAR_9 ? VAR_10 << (sizeof(VAR_8) * 8 - VAR_9) : 0;
    }

    if (VAR_9 == 0) {
        return VAR_7;
    }

    VAR_8 |= (ngx_uint_t) -1 >> VAR_9;

    VAR_9 = FUNC_0(VAR_9, 8);

    if (VAR_7 + VAR_9 / 8 >= VAR_3) {
        return 0;
    }

    VAR_8 >>= sizeof(VAR_8) * 8 - VAR_9;

    do {
        VAR_9 -= 8;
        VAR_4[VAR_7++] = (u_char) (VAR_8 >> VAR_9);
    } while (VAR_9);

    return VAR_7;
}
