
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_char ;
struct TYPE_9__ {int len; scalar_t__* data; } ;
typedef TYPE_3__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_7__ {int len; scalar_t__* data; } ;
struct TYPE_10__ {TYPE_2__* buf; scalar_t__* pos; TYPE_1__ looked; } ;
typedef TYPE_4__ ngx_http_sub_ctx_t ;
struct TYPE_8__ {scalar_t__* last; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_1(ngx_http_sub_ctx_t *VAR_3, ngx_int_t VAR_4, ngx_str_t *VAR_5)
{
    u_char *VAR_6, *VAR_7, *VAR_8, *VAR_9;

    VAR_8 = VAR_5->data;
    VAR_9 = VAR_5->data + VAR_5->len;

    if (VAR_4 >= 0) {
        VAR_6 = VAR_3->pos + VAR_4;

    } else {
        VAR_7 = VAR_3->looked.data + VAR_3->looked.len;
        VAR_6 = VAR_7 + VAR_4;

        while (VAR_6 < VAR_7 && VAR_8 < VAR_9) {
            if (FUNC_0(*VAR_6) != *VAR_8) {
                return VAR_1;
            }

            VAR_6++;
            VAR_8++;
        }

        VAR_6 = VAR_3->pos;
    }

    while (VAR_6 < VAR_3->buf->last && VAR_8 < VAR_9) {
        if (FUNC_0(*VAR_6) != *VAR_8) {
            return VAR_1;
        }

        VAR_6++;
        VAR_8++;
    }

    if (VAR_8 != VAR_9) {

        return VAR_0;
    }

    return VAR_2;
}
