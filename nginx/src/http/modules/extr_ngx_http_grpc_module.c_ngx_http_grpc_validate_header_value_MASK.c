
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_char ;
typedef size_t ngx_uint_t ;
struct TYPE_3__ {size_t len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef int ngx_int_t ;
typedef int ngx_http_request_t ;


 char VAR_0 ;
 char VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static ngx_int_t
FUNC_0(ngx_http_request_t *VAR_4, ngx_str_t *VAR_5)
{
    u_char VAR_6;
    ngx_uint_t VAR_7;

    for (VAR_7 = 0; VAR_7 < VAR_5->len; VAR_7++) {
        VAR_6 = VAR_5->data[VAR_7];

        if (VAR_6 == '\0' || VAR_6 == VAR_0 || VAR_6 == VAR_1) {
            return VAR_2;
        }
    }

    return VAR_3;
}
