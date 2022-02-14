
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_3__ {int pool; } ;
typedef TYPE_1__ ngx_http_request_t ;


 void* FUNC_0 (int ,size_t) ;

__attribute__((used)) static void *
FUNC_1(ngx_http_request_t *VAR_0, void *VAR_1, size_t VAR_2)
{
    u_char *VAR_3, *VAR_4;
    void *VAR_5;
    size_t VAR_6;

    VAR_3 = VAR_1;

    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6, ++VAR_3) {
        if (*VAR_3 < 0x20 || *VAR_3 >= 0x7f) {
            break;
        }
    }

    if (VAR_6 == VAR_2) {
        return VAR_1;
    }

    VAR_5 = FUNC_0(VAR_0->pool, VAR_2);
    if (VAR_5 == ((void*)0)) {
        return ((void*)0);
    }

    VAR_3 = VAR_1;
    VAR_4 = VAR_5;

    for (VAR_6 = 0; VAR_6 < VAR_2; ++VAR_6, ++VAR_3, ++VAR_4) {
        *VAR_4 = (*VAR_3 < 0x20 || *VAR_3 >= 0x7f) ? (u_char) ' ' : *VAR_3;
    }

    return VAR_5;
}
