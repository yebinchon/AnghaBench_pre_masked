
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
typedef int ngx_uint_t ;
typedef int ngx_int_t ;
struct TYPE_4__ {size_t length; } ;
struct TYPE_5__ {TYPE_1__ state; } ;
typedef TYPE_2__ ngx_http_v2_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_v2_connection_t *VAR_4, u_char **VAR_5, u_char *VAR_6,
    ngx_uint_t VAR_7)
{
    u_char *VAR_8, *VAR_9;
    ngx_uint_t VAR_10, VAR_11, VAR_12;

    VAR_8 = *VAR_5;
    VAR_9 = VAR_8;

    VAR_10 = *VAR_9++ & VAR_7;

    if (VAR_10 != VAR_7) {
        if (VAR_4->state.length == 0) {
            return VAR_2;
        }

        VAR_4->state.length--;

        *VAR_5 = VAR_9;
        return VAR_10;
    }

    if (VAR_6 - VAR_8 > VAR_3) {
        VAR_6 = VAR_8 + VAR_3;
    }

    for (VAR_12 = 0; VAR_9 != VAR_6; VAR_12 += 7) {
        VAR_11 = *VAR_9++;

        VAR_10 += (VAR_11 & 0x7f) << VAR_12;

        if (VAR_11 < 128) {
            if ((size_t) (VAR_9 - VAR_8) > VAR_4->state.length) {
                return VAR_2;
            }

            VAR_4->state.length -= VAR_9 - VAR_8;

            *VAR_5 = VAR_9;
            return VAR_10;
        }
    }

    if ((size_t) (VAR_6 - VAR_8) >= VAR_4->state.length) {
        return VAR_2;
    }

    if (VAR_6 == VAR_8 + VAR_3) {
        return VAR_1;
    }

    return VAR_0;
}
