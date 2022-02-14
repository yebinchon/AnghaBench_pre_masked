
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_char ;
typedef int ngx_http_request_t ;
struct TYPE_3__ {size_t len; uintptr_t data; } ;
typedef TYPE_1__ ngx_http_log_op_t ;



__attribute__((used)) static u_char *
FUNC_0(ngx_http_request_t *VAR_0, u_char *VAR_1,
    ngx_http_log_op_t *VAR_2)
{
    size_t VAR_3;
    uintptr_t VAR_4;

    VAR_3 = VAR_2->len;
    VAR_4 = VAR_2->data;

    while (VAR_3--) {
        *VAR_1++ = (u_char) (VAR_4 & 0xff);
        VAR_4 >>= 8;
    }

    return VAR_1;
}
