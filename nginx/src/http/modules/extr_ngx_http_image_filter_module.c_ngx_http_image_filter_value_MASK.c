
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ngx_uint_t ;
struct TYPE_3__ {int len; char* data; } ;
typedef TYPE_1__ ngx_str_t ;
typedef scalar_t__ ngx_int_t ;


 scalar_t__ FUNC_0 (char*,int) ;

__attribute__((used)) static ngx_uint_t
FUNC_1(ngx_str_t *VAR_0)
{
    ngx_int_t VAR_1;

    if (VAR_0->len == 1 && VAR_0->data[0] == '-') {
        return (ngx_uint_t) -1;
    }

    VAR_1 = FUNC_0(VAR_0->data, VAR_0->len);

    if (VAR_1 > 0) {
        return (ngx_uint_t) VAR_1;
    }

    return 0;
}
